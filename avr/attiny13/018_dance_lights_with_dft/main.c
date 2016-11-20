/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/018
 * Dance lights with simplified DFT (Discrete Fourier Transformation)
 * --
 * Settings:
 *  FUSE_L=0x7A
 *  FUSE_H=0xFF
 *  F_CPU=9600000
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define	LED_RED			PB0
#define	LED_GREEN		PB1
#define	LED_BLUE		PB2
#define	BASS_THRESHOLD		(300)
#define	MIDRANGE_THRESHOLD	(40)
#define	TREBLE_THRESHOLD	(30)
#define	N			(6)

const int8_t W[N] = {10, 4, -5, -9, -4, 5};
int16_t samples[N] = {0};
int16_t re[N];
volatile uint8_t acquisition_cnt = 0;

ISR(ADC_vect)
{
	uint8_t high, low;

	if (acquisition_cnt < N) {
		low = ADCL;
		high = ADCH;
                samples[acquisition_cnt] = (high << 8) | low;
		acquisition_cnt++;
		ADCSRA |= _BV(ADSC);
        }
}

static void
dft(void)
{
	uint8_t a, k, n;

	for (k = 0; k < N; ++k)
		re[k] = 0;

        for (k = 0; k <= (N>>1); ++k) {
                a = 0;
                for (n = 0; n < N; ++n) {
                        re[k] += W[a%N] * samples[n];
                        a += k;
                }
                if (re[k] < 0)
                        re[k] = -(re[k] + 1);
        }
}

int
main(void)
{

	/* setup */
	DDRB |= _BV(LED_BLUE)|_BV(LED_GREEN)|_BV(LED_RED); // set LED pins as OUTPUT
	ADCSRA |= _BV(ADPS2)|_BV(ADPS1); // set ADC division factor 64;
	ADCSRA |= _BV(ADEN)|_BV(ADIE); // ADC interrupt enable
	ADMUX = _BV(MUX1); // set PB4 as audio input
	sei(); // enable global interrupts

	ADCSRA |= _BV(ADSC); // Start first signal acquisition

	/* loop */
	while (1) {
		if (acquisition_cnt == N) {
			dft();

			/* LED BLUE - Bass */
			if (re[0] > BASS_THRESHOLD) {
				PORTB |= _BV(LED_BLUE);
			} else {
				PORTB &= ~_BV(LED_BLUE);
			}

			/* LED GREEN - Midrange */
			if (re[1] > MIDRANGE_THRESHOLD) {
				PORTB |= _BV(LED_GREEN);
                        } else {
                                PORTB &= ~_BV(LED_GREEN);
                        }

			/* LED RED - Treble */
			if (re[2] > TREBLE_THRESHOLD) {
                                PORTB |= _BV(LED_RED);
                        } else {
                                PORTB &= ~_BV(LED_RED);
                        }

			/* Trigger next signal acquisition */
			acquisition_cnt = 0;
			ADCSRA |= _BV(ADSC);
		}
	}
}
