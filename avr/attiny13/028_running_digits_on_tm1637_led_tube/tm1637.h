/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * 
 * This is ATtiny13/25/45/85 library for 4-Digit LED Display based on TM1637 chip.
 *
 * Features:
 * - display digits
 * - display colon
 * - display raw segments
 * - display on/off
 * - brightness control 
 *
 * References:
 * - library: https://github.com/lpodkalicki/attiny-tm1637-library
 * - documentation: https://github.com/lpodkalicki/attiny-tm1637-library/README.md
 * - TM1637 datasheet: https://github.com/lpodkalicki/attiny-tm1637-library/blob/master/docs/TM1637_V2.4_EN.pdf
 */

#ifndef	_ATTINY_TM1637_H_
#define	_ATTINY_TM1637_H_

#include <stdint.h>
#include <stdbool.h>

// Main Settings
#define	TM1637_DIO_PIN			PB0
#define	TM1637_CLK_PIN			PB1
#define	TM1637_DELAY_US			(50)
#define	TM1637_DEFAULT_BRIGHTNESS	(7)

// TM1637 commands
#define	TM1637_CMD_SET_DATA		0x40
#define	TM1637_CMD_SET_ADDR		0xC0
#define	TM1637_CMD_SET_DSIPLAY		0x80

// TM1637 data settings (use bitwise OR to contruct complete command)
#define	TM1637_SET_DATA_WRITE		0x00 // write data to the display register
#define	TM1637_SET_DATA_READ		0x02 // read the key scan data
#define	TM1637_SET_DATA_A_ADDR		0x00 // automatic address increment
#define	TM1637_SET_DATA_F_ADDR		0x04 // fixed address
#define	TM1637_SET_DATA_M_NORM		0x00 // normal mode
#define	TM1637_SET_DATA_M_TEST		0x10 // test mode

// TM1637 address settings (use bitwise OR to contruct complete command)
#define	TM1637_SET_ADR_00H		0x00 // address 00
#define	TM1637_SET_ADR_01H		0x01 // address 01
#define	TM1637_SET_ADR_02H		0x02 // address 02
#define	TM1637_SET_ADR_03H		0x03 // address 03

// TM1637 display control command set (use bitwise OR to consruct complete command)
#define	TM1637_SET_DISPLAY_OFF		0x00 // off
#define	TM1637_SET_DISPLAY_ON		0x08 // on


/**
 * Initialize TM1637 display driver.
 * Clock pin (TM1637_CLK_PIN) and data pin (TM1637_DIO_PIN) 
 * are defined at the top of this file.
 */
void TM1637_init(void);

/**
 * Display digits ('0'..'9') at positions (0x00..0x03)
 */
void TM1637_display_digit(const uint8_t addr, const uint8_t digit);

/**
 * Display raw segments at positions (0x00..0x03)
 * 
 *      bits:                 hex:
 *        -- 0 --               -- 01 --
 *       |       |             |        |
 *       5       1            20        02
 *       |       |             |        |
 *        -- 6 --               -- 40 --
 *       |       |             |        |
 *       4       2            10        04
 *       |       |             |        |
 *        -- 3 --               -- 08 --
 *
 * Example segment configurations:
 * - for character 'H', segments=0b01110110
 * - for character '-', segments=0b01000000
 * - etc.
 */
void TM1637_display_segments(const uint8_t addr, const uint8_t segments);

/**
 * Display colon on/off.
 */
void TM1637_display_colon(bool value);

/**
 * Clear all display segments (including colon).
 */
void TM1637_clear(void);

/**
 * Set display brightness.
 * Min brightness: 0
 * Max brightness: 7
 */
void TM1637_set_brightness(const uint8_t brightness);

/**
 * Turn display on/off.
 */
void TM1637_enable(const bool value);

#endif	/* !_ATTINY_TM1637_H_ */

