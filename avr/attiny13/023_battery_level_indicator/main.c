/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/023
 * Battery level indicator with three LEDs (GREEN/YELLOW/RED).
 *
 * Vbat     Vin      GND
 *  |        |        |
 *  +--[R1]--+--[R2]--+
 *
 * Vbat(max) = 14V
 * R1 = 120kOhm
 * R2 = 10kOhm
 * Vin(max) = Vbat(max) * R2 / (R1 + R2) ~= 1.1V
 *
 * Pin configuration:
 * - LED green -> PB0
 * - LED yellow -> PB1
 * - LED red -> PB2
 * - UART TX (optional) -> PB3
 * - Vin -> PB4
 *
 * Some tips:
 * - if calibration is required, then incr/decr coefficient value (not too much).
 * - use software UART to debug (https://github.com/lpodkalicki/attiny13-software-uart-library)
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define R1			(120U) // 120kOhm
#define R2			(10U) // 10kOhm
#define VREF			(1100U) // internal voltage reference 1.1V == 1100mV
#define COEFFICIENT		(130U) // coefficient = (VREF / ((R2 * 100U / (R1 + R2))) = 143

#define SAMPLES_NUM		(32)

#define LED_GRN_PIN		PB0
#define LED_YEL_PIN		PB1
#define LED_RED_PIN		PB2

#define BAT_GOOD_THRESHOLD	(12000U) // green LED lighting, <80, 100%> => <12000mV, 14000mV>
#define BAT_LOW_THRESHOLD	(9000U) // yellow LED lighting, <60, 80%) => <9000mV, 12000mV)
#define BAT_CRITICAL_THRESHOLD	(0) // red LED lighting, <0, 60%) => <0, 9000mV)

static void process(void);

uint16_t samples_sum = 0;
volatile uint8_t samples_cnt = 0;

ISR(ADC_vect)
{
	uint8_t high, low;

	if (samples_cnt < SAMPLES_NUM) {
		low = ADCL;
		high = ADCH;
                samples_sum += (high << 8) | low;
		samples_cnt++;
		ADCSRA |= _BV(ADSC);
        }
}

int
main(void)
{

	/* setup */
	DDRB = _BV(LED_GRN_PIN)|_BV(LED_YEL_PIN)|_BV(LED_RED_PIN); // set LED pins as output
	ADCSRA |= _BV(ADPS2)|_BV(ADPS1)|_BV(ADPS0); // set ADC division factor to 1024;
	ADCSRA |= _BV(ADEN)|_BV(ADIE); // ADC interrupt enable
	ADMUX = _BV(MUX1)|_BV(REFS0); // set PB4 as analog input and use internal voltage reference
	sei(); // enable global interrupts

	ADCSRA |= _BV(ADSC); // start first round of signal acquisition

	/* loop */
	while (1) {
		process();
		_delay_ms(100);
	}
}

void
process(void)
{
	uint16_t v;

	if (samples_cnt < SAMPLES_NUM) {
		return;
	}

	/* calculate bat voltage */
	v = samples_sum / (uint16_t)samples_cnt; // calc samples avarage
	v = (uint16_t)(((uint32_t)v * 100UL) / 1024UL) * COEFFICIENT; // convert to voltage
	samples_sum = samples_cnt = 0;

	/* show bat level */
	PORTB &= ~(_BV(LED_GRN_PIN)|_BV(LED_YEL_PIN)|_BV(LED_RED_PIN));
	if (v >= BAT_GOOD_THRESHOLD) {
		PORTB |= _BV(LED_GRN_PIN);
	} else if (v >= BAT_LOW_THRESHOLD) {
		PORTB |= _BV(LED_YEL_PIN);
	} else if (v >= BAT_CRITICAL_THRESHOLD) {
		PORTB |= _BV(LED_RED_PIN);
	}

	ADCSRA |= _BV(ADSC); // trigger next round of signal acquisition
}
