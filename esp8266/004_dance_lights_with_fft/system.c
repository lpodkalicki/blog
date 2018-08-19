/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <esp/gpio.h>
#include <FreeRTOS.h>
#include "config.h"
#include "error.h"
#include "system.h"

extern void pwm_interrupt_handler(void);
extern void audio_interrupt_handler(void);

static void timer_config(void);
static uint8_t counter = 0;

void
system_init(void)
{

	timer_config();
}

static void
frc1_interrupt_handler(void *args)
{

	if (++counter == 10) {
		audio_interrupt_handler();
		counter = 0;
	}

	pwm_interrupt_handler();	
}

void
timer_config(void)
{	
	_xt_isr_attach(INUM_TIMER_FRC1, frc1_interrupt_handler, NULL);
	timer_set_frequency(FRC1, TIMER_FRC1_FREQUENCY);
        timer_set_interrupts(FRC1, true);
        timer_set_run(FRC1, true);
}

