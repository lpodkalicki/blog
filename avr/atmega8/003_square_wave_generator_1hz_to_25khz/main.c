/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATmega8/003
 * Simple Variable Frequency Square Wave Generator (50% duty; 1Hz - 25kHz)
 *
 * Settings:
 *  FUSE_L=0xFF
 *  FUSE_H=0xD9
 *  F_CPU=16000000
 *
 * Wiring ascii diagram for Serial Adapter:
 *  +------------+----------------+
 *  |   ATMEGA8  | Serial Adapter |
 *  +------------+----------------+
 *  | PD1 (TXD)  |      RXD       |
 *  +------------+----------------+
 *  |     GND    |      GND       |
 *  +------------+----------------+
 *
 * Wiring ascii diagram for Osciloscope (or other signal receiver):
 *  +------------+----------------+
 *  |   ATMEGA8  |   Osciloscope  |
 *  +------------+----------------+
 *  | PB1 (OUT)  |     INPUT      |
 *  +------------+----------------+
 *  |     GND    |      GND       |
 *  +------------+----------------+
 *
 */

#include <avr/io.h>
#include <util/delay.h>
#include "vfg.h"
#include "uart.h"

int
main(void)
{

	/* setup */
	UART_init(19200);

	/* Initialize generator (defaults square wave at @1kHz on pin PB1) */
	VFG_init();

	/* Set frequency to 1234Hz */
	VFG_set(1234L);

	/* Read the real frequency which has been calculated and set */
	UART_putu32(VFG_get());
	UART_putc('\n');

	/* loop */
	while (1);
}
