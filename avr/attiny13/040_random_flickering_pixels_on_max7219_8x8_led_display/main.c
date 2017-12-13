/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/040
 * Example project of "Random Flickering Pixels" on 8x8 LED display based on MAX7219 chip.
 */

#include <stdint.h>
#include <util/delay.h>
#include "max7219.h"

#define LFSR_SEED 	(161)

static uint16_t
prng_lfsr16(void)
{
        static uint16_t cnt16 = LFSR_SEED;
        return (cnt16 = (cnt16 >> 1) ^ (-(cnt16 & 1) & 0xB400));
}

int
main(void)
{
	uint8_t row, col, i = 0;

	/* setup */
	MAX7219_init();
	MAX7219_set_intensity(8);

	/* loop */
	while (1) {
		row = (prng_lfsr16() + col) % 8;
		col = (prng_lfsr16() + row) % 8;
		MAX7219_set_pixel(row, col, ++i & 0x01);
		_delay_ms(5);
	}
}
