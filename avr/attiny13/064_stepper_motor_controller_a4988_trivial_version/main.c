/**
 * Copyright (c) 2021, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/064
 * An example of controlling a stepper motor using the A4988 and Attiny13.
 * _________________________________
 * Stepper motor (2-phase):
 *
 * Note that colors of the wires may vary.
 * You can verify it in the datasheet
 * of your stepper motor.
 *
 * 2A (BLK) ----+    -----
 *              #   /     \
 *              #   |  M  |
 *              #   \     /
 * 1A (GRN) ----+    -----
 *               +#########+
 *               |         |
 *               |         |
 *               2B        1B
 *             (RED)     (BLU)
 * _________________________________
 * ATtiny13 Output / A4988 Input:
 * - DIR -> DIR
 * - CLK -> STEP
 */

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>

#define DIR	PB0
#define CLK	PB1

int
main(void)
{
	/* setup */
	DDRB |= _BV(DIR)|_BV(CLK); // set control pins as OUTPUT
	PORTB &= ~(_BV(DIR)|_BV(CLK)); // set control pins to LOW


	/* loop */
	while (1)
	{
		PORTB ^= _BV(CLK); // change CLOCK state
		_delay_us(500); // 50% duty cycle
	}
}
