/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <stdint.h>
#include <memory.h>
#include <esp/gpio.h>
#include <espressif/esp_common.h>
#include <FreeRTOS.h>
#include <task.h>
#include "config.h"
#include "error.h"
#include "audio.h"

static void audio_task(void *priv);
static void fft(void);

static int16_t samples[AUDIO_SAMPLES_NUM];
static int32_t re[AUDIO_SAMPLES_NUM>>1];
static int32_t im[AUDIO_SAMPLES_NUM>>1];
static uint32_t power[AUDIO_SAMPLES_NUM>>1];
static int8_t twiddle_factor[AUDIO_SAMPLES_NUM] = {
	10,
	8,
	3,
	-3,
	-8,
	-9,
	-8,
	-3,
	3,
	8,
};

volatile uint16_t audio_data_processed = 0;
volatile uint32_t audio_fft_freq = 0;
volatile uint32_t audio_fft_pmax = 0;
volatile uint8_t audio_fft_pidx = 0;

volatile uint8_t audio_band0 = 0;
volatile uint8_t audio_band1 = 0;
volatile uint8_t audio_band2 = 0;
volatile uint8_t audio_band3 = 0;

static volatile uint8_t counter = 0;

void
audio_init(void)
{

	xTaskCreate(audio_task, "audio_task", 256, NULL, 2, NULL);
}

void
audio_task(void *priv)
{

	printf("Starting audio_task\n");
	
	while (1) {
		if (counter == AUDIO_SAMPLES_NUM) {			
			fft();
			counter = 0;
		}
	}
}

void
audio_interrupt_handler(void)
{

	/* data acquisition */
	if (counter < AUDIO_SAMPLES_NUM) {
		samples[counter++] = (sdk_system_adc_read() - 512);
	}
}

void
fft(void)
{
	uint16_t a, b, i, j, pidx;
	uint32_t pmax;

	for (i = 0; i < AUDIO_SAMPLES_NUM>>1; ++i) {
                re[i] = 0;
		im[i] = 0;
	}

        for (i = 0; i < AUDIO_SAMPLES_NUM>>1; ++i) {
                a = 0;
		b = 6; // b = 3*AUDIO_SAMPLES_NUM/4, index offset for sin
                for (j = 0; j < AUDIO_SAMPLES_NUM; ++j) {
                        re[i] += samples[j] * twiddle_factor[a % AUDIO_SAMPLES_NUM];
			im[i] -= samples[j] * twiddle_factor[b % AUDIO_SAMPLES_NUM];
                        a += i;
			b += i;
                }
		power[i] = re[i] * re[i] + im[i] * im[i];
        }

	pidx = 0;
	pmax = 0;
	for (i = 0; i < AUDIO_SAMPLES_NUM>>1; ++i) {
		power[i] = power[i] >> 12;
                if (power[i] > pmax) {
			pmax = power[i];
			pidx = i;
		}
	}

	audio_band0 = (power[1] * 255 / pmax) & 255;
	audio_band1 = (power[2] * 255 / pmax) & 255;
	audio_band2 = (power[3] * 255 / pmax) & 255;
	audio_band3 = (power[4] * 255 / pmax) & 255;

	audio_fft_freq = (AUDIO_SAMPLING_FREQUENCY * pidx) / AUDIO_SAMPLES_NUM;
	audio_fft_pmax = pmax;
	audio_fft_pidx = pidx;
}

