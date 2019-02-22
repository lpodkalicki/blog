/**
 * Copyright (c) 2019, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/053
 * Advanced 4-channel clapper switch.
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define	IO1_PIN PB0
#define	IO2_PIN PB2
#define	IO3_PIN PB3
#define	IO4_PIN	PB4
#define	MIC_PIN PB1

static uint8_t timeout = 0;
static volatile uint8_t interrupt = 0;
static volatile uint8_t claps = 0;
static volatile uint8_t counter = 0;

int
main(void)
{

	/* setup */
	DDRB |= _BV(IO1_PIN)|_BV(IO2_PIN)|_BV(IO3_PIN)|_BV(IO4_PIN); // set IOx pins as output
	TCCR0B |= _BV(CS01)|_BV(CS00); // set prescaler to 64 (CLK=1200000Hz/64/256~=73Hz ~=> 13.7ms)
        TIMSK0 |= _BV(TOIE0); // enable Timer Overflow interrupt
	MCUCR &= _BV(ISC00); // any logical change will trigger INT0 interrupt
        GIMSK |= _BV(INT0); // enable INT0 interrupt
	sei(); // enable global interrupts

	/* loop */
	while (1) {
		if (claps) {
			switch (claps) {
			case 1: PORTB ^= _BV(IO1_PIN); break; // 1 clap
			case 2: PORTB ^= _BV(IO2_PIN); break; // 2 claps
			case 3: PORTB ^= _BV(IO3_PIN); break; // 3 claps
			case 4: PORTB ^= _BV(IO4_PIN); break; // 4 claps
			default: break;
			}
			claps = 0; // reset
		}
	}
}

ISR(TIM0_OVF_vect)
{

	if (interrupt) {
		counter++;
		timeout = interrupt = 0; // reset timout and interrupt
	}

	if (++timeout == 80) { // timout after ~1s
        	claps = counter; // set detected number of claps
		counter = 0; // reset counter
		timeout = 0;
		interrupt = 0;
	}
}

ISR(INT0_vect)
{

	interrupt++;
}
