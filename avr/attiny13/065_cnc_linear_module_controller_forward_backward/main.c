/**
 * Copyright (c) 2021, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/065
 * CNC linear module controller (forward, backward) using the A4988 (tba6560, etc.) and Attiny13.
 * _________________________________
 * Stepper motor (2-phase):
 *
 * 2A (BLK) ----+   -----
 *              #  /     \
 *              #  |  M  |
 *              #  \     /
 * 1A (GRN) ----+   -----
 *               +#########+
 *               |         |
 *               |         |
 *               2B        1B
 *             (RED)     (BLU)
 * Note: colors of the wires may vary.
 * You can verify it in the datasheet
 * of the stepper motor.
 * _________________________________
 * A4988 connections:
 * [ATtiny13 PB0] <--> [A4988 DIR]
 * [Attiny13 PB1] <--> [A4988 STEP]
 *
 * Note: connection to A4988 EN (enable) has been ommited
 * (you can add it when it's needed).
 * _________________________________
 * Button connections:
 * [GND] <--> [BUTTON FORWARD] <--> [ATtiny13 PB2]
 * [GND] <--> [BUTTON BACKWARD] <--> [ATtiny13 PB3]
 *
 * Note: debouncing caps are welcome,
 * but not required in this example.
 */

#include <stdbool.h>
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define DIR_PIN			PB0
#define CLK_PIN			PB1
#define	BTN_FORWARD_PIN		PB2
#define	BTN_BACKWARD_PIN	PB3

volatile bool status_changed = false; 
volatile bool btn_forward = false;
volatile bool btn_backward = false;

static void usleep(uint16_t us);
static void lmc_init();
static void lmc_process();

int
main(void)
{
	/* setup */
	lmc_init();

	/* loop */
	while (1)
	{
		lmc_process();
	}
}

ISR(PCINT0_vect)
{
	btn_forward = !(PINB & _BV(BTN_FORWARD_PIN));
	btn_backward = !(PINB & _BV(BTN_BACKWARD_PIN));
	status_changed = true;
}

void usleep(uint16_t us)
{
	while (us--) _delay_us(1);
}

void lmc_init()
{
	DDRB |= _BV(DIR_PIN)|_BV(CLK_PIN); // set control pins as OUTPUT
	DDRB &= ~(_BV(BTN_FORWARD_PIN)|_BV(BTN_BACKWARD_PIN)); // set button pins as INPUT
	PORTB &= ~(_BV(DIR_PIN)|_BV(CLK_PIN)); // set control pins to LOW
	PORTB |= _BV(BTN_FORWARD_PIN)|_BV(BTN_BACKWARD_PIN); // set pull-ups for buttons
	GIMSK |= _BV(PCIE); // enable PCINT
	PCMSK |= _BV(PCINT2)|_BV(PCINT3); // select PCINT pins
	sei(); // enable interrupts
}

void lmc_process()
{
	uint8_t i = 0;
	uint16_t acceleration = 180;

	if (!status_changed)
	{
		return;
	}

	status_changed = false;

	if (!(btn_forward || btn_backward))
	{
		return;
	}
	
	if (btn_forward)
	{
		PORTB |= _BV(DIR_PIN);
	}
	else if (btn_backward)
	{
		PORTB &= ~_BV(DIR_PIN);
	}

	while (!status_changed)
	{
		if (acceleration > 0)
		{
			acceleration -= 2;
		}
		PORTB |= _BV(CLK_PIN);
		usleep(60 + acceleration);
		PORTB &= ~_BV(CLK_PIN);
		usleep(60 + acceleration);
	}
}

