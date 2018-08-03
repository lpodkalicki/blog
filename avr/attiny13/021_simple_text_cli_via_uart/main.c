/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/021
 * Simple text CLI (Command Line Interface) via UART.
 */

#include <stdint.h>
#include <stdlib.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>
#include "uart.h"

#define	BUFFER_SIZE	(16)
#define	ARGV_SIZE	(4)
#define	PROG_NAME_SIZE	(6)

typedef void (*program_hook_t)(void);

typedef struct s_program {
	char name[PROG_NAME_SIZE];
	program_hook_t hook;
} program_t;

static char buffer[BUFFER_SIZE];
static const char *argv[ARGV_SIZE] = {0, 0, 0, 0};
static uint8_t argc = 0;

static uint8_t readline(void);
static void parse(void);
static void execute(void);
static int8_t xscmp(const char *s1, const char *s2);
static uint16_t xscanu(const char *value);

/**
 * Command "?".
 * No arguments required. Print help.
 */
static void
prog_help_hook(void)
{

	uart_puts("..help\n");
}

/**
 * Command "GPIO".
 * Manage GPIO (PB0,PB1,PB2) settings.
 * Require 3 arguments,
 * - pin name,
 * - I/O direction,
 * - pin hi/lo
 * Example usage,
 *  "GPIO PB0 1 1" - set PB0 as output with high state.
 */
static void
prog_gpio_hook(void)
{
	uint8_t pin_mask;

	// 1st pin name / number
	pin_mask = _BV(xscanu(argv[1]));

	// 2nd direction of I/O
	if (xscanu(argv[2])) {
		DDRB |= pin_mask;
	} else {
		DDRB &= ~pin_mask;
	}

	// 3rd pin hi/lo
	if (xscanu(argv[3])) {
		PORTB |= pin_mask;
	} else {
		PORTB &= ~pin_mask;
	}

	uart_puts("OK\n");
}

const program_t programs[2] PROGMEM = {
	{"?", prog_help_hook}, 
	{"GPIO", prog_gpio_hook},
	/* Add here your hook! */
};

int
main(void)
{

	/* loop */
	while (1) {
		if (readline() > 0) {
			parse();
			execute();
		}
	}
}

/**
 * Read line from UART and store in buffer.
 */
uint8_t
readline(void)
{
	char c;
	uint8_t sreg, len = 0;

	while (len < BUFFER_SIZE) {
		c = uart_getc();
		if (c == '\n' || c == '\r') {
			buffer[len] = 0;
			break;
		}
		buffer[len++] = c;
	}

	return len;
}

/**
 * Parse arguments.
 * Parse buffer, extract argument list to argv[]
 * and set the number of arguments in argc.
 */
void
parse(void)
{
	char *p;

	argc = 0;
	argv[argc++] = buffer;
	p = buffer;
	while (*p != '\0' && argc < ARGV_SIZE) {
		if (*p == ' ') {
			*p = 0;
			argv[argc++] = p + 1;
		}
		p++;
	}
}

/**
 * Execute program.
 * Compare with available program names and execute callback,
 * otherwise print error.
 */
void
execute(void)
{
	uint8_t i;
	char name[6];
	program_hook_t hook;

	for (i = 0; i < sizeof(programs); ++i) {
		memcpy_P(name, &programs[i].name, PROG_NAME_SIZE);
		if (xscmp(argv[0], name) == 0) {
			hook = (program_hook_t)pgm_read_word(&programs[i].hook);
			hook();
			return;
		}
	}

	uart_puts("Unknown: ");
	uart_puts(argv[0]);
	uart_putc('\n');
}

/**
 * Compare two strings.
 */
int8_t
xscmp(const char *s1, const char *s2)
{
        while (*s1 != '\0' && *s1 == *s2 ) {s1++; s2++;}
        return (*s1 - *s2);
}

/**
 * Convert string to integer.
 */
uint16_t
xscanu(const char *value)
{
	char *p;
        uint16_t x = 0;
	p = value;
	while (*p && (*p < 48 || *p > 57)) {p++;}
	while (*p && (*p > 47 && *p < 58)) {x = (x << 1) + (x << 3) + *(p++) - 48;}
        return x;
}
