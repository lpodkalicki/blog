/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * UART for ATmega8
 */

#ifndef	_UART_H_
#define	_UART_H_

void UART_init(uint16_t baudrate);
void UART_putc(char c);
void UART_putu32(uint32_t x);
void UART_puts(const char *s);

#endif	/* !_UART_H_ */

