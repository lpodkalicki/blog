/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is tinyAVR (ATtiny13, ATtiny25, ATtiny45, ATtiny85) library for 7-segment LED tube modules based on MAX7219/MAX7221 chip.
 *
 * Features:
 * - display digits
 * - display dots
 * - clear display
 * - brightness control
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library
 * - documentation: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library/blob/master/README.md
 * - MAX7219/MAX7221 datasheet: https://github.com/lpodkalicki/attiny-max7219-led-tube-display-library/blob/master/docs/max7219.pdf
 */

#ifndef _ATTINY_MAX7219_H_
#define _ATTINY_MAX7219_H_

#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>

#ifndef	MAX7219_DIN_PIN
# define	MAX7219_DIN_PIN		PB0
#endif	/* !MAX7219_DIN_PIN */

#ifndef	MAX7219_CLK_PIN
# define	MAX7219_CLK_PIN		PB1
#endif	/* !MAX7219_CLK_PIN */

#ifndef	MAX7219_CS_PIN
# define	MAX7219_CS_PIN		PB2
#endif	/* !MAX7219_CS_PIN */

/**
 * Initialize display driver.
 * Clock pin, data pin and chip select pin
 * are defined at the top of this file.
 */
void MAX7219_init(void);

/**
 * Display single digit at position.
 * @param position: digit position from range <0, 7>
 * @param digit: value from range <0, 9>
 */
void MAX7219_display_digit(uint8_t position, uint8_t digit);

/**
 * Light up 'dot' at position.
 * @param position: dot position from range <0, 7>
 */
void MAX7219_display_dot(uint8_t position);

/**
 * Turn off 'dot' at position.
 * @param position: dot position from range <0, 7>
 */
void MAX7219_clear_dot(uint8_t position);

/**
 * Display number.
 * @param number: value of unsigned integer
 */
void MAX7219_display_number(uint16_t number);

/**
 * Set brightness of the display.
 * @param value: intensity from range <0, 15>
 */
void MAX7219_set_intensity(uint8_t value);

/**
 * Clear display.
 */
void MAX7219_clear(bool force);

#endif  /* !_ATTINY_MAX7219_H_ */
