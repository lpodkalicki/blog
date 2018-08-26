/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/033
 * WS2812 blinky.
 */

#include <avr/io.h>
#include <util/delay.h>
#include "light_ws2812.h"

#define	PIXEL_NUM	(10)
#define	COLOR_R		(128)
#define	COLOR_G		(0)
#define	COLOR_B		(0)

struct cRGB leds[PIXEL_NUM];

static void leds_on(void);
static void leds_off(void);

int
main(void)
{
	uint8_t i;

	/* setup */
        for (i = 0; i < PIXEL_NUM; ++i) {
                leds[i].r = 0;
                leds[i].g = 0;
                leds[i].b = 0;
        }

	/* loop */
	while (1) {
		leds_on();
		_delay_ms(500);
		leds_off();
		_delay_ms(500);
	}
}

void
leds_on(void)
{
	uint8_t i;

	for (i = 0; i < PIXEL_NUM; ++i) {
                leds[i].r = COLOR_R;
                leds[i].g = COLOR_G;
                leds[i].b = COLOR_B;
        }

	ws2812_setleds(leds, PIXEL_NUM);
}

void
leds_off(void)
{
	uint8_t i;

	for (i = 0; i < PIXEL_NUM; ++i) {
                leds[i].r = 0;
                leds[i].g = 0;
                leds[i].b = 0;
        }

	ws2812_setleds(leds, PIXEL_NUM);
}
