/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <avr/io.h>
#include <util/delay.h>

#define	IN_PIN			PB0
#define	OUT_PIN			PB2

#define	TIMER_SECONDS_MAX	(1 * 60)

int
main(void)
{
	uint8_t timer_activated = 1;
	uint16_t timer_seconds = 0;
	uint8_t timer_counter = 0;

	/* setup */
	CCP = 0xD8; // set register signature - 0xD8
	CLKPSR = 0; // set the clock division factor
	DDRB |= _BV(OUT_PIN); // set OUT pin as OUTPUT
	PORTB |= _BV(OUT_PIN); // set OUT_PIN to HIGH at start


	/* loop */
	while (1)
	{
		if (PINB & _BV(IN_PIN))
		{
			timer_seconds = timer_counter = 0; // reset timer
                        timer_activated = 1; // activate timer
                        PORTB |= _BV(OUT_PIN); // set OUT pin as HIGH
		}

		if (timer_activated)
		{
			if (timer_seconds == TIMER_SECONDS_MAX)
			{
				timer_activated = 0; // deactivate timer
				PORTB &= ~_BV(OUT_PIN); // set OUT pin to LOW
			}
			else
			{
				if (++timer_counter == 10)
				{
					timer_counter = 0;
					timer_seconds++;
				}
			}
		}

		_delay_ms(100);
	}
}
