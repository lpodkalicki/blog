/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/048
 * Randomly flashing LED with PRNG based on BBS (Blum-Blum-Shumb).
 */

#include <avr/io.h>
#include <util/delay.h>

#define	LED_PIN  PB0
#define	BBS_P    (13)
#define	BBS_Q    (97)
#define	BBS_SEED (123)
#define	DELAY    (64)

static uint16_t m;
static uint16_t x;
static uint16_t r;

/* Initialize vector of BBS algorithm, where:
-> p: prime number
-> q: prime number
-> seed: random integer greater then 1,
         which is co-prime to 'm',
         where 'm = p*q' and 'GCD(m, seed) == 1'
Note that value of 'm' must be less than '(2^16) - 1'
*/
static void
bbs_init(uint16_t p, uint16_t q, uint16_t seed)
{

	m = p * q;
	r = x = seed;
}

static uint16_t
bbs_next(void)
{

	return (r = (r * x) % m);
}


int
main(void)
{

	/* setup */
	DDRB |= _BV(LED_PIN); // set LED pin as OUTPUT
	bbs_init(BBS_P, BBS_Q, BBS_SEED); // initialize BBS alg.

	/* loop */
	while (1) {
		if (bbs_next() & 1) {
			PORTB |= _BV(LED_PIN);
		} else {
			PORTB &= ~_BV(LED_PIN);
		}
		_delay_ms(DELAY);
	}
}
