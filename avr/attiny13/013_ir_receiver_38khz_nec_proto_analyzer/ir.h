/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * IR Remote for ATtiny13
 */

#include <stdint.h>
#include <avr/io.h>

#ifndef	_IR_H_
#define	_IR_H_

#define	IR_IN_PIN		PB1
#define	IR_IN_PORT		PORTB
#define	IR_OCR0A		(122)

#define	LOW			(0)
#define	HIGH			(1)

#define	IR_SUCCESS		(0)
#define	IR_ERROR		(1)

#define	IR_EVENT_IDLE		(0)
#define	IR_EVENT_INIT		(1)
#define	IR_EVENT_FINI		(2)
#define	IR_EVENT_PROC		(3)

#define	IR_PROTO_EVENT_INIT	(0)
#define	IR_PROTO_EVENT_DATA	(1)
#define	IR_PROTO_EVENT_FINI	(2)
#define	IR_PROTO_EVENT_HOOK	(3)

void IR_init(void);
int8_t IR_read(uint8_t *address, uint8_t *command);

#endif	/* !_IR_H_ */
