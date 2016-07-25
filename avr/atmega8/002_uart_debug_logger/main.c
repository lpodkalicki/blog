/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATmega8/002
 * Simple debug logging via UART.
 * --
 * Wiring:
 * +------------+----------------+
 * |   ATMEGA8  | Serial Adapter |
 * +------------+----------------+
 * | PD1 (TXD)  |      RXD       |
 * +------------+----------------+
 * |     GND    |      GND       |
 * +------------+----------------+
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

static void UART_init(uint16_t baudrate);
static void UART_putc(char c);
static void UART_puts(const char *s);

int
main(void)
{
	/* setup */
	UART_init(38400);

	/* loop */
	while (1) {
		UART_puts("Hello :)\n");
		_delay_ms(1000);
	}
}

void
UART_init(uint16_t baudrate)
{
 	uint16_t baudrate_calc = (F_CPU / 4 / baudrate - 1) / 2;

	/* Set PD1 (TXD) as output */
	DDRD |= _BV(PD1);

	/* Set calculated baud rate */
	UBRRH = baudrate_calc >> 8;
 	UBRRL = baudrate_calc;

	/* Double the USART transmition speed */
	UCSRA = _BV(U2X);

	/* Enable transmition */
	UCSRB = _BV(TXEN);

	/* Set format 8N1 */
	UCSRC = _BV(URSEL) | _BV(UCSZ1) | _BV(UCSZ0);
}

void
UART_putc(char c)
{
	/* Wait for empty transmit buffer */
	while (!(UCSRA & _BV(UDRE)));
	/* Put data into buffer, sends the data */
	UDR = c;
}

void
UART_puts(const char *s)
{
     	while (*s) UART_putc(*(s++));
}
