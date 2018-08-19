/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <stdio.h>
#include <espressif/esp_common.h>
#include <esp/uart.h>
#include <FreeRTOS.h>
#include <task.h>
#include "light.h"
#include "audio.h"
#include "system.h"

static void monitor_task(void *priv);
extern volatile uint16_t audio_data_processed;
extern volatile uint32_t audio_fft_freq;
extern volatile uint32_t audio_fft_pmax;
extern volatile uint8_t audio_fft_pidx;

void
user_init(void)
{

	uart_set_baud(0, 115200);
	printf("SDK version:%s\n", sdk_system_get_sdk_version());

	audio_init();
	light_init();
	system_init();

	xTaskCreate(monitor_task, "monitor_task", 256, NULL, 2, NULL);
}

void
monitor_task(void *priv)
{

	while(1) {
		printf("[Monitor] - %u, freq=%u, pmax=%u, pidx=%u\n", audio_data_processed, audio_fft_freq, audio_fft_pmax, audio_fft_pidx);
		vTaskDelay(200 / portTICK_PERIOD_MS);
	};
}

