/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Frequency counter (1Hz - 1MHz) for ATmega8
 */

#include <math.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "fc.h"

static uint8_t timer_cnt = 0;
static uint16_t fc_cnt = 0;
static uint32_t fc_sum = 0L;
static uint8_t fc_num = 0;
volatile uint32_t fc_result = 0L;

void
FC_init(void)
{
	FC_DDR &= ~_BV(FC_PIN); // PD2 as input pin
	FC_PORT |= _BV(FC_PIN); // turn on the pull-up resistor
	MCUCR |= _BV(ISC00) | _BV(ISC01); // set INT0 to trigger on ANY logic change
    	GICR |= _BV(INT0); // turns on INT0
	TIMSK |= _BV(OCIE2); // enable timer2
	TCCR2 |= _BV(WGM21); // set timer CTC mode
	TCCR2 |= _BV(CS22) | _BV(CS21); // clk src with prescaler 256
	OCR2 = 124; // (F_CPU/256/(OCR2-1)) => 500Hz
	TCNT2 = 0; // initialize counter
    	sei(); // turn on interrupts
}

uint32_t
FC_read(void)
{

	return fc_result;
}

ISR(INT0_vect)
{
	fc_cnt++;
}

ISR(TIMER2_COMP_vect)
{
	uint8_t sreg;

	// 500Hz / 50 => 10Hz (0.1s). 
	if (++timer_cnt < 50)
		return;

	
	sreg = SREG;
	cli();
	fc_sum += fc_cnt;
	fc_cnt = 0;
	SREG = sreg;

	if ((++fc_num) == 10) {
		fc_result = (uint32_t)round(((double)fc_sum / (double)fc_num) * 10);
		fc_num = 0;
		fc_sum = 0;
	}

	timer_cnt = 0;
}

