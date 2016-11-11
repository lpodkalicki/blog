/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * UART for ATmega8
 */

#include <avr/io.h>
#include "uart.h"

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
UART_putu32(uint32_t x)
{
        char buff[11];
        char *p = buff+9;
	buff[10] = 0;
        do { *(p--) = (x % 10L) + '0'; x /= 10L; } while(x);
        UART_puts((const char *)(p+1));
}


void
UART_puts(const char *s)
{

     	while (*s) UART_putc(*(s++));
}

