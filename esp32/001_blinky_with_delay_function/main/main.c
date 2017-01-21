/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP32/001
 * Simple blinky with delay function.
 */

#include "freertos/FreeRTOS.h"
#include "esp_event.h"
#include "driver/gpio.h"


void
app_main(void)
{
	int level = 0;

	/* setup */
	gpio_set_direction(GPIO_NUM_4, GPIO_MODE_OUTPUT);

	/* loop */
	while (true) {
		gpio_set_level(GPIO_NUM_4, level = !level);
		vTaskDelay(500 / portTICK_PERIOD_MS);
    	}
}
