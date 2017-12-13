/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 *
 * This is tinyAVR (ATtiny13, ATtiny25, ATtiny45, ATtiny85) library for LED 8x8 matrix display modules based on MAX7219/MAX7221 chip.
 *
 * Features:
 * - set single pixels
 * - set all 8 LEDs in column or row
 * - clear display
 * - brightness control
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-max7219-matrix-8x8-led-display-library
 * - documentation: https://github.com/lpodkalicki/attiny-max7219-matrix-8x8-led-display-library/blob/master/README.md
 * - MAX7219/MAX7221 datasheet: https://github.com/lpodkalicki/attiny-max7219-matrix-8x8-led-display-library/blob/master/docs/max7219.pdf
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
 * Set status of a single pixel.
 * @param row: row number from range <0, 7>
 * @param col: column number from range <0, 7>
 */
void MAX7219_set_pixel(uint8_t row, uint8_t col, bool value);

/**
 * Set all 8 LEDs in a row.
 * @param row: row number from range <0, 7>
 * @param value: row value (each bit represents a LED in a row, i.e. 0b00001111)
 */
void MAX7219_set_row(uint8_t row, uint8_t value);

/**
 * Set all 8 LEDs in a column.
 * @param column: column number from range <0, 7>
 * @param value: column value (each bit represents a LED in a column, i.e. 0b00001111)
 */
void MAX7219_set_column(uint8_t column, uint8_t value);

/**
 * Set brightness of the display.
 * @param value: intensity from range <0, 15>
 */
void MAX7219_set_intensity(uint8_t value);

/**
 * Clear display. 
 */
void MAX7219_clear(void);

#endif  /* !_ATTINY_MAX7219_H_ */
