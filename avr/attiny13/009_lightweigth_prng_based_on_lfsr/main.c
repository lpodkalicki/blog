/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/009
 * Lightweight 16bit PRNG (Pseudo Random Number Generator) based on LFSR (Linear Feedback Shift Register).
 * --
 * Program code size:
 *  ~116B for basic version, and
 *  ~235B for version w/ random seed value stored in EEPROM (flag USE_RANDOM_SEED).
 * --
 * Settings:
 *  FUSE_L=0x6A
 *  FUSE_H=0xFF
 *  F_CPU=1200000
 */

#include <avr/io.h>
#include <util/delay.h>
#include "random.h"

#define	LED_PIN	PB0


int
main(void)
{
	uint16_t number;

	/* setup */
	DDRB |= _BV(LED_PIN); // set LED pin as OUTPUT
	random_init(0xabcd); // initialize 16 bit seed

	/* loop, simple realization of pseudo random LED blinking */
	while (1) {
		number = random();
		if (number & 0x01) { // odd number
			PORTB |= _BV(LED_PIN);
		} else { // even number
			PORTB &= ~_BV(LED_PIN);
		}
		_delay_ms(100);
	}
}
