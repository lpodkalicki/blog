/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * Tiny Morse Code Library.
 */

#ifndef _MORSECODE_H_
#define	_MORSECODE_H_

void MORSECODE_init(uint16_t space_miliseconds);
void MORSECODE_signal_on(void);
void MORSECODE_signal_off(void);
void MORSECODE_putc(const char c);
void MORSECODE_puts(const char *s);

#endif	/* !_MORSECODE_H_ */

