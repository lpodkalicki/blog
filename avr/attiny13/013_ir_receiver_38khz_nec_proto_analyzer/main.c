/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/013
 * NEC proto analyzer. Example of monblocking IR signal reader (38kHz, TSOPxxx) and NEC protocol decoder.
 * Settings:
 *  FUSE_L=0x7A
 *  FUSE_H=0xFF
 *  F_CPU=9600000
 */

#include "ir.h"
#include "uart.h"


int
main(void)
{
	uint8_t addr, cmd;

	/* setup */
	IR_init();

	/* loop */
	while (1) {
		if (IR_read(&addr, &cmd) == IR_SUCCESS) {
			uart_puts("addr=");
			uart_putu(addr);
			uart_putc(',');
			uart_puts("cmd=");
                        uart_putu(cmd);
			uart_putc('\n');
		}
	}
}

