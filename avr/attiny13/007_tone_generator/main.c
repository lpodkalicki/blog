/**
 * Copyright (c) 2016, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/007
 * Simple tone generator.
 */

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#define	BUZZER_PIN	PB0


#define	N_1	(_BV(CS00))
#define	N_8	(_BV(CS01))
#define	N_64	(_BV(CS01)|_BV(CS00))
#define	N_256	(_BV(CS02))
#define	N_1024	(_BV(CS02)|_BV(CS00))

typedef struct s_note {
	uint8_t OCRxn; // 0..255
	uint8_t N;
} note_t;

typedef struct s_octave {
	note_t note_C;
	note_t note_CS;
	note_t note_D;
	note_t note_DS;
	note_t note_E;
	note_t note_F;
	note_t note_FS;
	note_t note_G;
	note_t note_GS;
	note_t note_A;
	note_t note_AS;
	note_t note_B;
} octave_t;

/*
 All calculations below are prepared for ATtiny13 default clock source (1.2MHz)

 F = F_CPU / (2 * N * (1 + OCRnx)),

 where:
 - F is a calculated PWM frequency
 - F_CPU is a clock source (1.2MHz)
 - the N variable represents the prescale factor (1, 8, 64, 256, or 1024).
*/

PROGMEM const octave_t octaves[8] = {
	{ // octave 0
	.note_C = {142, N_256}, // 16.35 Hz
	.note_CS = {134, N_256}, // 17.32 Hz
	.note_D = {127, N_256}, // 18.35 Hz
	.note_DS = {120, N_256}, // 19.45 Hz
	.note_E = {113, N_256}, // 20.60 Hz
	.note_F = {106, N_256}, // 21.83 Hz
	.note_FS = {100, N_256}, // 23.12 Hz
	.note_G = {95, N_256}, // 24.50 Hz
	.note_GS = {89, N_256}, // 25.96 Hz
	.note_A = {84, N_256}, // 27.50 Hz
	.note_AS = {79, N_256}, // 29.14 Hz
	.note_B = {75, N_256} // 30.87 Hz
	},
	{ // octave 1
	.note_C = {71, N_256}, // 32.70 Hz
	.note_CS = {67, N_256}, // 34.65 Hz
	.note_D = {63, N_256}, // 36.71 Hz
	.note_DS = {59, N_256}, // 38.89 Hz
	.note_E = {56, N_256}, // 41.20 Hz
	.note_F = {53, N_256}, // 43.65 Hz
	.note_FS = {50, N_256}, // 46.25 Hz
	.note_G = {47, N_256}, // 49.00 Hz
	.note_GS = {44, N_256}, // 51.91 Hz
	.note_A = {42, N_256}, // 55.00 Hz
	.note_AS = {39, N_256}, // 58.27 Hz
	.note_B = {37, N_256} // 61.74 Hz
	},
	{ // octave 2
	.note_C = {142, N_64}, // 65.41 Hz
	.note_CS = {134, N_64}, // 69.30 Hz
	.note_D = {127, N_64}, // 73.42 Hz
	.note_DS = {120, N_64}, // 77.78 Hz
	.note_E = {113, N_64}, // 82.41 Hz
	.note_F = {106, N_64}, // 87.31 Hz
	.note_FS = {100, N_64}, // 92.50 Hz
	.note_G = {95, N_64}, // 98.00 Hz
	.note_GS = {89, N_64}, // 103.83 Hz
	.note_A = {84, N_64}, // 110.00 Hz
	.note_AS = {79, N_64}, // 116.54 Hz
	.note_B = {75, N_64} // 123.47 Hz
	},
	{ // octave 3
	.note_C = {71, N_64}, // 130.81 Hz
	.note_CS = {67, N_64}, // 138.59 Hz
	.note_D = {63, N_64}, // 146.83 Hz
	.note_DS = {59, N_64}, // 155.56 Hz
	.note_E = {56, N_64}, // 164.81 Hz
	.note_F = {53, N_64}, // 174.61 Hz
	.note_FS = {50, N_64}, // 185.00 Hz
	.note_G = {47, N_64}, // 196.00 Hz
	.note_GS = {44, N_64}, // 207.65 Hz
	.note_A = {42, N_64}, // 220.00 Hz
	.note_AS = {39, N_64}, // 233.08 Hz
	.note_B = {37, N_64} // 246.94 Hz
	},
	{ // octave 4
	.note_C = {35, N_64}, // 261.63 Hz
	.note_CS = {33, N_64}, // 277.18 Hz
	.note_D = {31, N_64}, // 293.66 Hz
	.note_DS = {29, N_64}, // 311.13 Hz
	.note_E = {27, N_64}, // 329.63 Hz
	.note_F = {26, N_64}, // 349.23 Hz
	.note_FS = {24, N_64}, // 369.99 Hz
	.note_G = {23, N_64}, // 392.00 Hz
	.note_GS = {22, N_64}, // 415.30 Hz
	.note_A = {20, N_64}, // 440.00 Hz
	.note_AS = {19, N_64}, // 466.16 Hz
	.note_B = {18, N_64} // 493.88 Hz
	},
	{  // octave 5
	.note_C = {142, N_8}, // 523.25 Hz
	.note_CS = {134, N_8}, // 554.37 Hz
	.note_D = {127, N_8}, // 587.33 Hz
	.note_DS = {120, N_8}, // 622.25 Hz
	.note_E = {113, N_8}, // 659.25 Hz
	.note_F = {106, N_8}, // 349.23 Hz
	.note_FS = {100, N_8}, // 369.99 Hz
	.note_G = {95, N_8}, // 392.00 Hz
	.note_GS = {89, N_8}, // 415.30 Hz
	.note_A = {84, N_8}, // 440.00 Hz
	.note_AS = {79, N_8}, // 466.16 Hz
	.note_B = {75, N_8} // 493.88 Hz
	},
	{  // octave 6
	.note_C = {71, N_8}, // 1046.50 Hz
	.note_CS = {67, N_8}, // 1108.73 Hz
	.note_D = {63, N_8}, // 1174.66 Hz
	.note_DS = {59, N_8}, // 1244.51 Hz
	.note_E = {56, N_8}, // 1318.51 Hz
	.note_F = {53, N_8}, // 1396.91 Hz
	.note_FS = {50, N_8}, // 1479.98 Hz
	.note_G = {47, N_8}, // 1567.98 Hz
	.note_GS = {44, N_8}, // 1661.22 Hz
	.note_A = {42, N_8}, // 1760.00 Hz
	.note_AS = {39, N_8}, // 1864.66 Hz
	.note_B = {37, N_8} // 1975.53 Hz
	},
	{  // octave 7
	.note_C = {35, N_8}, // 2093.00 Hz
	.note_CS = {33, N_8}, // 2217.46 Hz
	.note_D = {31, N_8}, // 2349.32 Hz
	.note_DS = {29, N_8}, // 2489.02 Hz
	.note_E = {27, N_8}, // 2637.02 Hz
	.note_F = {26, N_8}, // 2793.83 Hz
	.note_FS = {24, N_8}, // 2959.96 Hz
	.note_G = {23, N_8}, // 3135.96 Hz
	.note_GS = {22, N_8}, // 3322.44 Hz
	.note_A = {20, N_8}, // 3520.00 Hz
	.note_AS = {19, N_8}, // 3729.31 Hz
	.note_B = {18, N_8} // 3951.07 Hz
	}
};

