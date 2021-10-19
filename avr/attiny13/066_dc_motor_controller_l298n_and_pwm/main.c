/**
 * Copyright (c) 2021, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/066
 * An example of controlling a DC motors using the L298N and Attiny13.
 * _________________________________
 * L298N Output pins:
 * [OUT1] <--> [+DC MOTOR 1]
 * [OUT2] <--> [-DC MOTOR 1]
 * [OUT3] <--> [+DC MOTOR 2]
 * [OUT4] <--> [-DC MOTOR 2]
 * _________________________________
 * ATtiny13 Output / L298N Input:
 * - IN1 -> PB0
 * - IN2 -> PB1
 * - IN3 -> PB2
 * - IN4 -> PB3
 */

#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define IN1	PB0 // motor1 (+)
#define IN2	PB1 // motor1 (-)
#define IN3	PB2 // motor2 (+)
#define IN4	PB3 // motor2 (-)

#define	MOTOR1			(1 << 0)
#define	MOTOR2			(1 << 1)
#define	CCW			(0)
#define CW			(1)
#define FLAG_MOTOR1_ENABLED	(1 << 0)
#define FLAG_MOTOR2_ENABLED	(1 << 1)

static uint8_t counter = 0;
volatile uint8_t flags = 0;
volatile uint8_t motor1_pwm = 0;
volatile uint8_t motor2_pwm = 0;
volatile uint8_t motor1_pin = 0;
volatile uint8_t motor2_pin = 0;

static void l298n_init();
static void l298n_pwm(uint8_t motor, uint8_t pwm);
static void l298n_dir(uint8_t motor, uint8_t dir);
static void l298n_start(uint8_t motor);
static void l298n_stop(uint8_t motor);

int
main(void)
{
	uint8_t dir = CW;

	/* setup */
	l298n_init();

	/* loop */
	while (1)
	{
		dir ^= 1;
		if (dir)
		{
			l298n_pwm(MOTOR1|MOTOR2, 255);	
		}
		else
		{
			l298n_pwm(MOTOR1|MOTOR2, 128);	
		}
		l298n_dir(MOTOR1, dir);
		l298n_stop(MOTOR2);
		l298n_start(MOTOR1);
		_delay_ms(1000U);
		l298n_dir(MOTOR2, dir);		
		l298n_stop(MOTOR1);
		l298n_start(MOTOR2);
		_delay_ms(1000U);
	}
}

ISR(TIM0_OVF_vect)
{
	if ((flags & FLAG_MOTOR1_ENABLED) && counter < motor1_pwm)
	{
		PORTB |= _BV(motor1_pin);	
	}
	else
	{
		PORTB &= ~_BV(motor1_pin);	
	}

	if ((flags & FLAG_MOTOR2_ENABLED) && counter < motor2_pwm)
	{
		PORTB |= _BV(motor2_pin);	
	}
	else
	{
		PORTB &= ~_BV(motor2_pin);	
	}

	counter++;
}

void l298n_init()
{
	DDRB |= _BV(IN1)|_BV(IN2)|_BV(IN3)|_BV(IN4); // set control pins as OUTPUT
	PORTB &= ~(_BV(IN1)|_BV(IN2)|_BV(IN3)|_BV(IN4)); // set control pins to LOW
        TCCR0B = _BV(CS00); // set prescaler to 1 (CLK=9600000Hz/1/256 => 37.5kHz => 13.7ms)
        TIMSK0 |= _BV(TOIE0); // enable Timer Overflow interrupt
	l298n_pwm(MOTOR1|MOTOR2, 128); // set default pwm value
	l298n_dir(MOTOR1|MOTOR2, CW); // set default direction (clockwise)
	sei(); // enable global interrupts
}

void l298n_pwm(uint8_t motor, uint8_t pwm)
{
	if (motor & MOTOR1)
	{
		motor1_pwm = pwm;
	}

	if (motor & MOTOR2)
	{
		motor2_pwm = pwm;
	}
}

void l298n_dir(uint8_t motor, uint8_t dir)
{
	if (motor & MOTOR1)
	{
		motor1_pin = dir == CW ? IN1 : IN2;
	}

	if (motor & MOTOR2)
	{
		motor2_pin = dir == CW ? IN3 : IN4;
	}
}

void l298n_start(uint8_t motor)
{
	if (motor & MOTOR1)
	{
		flags |= FLAG_MOTOR1_ENABLED;
	}

	if (motor & MOTOR2)
	{
		flags |= FLAG_MOTOR2_ENABLED;
	}
}

void l298n_stop(uint8_t motor)
{
	if (motor & MOTOR1)
	{
		flags &= ~FLAG_MOTOR1_ENABLED;
	}

	if (motor & MOTOR2)
	{
		flags &= ~FLAG_MOTOR2_ENABLED;
	}
}

