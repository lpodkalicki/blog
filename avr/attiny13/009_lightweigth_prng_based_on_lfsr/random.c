/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Lightweight library of 16 bit random number generator based on LFSR.
 */

#include <avr/eeprom.h>
#include "random.h"

static uint16_t random_number = 0;

static uint16_t
lfsr16_next(uint16_t n)
{

	return (n >> 0x01U) ^ (-(n & 0x01U) & 0xB400U);
}


void
random_init(uint16_t seed)
{
#ifdef USE_RANDOM_SEED
	random_number = lfsr16_next(eeprom_read_word((uint16_t *)RANDOM_SEED_ADDRESS) ^ seed);
        eeprom_write_word((uint16_t *)0, random_number);
#else
	random_number = seed;
#endif	/* !USE_RANDOM_SEED */
}


uint16_t
random(void)
{

	return (random_number = lfsr16_next(random_number));
}

