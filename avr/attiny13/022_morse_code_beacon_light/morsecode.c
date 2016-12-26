/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Tiny Morse Code Library.
 */

#include <util/delay.h>
#include <avr/pgmspace.h>
#include "morsecode.h"

#ifndef	MORSECODE_DIT_LENGTH
#define	MORSECODE_DIT_LENGTH (250)
#endif /* !MORSECODE_DIT_LENGTH */

#define	LETTER_SPACE()	{space();space();space();} // 3x dit lenght
#define	WORD_SPACE() 	{space();space();space();space();space();space();space();} // 7x dit lenght

/*
  International Morse Code Alphabet.
  References:
  - http://www.itu.int/rec/R-REC-M.1677-1-200910-I/
  - https://en.wikipedia.org/wiki/Morse_code#International_Morse_Code
*/
const char letter_a[] PROGMEM = "._";
const char letter_b[] PROGMEM = "_...";
const char letter_c[] PROGMEM = "_._.";
const char letter_d[] PROGMEM = "_..";
const char letter_e[] PROGMEM = ".";
const char letter_f[] PROGMEM = ".._.";
const char letter_g[] PROGMEM = "__.";
const char letter_h[] PROGMEM = "....";
const char letter_i[] PROGMEM = "..";
const char letter_j[] PROGMEM = ".___";
const char letter_k[] PROGMEM = "_._";
const char letter_l[] PROGMEM = "._..";
const char letter_m[] PROGMEM = "__";
const char letter_n[] PROGMEM = "_.";
const char letter_o[] PROGMEM = "___";
const char letter_p[] PROGMEM = ".__.";
const char letter_q[] PROGMEM = "__._";
const char letter_r[] PROGMEM = "._.";
const char letter_s[] PROGMEM = "...";
const char letter_t[] PROGMEM = "_";
const char letter_u[] PROGMEM = ".._";
const char letter_v[] PROGMEM = "..._";
const char letter_w[] PROGMEM = ".__";
const char letter_x[] PROGMEM = "_.._";
const char letter_y[] PROGMEM = "_.__";
const char letter_z[] PROGMEM = "__..";

PGM_P const letter_table[] PROGMEM = {
	letter_a,
	letter_b,
	letter_c,
	letter_d,
	letter_e,
	letter_f,
	letter_g,
	letter_h,
	letter_i,
	letter_j,
	letter_k,
	letter_l,
	letter_m,
	letter_n,
	letter_o,
	letter_p,
	letter_q,
	letter_r,
	letter_s,
	letter_t,
	letter_u,
	letter_v,
	letter_w,
	letter_x,
	letter_y,
	letter_z
};

const char figure_0[] PROGMEM = "_____";
const char figure_1[] PROGMEM = ".____";
const char figure_2[] PROGMEM = "..___";
const char figure_3[] PROGMEM = "...__";
const char figure_4[] PROGMEM = "...._";
const char figure_5[] PROGMEM = ".....";
const char figure_6[] PROGMEM = "_....";
const char figure_7[] PROGMEM = "__...";
const char figure_8[] PROGMEM = "___..";
const char figure_9[] PROGMEM = "____.";

PGM_P const figure_table[] PROGMEM = {
	figure_0,
	figure_1,
	figure_2,
	figure_3,
	figure_4,
	figure_5,
	figure_6,
	figure_7,
	figure_8,
	figure_9
};

static void
space(void)
{

	_delay_ms(MORSECODE_DIT_LENGTH);
}


static void
dit(void)
{

	MORSECODE_signal_on();
	space();
	MORSECODE_signal_off();
}

static void
dah(void)
{

	MORSECODE_signal_on();
	space();
	space();
	space();
	MORSECODE_signal_off();
}

void
xmit(const char *data)
{

	while (*data) {
		if (*data == '.') {
			dit();
			space();
		} else if (*data == '_') {
			dah();
			space();
		}
		data++;
	}

	LETTER_SPACE();
}

void
MORSECODE_putc(const char c)
{
	char buffer[6];

	if (c >= 'A' && c <= 'Z') {
		strcpy_P(buffer, (PGM_P)pgm_read_word(&(letter_table[c - 65])));
	} else if (c >= 'a' && c <= 'z') {
		strcpy_P(buffer, (PGM_P)pgm_read_word(&(letter_table[c - 97])));
	} else if (c >= '0' && c <= '9') {
		strcpy_P(buffer, (PGM_P)pgm_read_word(&(figure_table[c - 48])));
	} else if (c == ' ') {
		WORD_SPACE();
	}

	xmit(buffer);
}

void
MORSECODE_puts(const char *s)
{

	while(*s) MORSECODE_putc(*(s++));
	WORD_SPACE();
}

