/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/020
 * Example of "Power LED PWM driver" to control power LED
 * brightness with two buttons (UP/DOWN).
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


#define PWM_PIN			PB0
#define KEY_UP_PIN		PB1
#define KEY_DOWN_PIN		PB2

#define PWM_DUTY_MIN		(0)
#define PWM_DUTY_MAX		(100)
#define PWM_DUTY_STEP		(1)
#define KEY_UP			(1 << 1)
#define KEY_DOWN		(1 << 2)

static volatile uint8_t duty = 0;
static uint8_t counter = 0;
static void process(void);
static uint8_t read_keys(void);

ISR(TIM0_COMPA_vect)
{

	if (duty > PWM_DUTY_MIN && duty < PWM_DUTY_MAX) {
		if (counter == 0) {
			PORTB |= _BV(PWM_PIN);
		} else if (counter == duty) {
			PORTB &= ~_BV(PWM_PIN);
		}
		if (++counter == PWM_DUTY_MAX) {
			counter = 0;
		}
	}
}

int
main(void)
{

	/* setup */
	DDRB |= _BV(PWM_PIN); // set PWM pin as OUTPUT
	PORTB |= _BV(KEY_UP_PIN)|_BV(KEY_DOWN_PIN);
	TCCR0A |= _BV(WGM01); // set timer counter mode to CTC
	TCCR0B |= _BV(CS00); // set prescaler
	OCR0A = 95; // set Timer's counter max value (96 - 1)
	TIMSK0 |= _BV(OCIE0A); // enable Timer CTC interrupt
	sei(); // enable global interrupts

	_delay_ms(100); // time of debounce

	/* loop */
	while (1) {
		process();
		_delay_ms(8);
	}
}

void
process(void)
{
	uint8_t keys;

	if (!(keys = read_keys())) {
		return;
	}

	if ((keys & KEY_UP) && duty < PWM_DUTY_MAX) {
		duty += PWM_DUTY_STEP;
	}

	if ((keys & KEY_DOWN) && duty > PWM_DUTY_MIN) {
		duty -= PWM_DUTY_STEP;
	}

	if (duty == PWM_DUTY_MIN) {
		PORTB &= ~_BV(PWM_PIN);
	} else if (duty == PWM_DUTY_MAX) {
		PORTB |= _BV(PWM_PIN);
	}
}

static uint8_t
read_keys(void)
{
	uint8_t result = 0;

	if ((PINB & _BV(KEY_UP_PIN)) == 0) {
		result |= KEY_UP;
	}

	if ((PINB & _BV(KEY_DOWN_PIN)) == 0) {
		result |= KEY_DOWN;
	}

	return result;
}
