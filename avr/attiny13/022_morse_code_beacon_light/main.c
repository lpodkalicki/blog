/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/022
 * Morse Code Beacon - flashing light.
 */

#include <avr/io.h>
#include "morsecode.h"

#define	LED_PIN	PB0

int
main(void)
{

	/* setup */
	DDRB = _BV(LED_PIN); // set LED pin as OUTPUT

	/* loop */
	while (1) {
		MORSECODE_puts("SOS");
	}
}

void
MORSECODE_signal_on(void)
{

	PORTB |= _BV(LED_PIN);
}

void
MORSECODE_signal_off(void)
{

	PORTB &= ~_BV(LED_PIN);
}
