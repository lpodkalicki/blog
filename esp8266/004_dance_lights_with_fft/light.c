/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <stdint.h>
#include <espressif/esp_common.h>
#include <FreeRTOS.h>
#include <task.h>
#include "config.h"
#include "error.h"
#include "pwm.h"
#include "light.h"

static void light_task(void *priv);

extern volatile uint8_t audio_band0;
extern volatile uint8_t audio_band1;
extern volatile uint8_t audio_band2;
extern volatile uint8_t audio_band3;

void
light_init(void)
{	

	pwm_init();
	pwm_channel_configure(0, LED_RED_PIN, 0, PWM_CHAN_ON);
	pwm_channel_configure(1, LED_GREEN_PIN, 0, PWM_CHAN_ON);
	pwm_channel_configure(2, LED_BLUE_PIN, 0, PWM_CHAN_ON);
	pwm_channel_configure(3, LED_WHITE_PIN, 0, PWM_CHAN_ON);

        xTaskCreate(light_task, "light_task", 512, NULL, 2, NULL);
}

void
light_task(void *priv)
{

	printf("Starting light_task!\n");

	while(1) {
		pwm_channel_set_duty(0, audio_band0);
		pwm_channel_set_duty(1, audio_band1);
		pwm_channel_set_duty(2, audio_band2);
		pwm_channel_set_duty(3, audio_band3);
		vTaskDelay(1 / portTICK_PERIOD_MS);
	};
}

