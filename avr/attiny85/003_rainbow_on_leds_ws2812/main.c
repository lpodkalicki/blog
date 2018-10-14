/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny85/003
 * Rainbow on LEDs with WS2811(12V)/WS2812(5V) driver.
 * I this example PB0 is a data pin. You change it by editing ws2812_config.h file.
 */

#include <avr/io.h>
#include <util/delay.h>
#include "light_ws2812.h"

#define	PIXEL_NUM	(7)

struct pixel {
	uint8_t g;
	uint8_t r;
	uint8_t b;
} pixels[PIXEL_NUM];

int
main(void)
{
	uint8_t i;
	struct pixel p = {255, 0, 0};

	/* loop */
	while (1) {
		if (p.r > 0 && p.b == 0) {
			p.r--;
			p.g++;
		}
		if (p.g > 0 && p.r == 0) {
			p.g--;
			p.b++;
		}
		if (p.b > 0 && p.g == 0) {
			p.r++;
			p.b--;
		}
		for (i = 0; i < PIXEL_NUM; ++i) {
			pixels[i] = p;
		}
		ws2812_setleds((struct cRGB *)pixels, PIXEL_NUM);
		_delay_ms(10);
	}
}
