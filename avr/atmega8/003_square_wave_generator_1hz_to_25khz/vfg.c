/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Simple Variable Frequency Square Wave Generator for ATmega8
 */

#include <math.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "vfg.h"

#define N_1     		(_BV(CS10))
#define N_8     		(_BV(CS11))
#define N_64    		(_BV(CS11)|_BV(CS10))
#define N_256   		(_BV(CS12))
#define N_1024  		(_BV(CS12)|_BV(CS10))

#define	VFG_TIMER_MAX		(65535.)
#define	VFG_DEFAULT_FREQENCY	(1000L)

volatile uint32_t vfg_freq = 0L;

void
VFG_init(void)
{
        VFG_DDR |= _BV(VFG_PIN); // set DDS pin as OUTPUT
 	TCCR1B |= _BV(WGM12); // set timer CTC mode
	TIMSK |= _BV(OCIE1A);
	VFG_set(VFG_DEFAULT_FREQENCY);
	sei();
}

void
VFG_set(uint32_t freq)
{
        uint8_t i, p_N, p_V, ret_N = 0;
        uint16_t ret_OCRnx = 0;
	uint32_t ret_freq = 0L;
	double tmp, err = 100., OCRnx_calc = 0., freq_calc = 0.;

        for (i = 0; i < 5; ++i) {

		switch(i) {
		case 0: p_N = N_1; p_V = 0; break;
		case 1: p_N = N_8; p_V = 3; break;
		case 2: p_N = N_64; p_V = 6; break;
		case 3: p_N = N_256; p_V = 8; break;
		case 4: p_N = N_1024; p_V = 10; break;
		default: break;
		}

		tmp = (double)((uint32_t)F_CPU >> (uint32_t)(p_V + 1));
                OCRnx_calc = round((tmp / (double)freq) - 1.);

                if (OCRnx_calc >= 0. && OCRnx_calc < VFG_TIMER_MAX) {
		        freq_calc = round(tmp / (OCRnx_calc + 1.));
	                if ((double)freq > freq_calc) {
                                tmp = (1. - (freq_calc / (double)freq)) * 100.;
                        } else {
                                tmp = (1. - ((double)freq / freq_calc)) * 100.;
                        }
                        if (tmp < err) {
                                err = tmp;
                                ret_OCRnx = (uint16_t)OCRnx_calc;
                                ret_N = p_N;
				ret_freq = (uint32_t)freq_calc;
                        }
                }
        }

        TCCR1B = (TCCR1B & ~((1<<CS12)|(1<<CS11)|(1<<CS10))) | ret_N;
        OCR1A = ret_OCRnx;
	vfg_freq = ret_freq;
}

uint32_t
VFG_get(void)
{

	return vfg_freq; 
}

ISR(TIMER1_COMPA_vect)
{

	VFG_PORT ^= _BV(VFG_PIN);
}
