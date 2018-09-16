/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/034
 * Rainbow on single LED WS2812.
 */

#include <avr/io.h>
#include <util/delay.h>
#include "light_ws2812.h"

struct pixel {
	uint8_t g;
	uint8_t r;
	uint8_t b;
};

int
main(void)
{
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
		ws2812_setleds((struct cRGB *)&p, 1);
		_delay_ms(10);
	}
}
