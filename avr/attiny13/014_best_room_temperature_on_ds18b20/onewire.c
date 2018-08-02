/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is OneWire library for tinyAVR family.
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-onewire-library
 * - documentation: https://github.com/lpodkalicki/attiny-onewire-library/README.md
 */

#include <avr/interrupt.h>
#include <util/delay.h>
#include "onewire.h"

#define ONEWIRE_PIN_INPUT()		(DDRB &= ~_onewire_pin)
#define ONEWIRE_PIN_OUTPUT()		(DDRB |= _onewire_pin)
#define ONEWIRE_PIN_LOW()		(PORTB &= ~_onewire_pin)
#define ONEWIRE_PIN_HIGH()		(PORTB |= _onewire_pin)
#define ONEWIRE_PIN_READ()		(PINB & _onewire_pin)
#define	ONEWIRE_RESET_RETRIES_MAX	(128)


static uint8_t _onewire_pin = 0;

void
onewire_init(uint8_t pin)
{
	_onewire_pin = _BV(pin);
}

uint8_t
onewire_reset(void)
{
	uint8_t retval, retries;

	ONEWIRE_PIN_LOW();
	ONEWIRE_PIN_INPUT();

	retries = ONEWIRE_RESET_RETRIES_MAX;
	while (!ONEWIRE_PIN_READ()) {
		if (--retries == 0) {
			return (2);
		}
		_delay_us(1);
	}

	ONEWIRE_PIN_OUTPUT();
	_delay_us(480);
	ONEWIRE_PIN_INPUT();
	_delay_us(66);
	retval = ONEWIRE_PIN_READ();
	_delay_us(414);

	return (retval);
}

static uint8_t
onewire_bit(uint8_t value)
{
	uint8_t sreg;

	sreg = SREG;
	cli();
  	ONEWIRE_PIN_OUTPUT();
  	_delay_us(1);
  	if (value) {
    		ONEWIRE_PIN_INPUT();
	}
	_delay_us(14);
	value = !(ONEWIRE_PIN_READ() == 0);
  	_delay_us(45);
  	ONEWIRE_PIN_INPUT();
  	SREG = sreg;

	return value;
}

uint8_t
onewire_write(uint8_t value)
{
	uint8_t i, r;

	for (i = 0; i < 8; ++i) {
    		r = onewire_bit(value & 0x01);
		value >>= 1;
    		if (r) {
			value |= 0x80;
		}
	}

  	return value;
}

uint8_t
onewire_read(void)
{

	return onewire_write(0xff);
}
