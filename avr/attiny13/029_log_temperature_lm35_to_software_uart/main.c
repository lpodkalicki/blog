/**
 * Copyright (c) 2017, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/029
 * Read temperature (0°C to 100°C) using analog sensor LM35
 * and log the data to Software UART (baudrate 19200, 8N1) once per second.
 *
 * Settings:
 *  FUSE_L=0x6A
 *  FUSE_H=0xFF
 *  F_CPU=1200000
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "uart.h"

#define	LM35_DATA_PIN	PB4

static void LM35_init(void);
static int LM35_read(void);
static int analog_read(uint8_t pin);
static void uart_puttemp(int temp);

int
main(void)
{
	int temp;

	/* setup */
	LM35_init();

	/* loop */
	while (1) {
		temp = LM35_read();
		uart_puttemp(temp);
		_delay_ms(1000);
	}
}

void
LM35_init(void)
{

	DDRB &= ~_BV(LM35_DATA_PIN); // set data pin as INPUT
}

int
LM35_read(void)
{
	int temp;

	temp = analog_read(LM35_DATA_PIN); // read analog value from sensor
	temp = ((((uint32_t)temp * 1000UL) >> 10) * 5); // convert value using euqation temp = Vin * 1000 / 1024 * Vref [milivolts]

	return temp;
}

int
analog_read(uint8_t pin)
{
	uint8_t low, high;

	switch(pin) {
	case PB2: ADMUX = _BV(MUX0); break; // ADC1
        case PB4: ADMUX = _BV(MUX1); break; // ADC2
        case PB3: ADMUX = _BV(MUX0)|_BV(MUX1); break; // ADC3
        case PB5: // ADC0
	default: ADMUX = 0; break;
	}

	ADMUX &= ~_BV(REFS0); // explicit set VCC as reference voltage (5V)
	ADCSRA |= _BV(ADEN);  // Enable ADC
	ADCSRA |= _BV(ADSC);  // Run single conversion
	while(bit_is_set(ADCSRA, ADSC)); // Wait conversion is done

	// Read values
	low = ADCL;
        high = ADCH;

        // combine the two bytes
        return (high << 8) | low;
}

void
uart_puttemp(int temp)
{
	int value = temp / 10;
	uart_puts("temp=");
	uart_putu(value);
	uart_putc('.');
	uart_putu(temp - (value * 10));
	uart_putc('\n');
}
