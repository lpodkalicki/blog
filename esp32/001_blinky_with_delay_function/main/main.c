/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP32/001
 * Blinky with delay function.
 */

#include "freertos/FreeRTOS.h"
#include "esp_event.h"
#include "driver/gpio.h"

#define	LED_GPIO_PIN	GPIO_NUM_4


void
app_main(void)
{
	int level = 0;

	/* setup */
	gpio_set_direction(LED_GPIO_PIN, GPIO_MODE_OUTPUT);

	/* loop */
	while (true) {
		gpio_set_level(LED_GPIO_PIN, level ^= 1);
		vTaskDelay(500 / portTICK_PERIOD_MS);
    	}
}
