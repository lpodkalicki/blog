/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/017
 * Digital DC ampmeter with LED tube display based on MAX7219/MAX7221.
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "max7219.h"

#define	AMPMETER_PIN		PB4
#define	AMPMETER_R1		(10000U) // resistor 1 [ohm]
#define	AMPMETER_R2		(1000U) // resitor 2 [ohm]
#define	AMPMETER_VREF		(256U) // internal voltage reference [millivolts]
#define	AMPMETER_SAMPLES_MAX	(64) // max number of samples
#define	AMPMETER_COEFFICIENT	(AMPMETER_VREF / (AMPMETER_R2 * 100U / (AMPMETER_R1 + AMPMETER_R2)))


static void ampmeter_init(void);
static void ampmeter_process(void);

static uint32_t samples_sum = 0L;
static volatile uint8_t samples_cnt = 0;

int
main(void)
{

	/* setup */
	ampmeter_init();

	/* loop */
	while (1) {
		ampmeter_process();
	}
}

void
ampmeter_init(void)
{

	DDRB &= ~_BV(AMPMETER_PIN); // set AMPMETER pin as INPUT
        PORTB &= ~_BV(AMPMETER_PIN); // turn off pull-up resistor
	ADCSRA |= _BV(ADPS2)|_BV(ADPS1)|_BV(ADPS0); // set ADC division factor 1024;
        ADCSRA |= _BV(ADEN)|_BV(ADIE); // ADC interrupt enable
        ADMUX = _BV(MUX1); // set PB4 as ANALOG input
	MAX7219_init(); // initialize LED tube driver
	MAX7219_clear(1);
        sei(); // enable global interrupts
        ADCSRA |= _BV(ADSC); // start first signal acquisition
}

void
ampmeter_process(void)
{
	uint16_t value;

	if (samples_cnt < AMPMETER_SAMPLES_MAX) {
		return;
	}

	value = samples_sum / (uint32_t)samples_cnt;
	value = ((value * 100U) / 1024) * AMPMETER_COEFFICIENT;
	samples_sum = 0L;
	samples_cnt = 0;

	MAX7219_clear(0);
	MAX7219_display_number(value);
	MAX7219_display_dot(2);

	ADCSRA |= _BV(ADSC);
}

ISR(ADC_vect)
{
        uint8_t low, high;

        if (samples_cnt < AMPMETER_SAMPLES_MAX) {
                low = ADCL;
                high = ADCH;
                samples_sum += (high << 8) | low;
                samples_cnt++;
                ADCSRA |= _BV(ADSC);
        }
}
