/**
 * Copyright (c) 2021, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/062
 * Trivial example of controlling a stepper motor with Half-Step method
 * using the L298N and Attiny13.
 * _________________________________
 * Stepper motor (2-phase):
 *
 * Note that colors of the wires may vary.
 * You can verify it in the datasheet
 * of your stepper motor.
 *
 * A (BLK) ----+    -----
 *             #   /     \
 *             #   |  M  |
 *             #   \     /
 * C (GRN) ----+    -----
 *               +#########+
 *               |         |
 *               |         |
 *               B         D
 *             (RED)     (BLU)
 * _________________________________
 * Pattern for a Half-Step method:
 * +--------+---+---+---+---+
 * |  STEP  | A | B | C | D |
 * +--------+---+---+---+---+
 * |   1    | 1 | 0 | 0 | 0 |
 * +--------+---+---+---+---+
 * |   2    | 1 | 1 | 0 | 0 |
 * +--------+---+---+---+---+
 * |   3    | 0 | 1 | 0 | 0 |
 * +--------+---+---+---+---+
 * |   4    | 0 | 1 | 1 | 0 |
 * +--------+---+---+---+---+
 * |   5    | 0 | 0 | 1 | 0 |
 * +--------+---+---+---+---+
 * |   6    | 0 | 0 | 1 | 1 |
 * +--------+---+---+---+---+
 * |   7    | 0 | 0 | 0 | 1 |
 * +--------+---+---+---+---+
 * |   8    | 1 | 0 | 0 | 1 |
 * +--------+---+---+---+---+
 * _________________________________
 * L298N Output pins:
 * - OUT1 -> A (BLK)
 * - OUT2 -> B (RED)
 * - OUT3 -> C (GRN)
 * - OUT4 -> D (BLU)
 * _________________________________
 * ATtiny13 Output / L298N Input:
 * - IN1 -> PB0
 * - IN2 -> PB1
 * - IN3 -> PB2
 * - IN4 -> PB3
 */

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>

#define IN1	PB0
#define IN2	PB1
#define IN3	PB2
#define IN4	PB3

#define	CCW	(0)
#define	CW	(1)

#define	SET(pin) (PORTB |= _BV(pin))
#define	CLR(pin) (PORTB &= ~_BV(pin))

int
main(void)
{
	uint8_t sequence = 0, direction = CW;

	/* setup */
	DDRB |= _BV(IN1)|_BV(IN2)|_BV(IN3)|_BV(IN4); // set control pins as OUTPUT
	PORTB &= ~(_BV(IN1)|_BV(IN2)|_BV(IN3)|_BV(IN4)); // set control pins to LOW

	/* loop */
	while (1)
	{
		sequence = (sequence + (direction ? 1 : -1)) & 7;
		switch (sequence)
		{
		// Using pattern for Half-Step method
		//      [   A  ][   B   ][   C   ][   D   ]
		case 0: SET(IN1);CLR(IN2);CLR(IN3);CLR(IN4);break;
		case 1: SET(IN1);SET(IN2);CLR(IN3);CLR(IN4);break;
		case 2: CLR(IN1);SET(IN2);CLR(IN3);CLR(IN4);break;
		case 3: CLR(IN1);SET(IN2);SET(IN3);CLR(IN4);break;
		case 4: CLR(IN1);CLR(IN2);SET(IN3);CLR(IN4);break;
		case 5: CLR(IN1);CLR(IN2);SET(IN3);SET(IN4);break;
		case 6: CLR(IN1);CLR(IN2);CLR(IN3);SET(IN4);break;
		case 7: SET(IN1);CLR(IN2);CLR(IN3);SET(IN4);break;
		}
		_delay_ms(1); // 1khz
	}
}

