/**
 * Copyright (c) 2021, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/058
 * Two LEDs fade alternately using software PWM.
 */

#include <avr/io.h>
#include <util/delay.h>

#define LED1_PIN         PB0
#define LED2_PIN         PB1
#define DELAY_MAX       (1024)
#define DELAY_MIN       (1)

#if DELAY_MAX < 1 || DELAY_MIN < 1
# warning "Value of DELAY_MAX and DELAY_MIN should be from range <1, 2^16>"
#endif
#if !(DELAY_MAX > DELAY_MIN)
# warning "Value of DELAY_MAX should be greater then DELAY_MIN"
#endif

int
main(void)
{
    uint16_t delay = DELAY_MIN;
    uint8_t pin = LED1_PIN, dir = 0;

    /* setup */
    DDRB = _BV(LED1_PIN)|_BV(LED2_PIN); // set LED pin as OUTPUT
    PORTB &= ~(_BV(LED1_PIN)|_BV(LED2_PIN)); // set LED pin to LOW

    /* loop */
    while (1)
    {
        PORTB |= _BV(pin); // LED on
        _delay_loop_2(delay);

        PORTB &= ~_BV(pin); // LED off
        _delay_loop_2(DELAY_MAX - delay);

        if (dir) // fade-in
        {
            if (++delay >= (DELAY_MAX - 1))
            {
                dir = 0;
            }
        }
        else // fade-out
        {
            if (--delay <= DELAY_MIN)
            {
                /* Toggle pin when delay MIN value is reached; previouse pin is guaranteed to be off (LOW) */
                pin = (pin == LED1_PIN) ? LED2_PIN : LED1_PIN;
                dir = 1;
            }
        }
    }
}
