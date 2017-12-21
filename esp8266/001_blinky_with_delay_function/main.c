/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP8266/001
 * Blinky with delay function.
 */

#include <esp/gpio.h>
#include "espressif/esp_common.h"
#include "esp/uart.h"
#include "FreeRTOS.h"
#include "task.h"

#define	LED_PIN		(2)

static void
blinky_task(void *prv)
{

	gpio_enable(LED_PIN, GPIO_OUTPUT);

	while (1) {
		gpio_write(LED_PIN, 1);
                vTaskDelay(100 / portTICK_PERIOD_MS);
		gpio_write(LED_PIN, 0);
		vTaskDelay(100 / portTICK_PERIOD_MS);
	}
}

void
user_init(void)
{

	uart_set_baud(0, 115200);
	printf("SDK version:%s\n", sdk_system_get_sdk_version());
	xTaskCreate(blinky_task, "blinky_task", 256, NULL, 2, NULL);
}
