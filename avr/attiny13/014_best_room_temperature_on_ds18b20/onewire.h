/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is OneWire library for tinyAVR family.
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-onewire-library
 * - documentation: https://github.com/lpodkalicki/attiny-onewire-library/README.md
 */

#ifndef _ATTINY_ONEWIRE_H_
#define _ATTINY_ONEWIRE_H_

#define	ONEWIRE_SEARCH_ROM	0xF0
#define	ONEWIRE_READ_ROM	0x33
#define	ONEWIRE_MATCH_ROM	0x55
#define	ONEWIRE_SKIP_ROM	0xCC
#define	ONEWIRE_ALARM_SEARCH	0xEC

void onewire_init(uint8_t pin);
uint8_t onewire_reset(void);
uint8_t onewire_write(uint8_t value);
uint8_t onewire_read(void);

#endif	/* !_ATTINY_ONEWIRE_H_ */
