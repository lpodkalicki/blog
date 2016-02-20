/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/008
 * Example of Software UART.
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define	UART_RX_ENABLED		(1) // Enable UART RX
#define	UART_TX_ENABLED		(1) // Enable UART TX

#ifndef F_CPU
# define        F_CPU           (1200000UL) // 1.2 MHz
#endif  /* !F_CPU */

#if defined(UART_TX_ENABLED) && !defined(UART_TX)
# define        UART_TX         PB3 // Use PB3 as TX pin
#endif  /* !UART_TX */

#if defined(UART_RX_ENABLED) && !defined(UART_RX)
# define        UART_RX         PB4 // Use PB4 as RX pin
#endif  /* !UART_RX */

#if (defined(UART_TX_ENABLED) || defined(UART_RX_ENABLED)) && !defined(UART_BAUDRATE)
# define        UART_BAUDRATE   (19200)
#endif  /* !UART_BAUDRATE */

#define	TXDELAY         	(int)(((F_CPU/UART_BAUDRATE)-7 +1.5)/3)
#define RXDELAY         	(int)(((F_CPU/UART_BAUDRATE)-5 +1.5)/3)
#define RXDELAY2        	(int)((RXDELAY*1.5)-2.5)
#define RXROUNDED       	(((F_CPU/UART_BAUDRATE)-5 +2)/3)
#if RXROUNDED > 127
# error Low baud rates unsupported - use higher UART_BAUDRATE
#endif

static char uart_getc();
static void uart_putc(char c);
static void uart_puts(const char *s);

int
main(void)
{
	char c, *p, buff[16];

	uart_puts("Hello World!\n");

	/* loop */
	while (1) {
		p = buff;
		while((*(p++) = uart_getc()) != '\n' && (buff - p) < 16);
		*p = 0;
		_delay_ms(10);
		uart_puts(buff);
	}
}

char
uart_getc(void)
{
#ifdef	UART_RX_ENABLED
	char c;
	uint8_t sreg;

	sreg = SREG;
	cli();
	PORTB &= ~(1 << UART_RX);
	DDRB &= ~(1 << UART_RX);
	__asm volatile(
		" ldi r18, %[rxdelay2] \n\t" // 1.5 bit delay
		" ldi %0, 0x80 \n\t" // bit shift counter
		"WaitStart: \n\t"
		" sbic %[uart_port]-2, %[uart_pin] \n\t" // wait for start edge
		" rjmp WaitStart \n\t"
		"RxBit: \n\t"
		// 6 cycle loop + delay - total = 5 + 3*r22
		// delay (3 cycle * r18) -1 and clear carry with subi
		" subi r18, 1 \n\t"
		" brne RxBit \n\t"
		" ldi r18, %[rxdelay] \n\t"
		" sbic %[uart_port]-2, %[uart_pin] \n\t" // check UART PIN
		" sec \n\t"
		" ror %0 \n\t"
		" brcc RxBit \n\t"
		"StopBit: \n\t"
		" dec r18 \n\t"
		" brne StopBit \n\t"
		: "=r" (c)
		: [uart_port] "I" (_SFR_IO_ADDR(PORTB)),
		[uart_pin] "I" (UART_RX),
		[rxdelay] "I" (RXDELAY),
		[rxdelay2] "I" (RXDELAY2)
		: "r0","r18","r19"
	);
	SREG = sreg;
	return c;
#else
	return (-1);
#endif /* !UART_RX_ENABLED */
}

void
uart_putc(char c)
{
#ifdef	UART_TX_ENABLED
	uint8_t sreg;

	sreg = SREG;
	cli();
	PORTB |= 1 << UART_TX;
	DDRB |= 1 << UART_TX;
	__asm volatile(
		" cbi %[uart_port], %[uart_pin] \n\t" // start bit
		" in r0, %[uart_port] \n\t"
		" ldi r30, 3 \n\t" // stop bit + idle state
		" ldi r28, %[txdelay] \n\t"
		"TxLoop: \n\t"
		// 8 cycle loop + delay - total = 7 + 3*r22
		" mov r29, r28 \n\t"
		"TxDelay: \n\t"
		// delay (3 cycle * delayCount) - 1
		" dec r29 \n\t"
		" brne TxDelay \n\t"
		" bst %[ch], 0 \n\t"
		" bld r0, %[uart_pin] \n\t"
		" lsr r30 \n\t"
		" ror %[ch] \n\t"
		" out %[uart_port], r0 \n\t"
		" brne TxLoop \n\t"
		:
		: [uart_port] "I" (_SFR_IO_ADDR(PORTB)),
		[uart_pin] "I" (UART_TX),
		[txdelay] "I" (TXDELAY),
		[ch] "r" (c)
		: "r0","r28","r29","r30"
	);
	SREG = sreg;
#endif /* !UART_TX_ENABLED */
}

void
uart_puts(const char *s)
{
     	while (*s) uart_putc(*(s++));
}

