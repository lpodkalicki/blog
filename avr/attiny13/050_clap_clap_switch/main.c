/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/050
 * Clap-Clap Switch.
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define	LED_PIN PB0
#define	MIC_PIN PB1

static volatile uint8_t state = 0;

int
main(void)
{
	uint8_t reset = 0, claps = 0;

	/* setup */
	DDRB |= _BV(LED_PIN); // set LED pin as output
	MCUCR &= ~(_BV(ISC01)|_BV(ISC00)); // trigger INT0 interrupt when low level detected
        GIMSK |= _BV(INT0); // enable INT0 interrupt
	sei(); // enable global interrupts

	/* loop */
	while (1) {
		/* if single clap detected then start procedure */
		if (state) {
			claps++; // increment claps count
			if (claps == 1) { // if it's first clap,
				reset = 0; // set reset counter to zero
			} else if (claps == 2) { // if it's second clap,
				PORTB ^= _BV(LED_PIN); // toggle LED on/off
				claps = reset = 0; // and set initial values
			}
			state = 0; // for each clap detection, reset state
			_delay_ms(200); // and wait 0.2s.
		}
		/* if rest counter is max (1s) then set initial values */
		if (++reset >= 10) {
			claps = state = reset = 0;
		}
		_delay_ms(100); // loop delay
	}
}

ISR(INT0_vect)
{

	state = 1;
}
