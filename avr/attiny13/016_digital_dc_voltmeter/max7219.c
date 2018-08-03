/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is tinyAVR (ATtiny13, ATtiny25, ATtiny45, ATtiny85) library for 7-segment LED tube modules based on MAX7219/MAX7221 chip.
 *
 * Features:
 * - display digits
 * - display dots
 * - clear display
 * - brightness control
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library
 * - documentation: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library/blob/master/README.md
 * - MAX7219/MAX7221 datasheet: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library/blob/master/docs/max7219.pdf
 */

#include <avr/pgmspace.h>
#include "max7219.h"

#define MAX7219_REG_NOOP                (0x00)
#define MAX7219_REG_DIGIT0              (0x01)
#define MAX7219_REG_DIGIT1              (0x02)
#define MAX7219_REG_DIGIT2              (0x03)
#define MAX7219_REG_DIGIT3              (0x04)
#define MAX7219_REG_DIGIT4              (0x05)
#define MAX7219_REG_DIGIT5              (0x06)
#define MAX7219_REG_DIGIT6              (0x07)
#define MAX7219_REG_DIGIT7              (0x08)
#define MAX7219_REG_DECODEMODE		(0x09)
#define MAX7219_REG_INTENSITY		(0x0A)
#define MAX7219_REG_SCANLIMIT		(0x0B)
#define MAX7219_REG_SHUTDOWN		(0x0C)
#define MAX7219_REG_DISPLAYTEST		(0x0F)

#define MAX7219_DIN_HIGH()              (PORTB |= _BV(MAX7219_DIN_PIN))
#define MAX7219_DIN_LOW()               (PORTB &= ~_BV(MAX7219_DIN_PIN))
#define MAX7219_CLK_HIGH()              (PORTB |= _BV(MAX7219_CLK_PIN))
#define MAX7219_CLK_LOW()               (PORTB &= ~_BV(MAX7219_CLK_PIN))
#define MAX7219_CS_HIGH()               (PORTB |= _BV(MAX7219_CS_PIN))
#define MAX7219_CS_LOW()                (PORTB &= ~_BV(MAX7219_CS_PIN))


static uint8_t MAX7219_state[8] = {0, 0, 0, 0, 0, 0, 0, 0};
const static uint8_t MAX7219_digits[] PROGMEM  = {
	0b01111110, 0b00110000, 0b01101101, 0b01111001, 0b00110011,
	0b01011011, 0b01011111, 0b01110000, 0b01111111, 0b01111011
};

static void
MAX7219_write(uint8_t value)
{
        uint8_t i;

        __asm("nop");
        for (i = 0; i < 8; ++i, value <<= 1) {
                MAX7219_CLK_LOW();
                __asm("nop");
                if (value & 0x80) {
                        MAX7219_DIN_HIGH();
                } else {
                        MAX7219_DIN_LOW();
                }
                MAX7219_CLK_HIGH();
        }
}

static void
MAX7219_send(uint8_t reg, uint8_t data)
{

        MAX7219_CS_HIGH();
        MAX7219_write(reg);
	MAX7219_write(data);
        MAX7219_CS_LOW();
        __asm("nop");
        MAX7219_CS_HIGH();
}

void
MAX7219_init(void)
{

        DDRB |= _BV(MAX7219_DIN_PIN)|_BV(MAX7219_CLK_PIN)|_BV(MAX7219_CS_PIN);
        MAX7219_send(MAX7219_REG_DECODEMODE, 0x00);
        MAX7219_send(MAX7219_REG_SCANLIMIT, 0x07);
        MAX7219_send(MAX7219_REG_INTENSITY, 0x0f);
        MAX7219_send(MAX7219_REG_DISPLAYTEST, 0x00);
        MAX7219_send(MAX7219_REG_SHUTDOWN, 0x01);
}

void
MAX7219_display_digit(uint8_t position, uint8_t digit)
{

	if (position > 7 || digit > 9)
		return;

	MAX7219_state[position] = ((MAX7219_state[position] & 0b10000000) |
				pgm_read_byte_near(MAX7219_digits + digit));
	MAX7219_send(position + 1, MAX7219_state[position]);
}

void
MAX7219_display_dot(uint8_t position)
{

	if (position > 7)
		return;

	MAX7219_state[position] |= 0b10000000;
	MAX7219_send(position + 1, MAX7219_state[position]);
}

void
MAX7219_clear_dot(uint8_t position)
{

	if (position > 7)
		return;

	MAX7219_state[position] &= ~(0b10000000);
	MAX7219_send(position + 1, MAX7219_state[position]);
}

void
MAX7219_display_number(uint16_t number)
{
	uint8_t digit, i = 0;

	while (number && i < 8) {
		digit = number % 10;
		MAX7219_display_digit(i++, digit);
		number /= 10;
	}
}

void
MAX7219_set_intensity(uint8_t value)
{

	if (value > 15)
		return;

	MAX7219_send(MAX7219_REG_INTENSITY, value);
}

void
MAX7219_clear(bool force)
{
	uint8_t i;

	for (i = 0; i < 8; ++i) {
		if (MAX7219_state[i] || force) {
			MAX7219_state[i] = 0;
			MAX7219_send(i + 1, 0);
		}
	}
}
