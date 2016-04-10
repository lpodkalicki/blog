/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/010
 * Simple LED RGB rainbow effect (Software PWM with delay function)
 * --
 * Circuit instructions:
 * 1) use LED RGB (common anode)
 * 2) connect catode RED to attiny13's PB0
 * 3) connect catode GREEN to attiny13's PB1
 * 4) connect catode BLUE to attiny's PB2
 * 5) connect LED RGB VCC pin to attiny13's VCC
 */

#include <avr/io.h>
#include <util/delay.h>

/* LED RBG pins */
#define	LED_RED		PB0
#define	LED_GREEN	PB1
#define	LED_BLUE	PB2

/* Rainbow settings */
#define MAX 		(512)
#define	STEP		(4)

/* Fading states */
#define REDtoYELLOW	(0)
#define YELLOWtoGREEN 	(1)
#define GREENtoCYAN 	(2)
#define CYANtoBLUE 	(3)
#define BLUEtoVIOLET 	(4)
#define VIOLETtoRED 	(5)

/* Global variables */
uint16_t red = MAX;
uint16_t green = 0;
uint16_t blue = 0;
uint16_t state = 0;

void
rainbow(int n)
{

	switch (state) {
	case REDtoYELLOW: green += n; break;
	case YELLOWtoGREEN: red -= n; break;
	case GREENtoCYAN: blue += n; break;
	case CYANtoBLUE: green -= n; break;
	case BLUEtoVIOLET: red += n; break;
	case VIOLETtoRED: blue -= n; break;
	default: break;
	}

	if (red >= MAX || green >= MAX || blue >= MAX || red <= 0 || green <= 0 || blue <= 0) {
		state = (state + 1) % 6; // Finished fading a color so move on to the next
	
	}
}


int
main(void)
{
	uint16_t i = 0;

	/* --- setup --- */

        DDRB = 0b00000111;
	PORTB = 0b00000111;

	/* --- loop --- */

        while (1) {

		/* Rainbow algorithm */

		if (i < red) {
			PORTB &= ~(1 << LED_RED);
		} else {
 			PORTB |= 1 << LED_RED;
		}

		if (i < green) {
			PORTB &= ~(1 << LED_GREEN);
		} else {
 			PORTB |= 1 << LED_GREEN;
		}

		if (i < blue) {
			PORTB &= ~(1 << LED_BLUE);
		} else {
 			PORTB |= 1 << LED_BLUE;
		}

		if (i >= MAX) {
			rainbow(STEP);
			i = 0;
		}

		i++;

	}

        return (0);
}
