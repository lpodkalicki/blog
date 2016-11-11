/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Frequency counter (1Hz - 1MHz) for ATmega8
 */

#ifndef	_FC_H_
#define	_FC_H_

#include <avr/io.h>

#define	FC_PIN		PD2
#define	FC_DDR		DDRD
#define	FC_PORT		PORTD

void FC_init(void);
uint32_t FC_read(void);

#endif	/* !_FC_H_ */

