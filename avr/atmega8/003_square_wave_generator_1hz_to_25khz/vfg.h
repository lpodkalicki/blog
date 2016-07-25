/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Simple Variable Frequency Square Wave Generator for ATmega8
 */

#ifndef	_VFG_H_
#define	_VFG_H_

#include <avr/io.h>

#define	VFG_PIN		PB1
#define	VFG_DDR		DDRB
#define	VFG_PORT	PORTB

void VFG_init(void);
void VFG_set(uint32_t freq);
uint32_t VFG_get(void);

#endif	/* !_VFG_H_ */

