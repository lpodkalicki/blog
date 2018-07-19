/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/019
 * Simple timer (START/RESET/STOP) using one button and 7-segments display module based on TM1637.
 *
 * Note that this ATtiny13 project is using internal clock which is not precise
 * and time may flow forwards or backwards, but hey!
 * it's still enough to make a good eggs timer :)
 */

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "tm1637.h"

#define	BUTTON_PIN	PB2

#define	TIMER_UPDATE	(1 << 1)
#define	TIMER_STOP	(1 << 2)
#define	TIMER_START	(1 << 3)
#define	TIMER_RESET	(1 << 4)

static volatile uint8_t timer_counter;
static volatile uint8_t timer_events;
static volatile uint8_t timer_seconds;
static volatile uint8_t timer_minutes;
static volatile uint8_t timer_colon;

static void timer_init(void);
static void timer_handler(void);
static void timer_process(void);
static void timer_display(const uint8_t minutes, const uint8_t seconds, const uint8_t colon);

ISR(TIM0_COMPA_vect)
{

	timer_handler();
}

int
main(void)
{
	/* setup */
	timer_init();

	/* loop */
	while (1) {
		timer_process();
	}
}

void
timer_init(void)
{

	TM1637_init(1, 4);
	DDRB &= ~_BV(BUTTON_PIN); // explicity set BUTTON pin as INPUT
	PORTB |= _BV(BUTTON_PIN); // set pull-up resitor for BUTTON pin
	TCCR0A |= _BV(WGM01); // set timer counter mode to CTC
        TCCR0B |= _BV(CS01)|_BV(CS00); // set prescaler to 64 (CLK=1200000Hz/64/250=75Hz)
        OCR0A = 249; // set Timer's counter max value (250 - 1)
        TIMSK0 |= _BV(OCIE0A); // enable Timer CTC interrupt
	timer_counter = timer_seconds = timer_minutes = 0; // reset counters
	timer_events = TIMER_UPDATE | TIMER_RESET; // reset timer & update display
	timer_colon = 1; // show colon
        sei(); // enable global interrupts
}

void
timer_handler(void)
{

	if (!(timer_events & TIMER_START)) {
		return;
	}

	timer_counter++;
	if (timer_counter == 38) {
		timer_colon = 1;
		timer_events |= TIMER_UPDATE;
	} else if (timer_counter == 75) {
		timer_colon = 0;
		timer_counter = 0;
		if (++timer_seconds == 60) {
			timer_seconds = 0;
			if (++timer_minutes == 100) {
				timer_minutes = 0;
			}
		}
		timer_events |= TIMER_UPDATE;
	}
}

void
timer_process(void)
{

	/* Process start/stop/reset */
	if ((PINB & _BV(BUTTON_PIN)) == 0) {
		_delay_ms(10); // time for debounce
		while((PINB & _BV(BUTTON_PIN)) == 0);
		if (timer_events & TIMER_START) {
			timer_colon = 1;
			timer_events = TIMER_UPDATE | TIMER_STOP;
		} else if (timer_events & TIMER_STOP) {
			timer_minutes = timer_seconds = 0;
			timer_colon = 1;
			timer_events = TIMER_UPDATE | TIMER_RESET;
		} else if (timer_events & TIMER_RESET) {
			timer_events = TIMER_START;
		}
	}

	/* Update display */
	if (timer_events & TIMER_UPDATE) {
		timer_display(timer_minutes, timer_seconds, timer_colon);
		timer_events &= ~TIMER_UPDATE;
	}
}

void
timer_display(const uint8_t minutes, const uint8_t seconds, const uint8_t colon)
{

	/* Display minutes */
	TM1637_display_digit(0, minutes / 10);
	TM1637_display_digit(1, minutes % 10);

	/* Display seconds */
	TM1637_display_digit(2, seconds / 10);
	TM1637_display_digit(3, seconds % 10);

	/* Show/hide colon */
	TM1637_display_colon(colon);
}
