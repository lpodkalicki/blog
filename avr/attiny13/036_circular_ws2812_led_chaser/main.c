/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/036
 * Circular WS2812 LED chaser.
 */

#include <avr/io.h>
#include <util/delay.h>
#include "light_ws2812.h"

#define	PIXEL_NUM	(8)
#define	DELAY		(60)

struct pixel {
	uint8_t g;
	uint8_t r;
	uint8_t b;
} pixels[PIXEL_NUM];

static void setpixel(uint8_t id, struct pixel *p);

int
main(void)
{
	uint8_t i, k = 0, r = 255, g = 0, b = 0;
	struct pixel p = {0, 0, 0};

	/* loop */
	while (1) {

		/* set the color */
		p = (struct pixel){g, r, b};
		for (i = k; i < (PIXEL_NUM + k); ++i) {
			setpixel(i % PIXEL_NUM, &p);
			_delay_ms(DELAY);
		}

		/* clear the color */
		p = (struct pixel){0, 0, 0};
		for (i = k; i < (PIXEL_NUM + k); ++i) {
                        setpixel(i % PIXEL_NUM, &p);
			_delay_ms(DELAY);
                }

		/* choose next color */
		if (r == 255) {
			g = 255;
			r = 0;
		} else if (g == 255) {
			g = 0;
			b = 255;
		} else { // b == 255
			b = 0;
			r = 255;
		}

		/* set pixel shift */
		k = ++k % PIXEL_NUM;
	}
}

void
setpixel(uint8_t id, struct pixel *p)
{

	pixels[id] = *p;
	ws2812_setleds((struct cRGB *)pixels, PIXEL_NUM);
}
