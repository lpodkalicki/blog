/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/004
 * Simple blinky with Timer COMPA.
 */

#include <avr/io.h>
#include <avr/interrupt.h>

#define	LED_PIN	PB0

ISR(TIM0_COMPA_vect)
{

	PORTB ^= _BV(LED_PIN); // toggle LED pin
}

int
main(void)
{

	/* setup */
	DDRB = 0b00000001; // set LED pin as OUTPUT
	PORTB = 0b00000000; // set all pins to LOW
        TCCR0A |= _BV(WGM01); // set timer counter mode to CTC
        TCCR0B |= _BV(CS02)|_BV(CS00); // set prescaler to 1024 (CLK=1200000Hz/1024/256=4.57Hz, 0.22s)
        OCR0A = 255; // set Timer's counter max value
        TIMSK0 |= _BV(OCIE0A); // enable Timer CTC interrupt
	sei(); // enable global interrupts

	/* loop */
	while (1);
}