static void
tone(uint8_t octave, uint8_t note)
{
	uint32_t ret;
	note_t *val;
	ret = pgm_read_word_near((uint8_t *)&octaves + sizeof(octave_t) * octave + sizeof(note_t) * note);
	val = (note_t *)&ret;
	TCCR0B = (TCCR0B & ~((1<<CS02)|(1<<CS01)|(1<<CS00))) | val->N; // set prescaler
  	OCR0A = val->OCRxn - 1; // set the OCRnx
}

static void
stop(void)
{

	TCCR0B &= ~((1<<CS02)|(1<<CS01)|(1<<CS00)); // stop the timer
}

int
main(void)
{
	uint8_t i, j;

	/* setup */
	DDRB |= _BV(BUZZER_PIN); // set BUZZER pin as OUTPUT
	TCCR0A |= _BV(WGM01); // set timer mode to CTC
	TCCR0A |= _BV(COM0A0); // connect PWM pin to Channel A of Timer0

	/* Walk throwgh all octaves */
	for (i = 0; i < 8; ++i) {
		for (j = 0; j < 12; ++j) {
			tone(i, j);
			_delay_ms(80);
		}
	}

	stop();
	_delay_ms(1500);


	/* loop */
	while (1) {
		/* Polish song "Wlazł kotek na płotek" in loop */
		tone(4, 7); // G
		_delay_ms(500);
		tone(4, 4); // E
		_delay_ms(500);
		tone(4, 4); // E
		_delay_ms(500);
		tone(4, 5); // F
		_delay_ms(500);
		tone(4, 2); // D
		_delay_ms(500);
		tone(4, 2); // D
		_delay_ms(500);
		tone(4, 0); // C
		_delay_ms(200);
		tone(4, 4); // E
		_delay_ms(300);
		tone(4, 7); // G
		_delay_ms(1000);

		stop();
		_delay_ms(2000);

		tone(4, 7); // G
		_delay_ms(500);
		tone(4, 4); // E
		_delay_ms(500);
		tone(4, 4); // E
		_delay_ms(500);
		tone(4, 5); // F
		_delay_ms(500);
		tone(4, 2); // D
		_delay_ms(500);
		tone(4, 2); // D
		_delay_ms(500);
		tone(4, 0); // C
		_delay_ms(200);
		tone(4, 4); // E
		_delay_ms(300);
		tone(4, 0); // C
		_delay_ms(1000);

		stop();
		_delay_ms(5000);
	}

}
