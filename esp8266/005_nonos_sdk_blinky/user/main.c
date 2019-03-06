/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ESP8266/005
 * Blinky example using pure ESP8266 Non-OS SDK.
 */

#include "ets_sys.h"
#include "osapi.h"
#include "gpio.h"
#include "os_type.h"
#include "user_config.h"

#define	LED_PIN	(2)

static volatile os_timer_t blinky_timer;

static void blinky_timer_handler(void *prv);

void ICACHE_FLASH_ATTR
user_init()
{
	uint8_t value = 0;

	/* setup */
	gpio_init(); // init gpio subsytem
	gpio_output_set(0, 0, (1 << LED_PIN), 0); // set LED pin as output with low state
	uart_div_modify(0, UART_CLK_FREQ / 115200); // set UART baudrate

	os_printf("\n\nSDK version:%s\n\n", system_get_sdk_version());

	/* start timer (500ms) */
	os_timer_setfn(&blinky_timer, (os_timer_func_t *)blinky_timer_handler, NULL);
  	os_timer_arm(&blinky_timer, 500, 1);
}


void
blinky_timer_handler(void *prv)
{
  	if (GPIO_REG_READ(GPIO_OUT_ADDRESS) & (1 << LED_PIN)) {
    		gpio_output_set(0, (1 << LED_PIN), 0, 0); // LED off
  	} else {
    		gpio_output_set((1 << LED_PIN), 0, 0, 0); // LED on
  	}
}
