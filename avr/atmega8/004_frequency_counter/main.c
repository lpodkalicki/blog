/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATmega8/004
 * Frequency counter (1Hz..1MHz).
 *
 * Wiring diagram for sin/sqr wave source (max 5V p-p):
 * +---------------+-------------+
 * |      MCU      | Wave Source |
 * +---------------+-------------+
 * | PD2/INT0 (14) | signal OUT  |
 * +---------------+-------------+
 * | GND           | GND         |
 * +---------------+-------------+
 *
 * Wiring diagram for serial adapter:
 * +---------------+-------------+
 * |      MCU      |    Serial   |
 * +---------------+-------------+
 * | PD1/TXD (14)  | RXD         |
 * +---------------+-------------+
 * | GND           | GND         |
 * +---------------+-------------+
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "uart.h"
#include "fc.h"


int
main(void)
{

	/* setup */
	UART_init(19200);
	FC_init();

	/* loop */
	while (1) {
		UART_putu32(FC_read());
		UART_putc('\n');
		_delay_ms(1000);
	}
}
