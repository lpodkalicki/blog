/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATmega8/005
 * WS2812 LED strip blinky.
 */

#include <avr/io.h>
#include <util/delay.h>
#include <light_ws2812.h>

#define	PIXEL_NUM	(60)
#define COLOR_R         (128)
#define COLOR_G         (0)
#define COLOR_B         (0)

static void leds_on(void);
static void leds_off(void);

struct cRGB leds[PIXEL_NUM];

int
main(void)
{

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
