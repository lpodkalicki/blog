/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/005
 * Simple blinky with Watchdog Timer.
 */

#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>
#include <avr/sleep.h>

#define	LED_PIN	PB0

ISR(WDT_vect)
{

	PORTB ^= _BV(LED_PIN); // toggle LED pin
}

int
main(void)
{

	/* setup */
	DDRB = 0b00000001; // set LED pin as OUTPUT
	PORTB = 0b00000000; // set all pins to LOW
	wdt_enable(WDTO_500MS); // set prescaler to 0.5s and enable Watchdog Timer
	WDTCR |= _BV(WDTIE); // enable Watchdog Timer interrupt
	sei(); // enable global interrupts

	/* loop */
	while (1);
}

