/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/024
 * Simple Logic Probe.
 *
 *               PB4
 *                |
 * GND <---[10k]--+--[10k]---> VCC (5V)
 *                |
 *              PROBE
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define	LED_LOW_PIN		PB0
#define	LED_HIGH_PIN		PB1
#define	PROBE_PIN		PB4

#define	PROBE_COUNTER_MAX	(255)
#define	PROBE_LOW_THRESHOLD	(400)
#define	PROBE_HIGH_THRESHOLD	(600)

static uint8_t high_cnt = 0;
static uint8_t low_cnt = 0;
static volatile uint8_t counter = 0;

ISR(ADC_vect)
{
        uint8_t low, high;
	uint16_t value;

        if (counter < PROBE_COUNTER_MAX) {
                low = ADCL;
                high = ADCH;
                value = (high << 8) | low;
		/* Zero-level is about value=~512 (because of voltage divider).
		Logic LOW is below 512 and logic HIGH
		is above 512 (see probe thresholds).
		*/
		if (value < PROBE_LOW_THRESHOLD) {
			low_cnt++;
		} else if (value > PROBE_HIGH_THRESHOLD) {
			high_cnt++;
		}
                counter++;
                ADCSRA |= _BV(ADSC); // next signal acquisition
        }
}

int
main(void)
{

	/* setup */
	DDRB |= _BV(LED_LOW_PIN)| _BV(LED_HIGH_PIN); // set LED pins as OUTPUT
	ADCSRA |= _BV(ADPS1)|_BV(ADPS0); // set ADC division factor to 8
        ADCSRA |= _BV(ADEN)|_BV(ADIE); // enable ADC interrupt
        ADMUX = _BV(MUX1); // select PROBE_PIN as ADC multiplexer input
        sei(); // enable global interrupts

	ADCSRA |= _BV(ADSC); // start first signal acquisition

	/* loop */
	while (1) {
		if (counter == PROBE_COUNTER_MAX) {
			if (low_cnt > high_cnt) {
				/* LOW level detected - light LED (low level) up */
				PORTB |= _BV(LED_LOW_PIN);
				PORTB &= ~_BV(LED_HIGH_PIN);
			} else if (low_cnt < high_cnt) {
				/* HIGH level detected - light LED (high level) up */
				PORTB |= _BV(LED_HIGH_PIN);
				PORTB &= ~_BV(LED_LOW_PIN);
			} else if (low_cnt == 0 && high_cnt == 0) {
				/* ZERO level detected, turn LEDs off */
				PORTB &= ~_BV(LED_LOW_PIN);
				PORTB &= ~_BV(LED_HIGH_PIN);
			}
			/* Reset counters and start next signal acquisition */
			high_cnt = low_cnt = counter = 0;
			ADCSRA |= _BV(ADSC);
		}
	}
}
