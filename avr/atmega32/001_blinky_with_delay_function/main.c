/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATmega32/001
 * Simple blinky with delay function.
 *
 * Wiring ascii diagram:
 * +------------+----------+
 * |    MCU     |    LED   |
 * +------------+----------+
 * |  PB0 (1)   |  anode   |
 * +------------+----------+
 * |  GND       |  cathode |
 * +------------+----------+
 *
 */

#include <avr/io.h>
#include <util/delay.h>

#define	LED_PIN	PB0

int
main(void)
{

	/* setup */
	DDRB = 0b00000001; // set LED pin as OUTPUT
	PORTB = 0b00000000; // set all pins to LOW

	/* loop */
	while (1) {
		PORTB ^= _BV(LED_PIN); // toggle LED pin
		_delay_ms(500);
	}
}
