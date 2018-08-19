/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/25/45/85 16-bit PRNG (Pseudo Random Number Generator) library based on Galois LFSR algorithm.
 */

#include <avr/eeprom.h>
#include "random.h"

static uint16_t random_number = 0U;

static uint16_t
lfsr16_next(uint16_t n)
{

	return (n >> 0x01U) ^ (-(n & 0x01U) & 0xB400U);
}

void
random_init(uint16_t seed)
{
	random_number = lfsr16_next(eeprom_read_word((uint16_t *)RANDOM_EEPROM_SEED_ADDR) ^ seed);
	eeprom_write_word((uint16_t *)0U, random_number);
}

uint16_t
random(void)
{

	return (random_number = lfsr16_next(random_number));
}
