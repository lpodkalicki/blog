/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Lightweight library of 16 bit random number generator based on LFSR.
 */

#ifndef _RANDOM_H_
#define	_RANDOM_H_

#ifdef	USE_RANDOM_SEED
#define	RANDOM_SEED_ADDRESS	0x00
#endif	/* !USE_RANDOM_SEED */

void random_init(uint16_t seed);
uint16_t random(void);

#endif	/* !_RANDOM_H_ */

