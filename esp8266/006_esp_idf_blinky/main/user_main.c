/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP8266/006
 * Simple blinky using delay function (ESP8266_RTOS_SDK).
 */

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"

#define	LED_PIN	(2)

void
app_main(void)
{
	/* setup */
	gpio_config_t io_conf;
	io_conf.intr_type = GPIO_INTR_DISABLE; // disable interrupt
	io_conf.mode = GPIO_MODE_OUTPUT; // set as output mode
	io_conf.pin_bit_mask = 1 << LED_PIN; // bitmask
	io_conf.pull_down_en = 0; // disable pull-down mode
	io_conf.pull_up_en = 0; // disable pull-up mode
	gpio_config(&io_conf);

    	printf("SDK version:%s\n", esp_get_idf_version());

	/* loop */
        while (1) {
                gpio_set_level(LED_PIN, 1);
                vTaskDelay(500 / portTICK_PERIOD_MS);
                gpio_set_level(LED_PIN, 0);
                vTaskDelay(500 / portTICK_PERIOD_MS);
        }
}
