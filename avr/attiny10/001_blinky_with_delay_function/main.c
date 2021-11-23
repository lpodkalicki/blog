/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny10/001
 * Simple blinky with delay function.
 */

#include <avr/io.h>
#include <util/delay.h>

#define	LED_PIN	PB0

int
main(void)
{
	/* setup */
	CCP = 0xD8; // this register must first be written with the correct signature - 0xD8
	CLKPSR = 0; // sets the clock division factor
	DDRB |= _BV(LED_PIN); // set LED pin as OUTPUT
	PORTB = 0; // set all pins to LOW

	/* loop */
	while (1) {
		PORTB ^= _BV(LED_PIN); // toggle LED pin
		_delay_ms(500);
	}
}
