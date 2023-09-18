/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#ifndef _CONF_H_
#define _CONF_H_

#include <avr/io.h>

#define DIR_PIN			PB0
#define	CLK_PIN			PB1
#define	LED_PIN			PB2
#define KEY_ALPHA_PIN		PB3
#define KEY_BETA_PIN		PB4

#define	COMMAND_NONE		(0)
#define	COMMAND_START		(1)
#define	COMMAND_PAUSE		(2)
#define	COMMAND_RESUME		(3)
#define	COMMAND_STOP		(4)
#define	COMMAND_MODE		(5)
#define	COMMAND_PROGRAM_READ	(6)
#define	COMMAND_PROGRAM_NEXT	(7)
#define	COMMAND_PROGRAM_PREV	(8)

#define KEY_ALPHA_EVENT		(1 << 0)
#define KEY_BETA_EVENT		(1 << 1)

#define	MODE_NORMAL		(0)
#define	MODE_SET		(1)

#define	PROGRAM_0		(0)
#define	PROGRAM_1		(1)
#define	PROGRAM_2		(2)
#define	PROGRAM_3		(3)
#define	PROGRAM_BEGIN		PROGRAM_0
#define	PROGRAM_END		PROGRAM_3

#define	STATUS_IDLE		(0)
#define	STATUS_BUSY		(1)
#define	STATUS_PAUSE		(2)

#define	DEFAULT_MODE		MODE_NORMAL
#define	DEFAULT_PROGRAM		PROGRAM_0
#define	DEFAULT_STATUS		STATUS_IDLE

#endif /* !_CONF_H_ */
