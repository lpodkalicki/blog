/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP8266/002
 * Blinky with timer.
 */

#include <esp/gpio.h>
#include "espressif/esp_common.h"
#include "esp/uart.h"
#include "FreeRTOS.h"
#include "task.h"

#define	LED_PIN		(2)
#define	TIMER1_FREQENCY	(2) // 2Hz

void timer1_handler(void *arg)
{

    gpio_toggle(LED_PIN);
}

void
user_init(void)
{

	/* configure UART0 */
	uart_set_baud(0, 115200);
	printf("SDK version:%s\n", sdk_system_get_sdk_version());

	/* configure GPIOs */
	gpio_enable(LED_PIN, GPIO_OUTPUT);

	/* configure Timer1 */
	_xt_isr_attach(INUM_TIMER_FRC1, timer1_handler, NULL);
	timer_set_frequency(FRC1, TIMER1_FREQENCY);
	timer_set_interrupts(FRC1, true);
	timer_set_run(FRC1, true);
}
