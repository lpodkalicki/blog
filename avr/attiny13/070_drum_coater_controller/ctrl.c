/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <stdint.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include "util.h"
#include "conf.h"
#include "ctrl.h"

#define	ctrl_blink_error()	ctrl_blink(3, 1, 30)
#define	ctrl_blink_ok()		ctrl_blink(1, 10, 50)
#define	ctrl_led_on()		PORTB |= _BV(LED_PIN);
#define	ctrl_led_off()		PORTB &= ~_BV(LED_PIN);
#define	ctrl_led_toggle()	PORTB ^= _BV(LED_PIN);		

static volatile uint8_t mode_ = DEFAULT_MODE;
static volatile uint8_t program_ = DEFAULT_PROGRAM;
static volatile uint8_t status_ = DEFAULT_STATUS;
static volatile uint8_t events_ = 0;

static volatile uint16_t counter1 = 0;
static volatile uint16_t counter2 = 0;
static volatile uint16_t counter1_max = 10000;
static volatile uint16_t counter2_max = 10;
static volatile uint16_t cycles = 0;

ISR(TIM0_COMPA_vect) // 100kHz
{
	if (status_ == STATUS_BUSY)
	{
		if (++counter1 == counter1_max) 
		{
			counter1 = 0;
			if (++counter2 == counter2_max)
			{
				counter2 = 0;
				cycles++;
				PORTB ^= _BV(CLK_PIN);
			}
		}
	}
}

ISR(PCINT0_vect)
{
        if ((PINB & _BV(KEY_ALPHA_PIN)) == 0)
        {
        	events_ |= KEY_ALPHA_EVENT;
        }

        if ((PINB & _BV(KEY_BETA_PIN)) == 0)
        {
        	events_ |= KEY_BETA_EVENT;
        }
}

void ctrl_init()
{
	DDRB |= _BV(CLK_PIN) | _BV(DIR_PIN) | _BV(LED_PIN); // set CLK, DIR and LED pins as OUTPUT
	DDRB &= ~(_BV(KEY_ALPHA_PIN) | _BV(KEY_BETA_PIN)); // set keys as INPUT
	PORTB &= ~(_BV(CLK_PIN) | _BV(DIR_PIN) | _BV(LED_PIN)); // set CLK, DIR and LED pins to LOW
	PORTB |= _BV(KEY_ALPHA_PIN) | _BV(KEY_BETA_PIN); // set pull-up resistors for keys
	TCCR0A |= _BV(WGM01); // set timer mode to CTC
	TCCR0B |= _BV(CS00); // set prescaler to 1
	OCR0A = 95; // set Timer's counter max value (96 - 1)
	TIMSK0 |= _BV(OCIE0A); // enable Timer CTC interrupt
	GIMSK |= _BV(PCIE); // enable PCINT
        PCMSK |= _BV(PCINT3)|_BV(PCINT4); // select PCINT pins
	sei(); // enable global interrupts
}

void ctrl_start()
{
	counter1 = 0;
	counter2 = 0;
	counter1_max = 10000;
	counter2_max = 10;
	cycles = 0;
	status_ = STATUS_BUSY;
	ctrl_led_on();
	
	uint16_t counter1_val;
	switch (program_)
	{
	case PROGRAM_0: counter1_val = 100; break; // 100Hz
	case PROGRAM_1: counter1_val = 80; break; // 125Hz
	case PROGRAM_2: counter1_val = 50; break; // 200Hz
	case PROGRAM_3: counter1_val = 20; break; // 500Hz
	}
	
	while (counter1_max > counter1_val)
	{
		counter1_max -= 10;
		sleep_ms(1);
	}
}

void ctrl_stop()
{
	status_ = STATUS_IDLE;
	ctrl_led_off();
}

void ctrl_loop()
{
	sleep_ms(100); // time keys for debounce

	while (1)
	{
		uint8_t command = ctrl_command();
		
		switch (command)
		{
		case COMMAND_START:
			ctrl_start();
			break;
		case COMMAND_RESUME:
			status_ = STATUS_BUSY;
			ctrl_led_on();
			break;
		case COMMAND_PAUSE:
			status_ = STATUS_PAUSE;
			break;
		case COMMAND_STOP:
			ctrl_stop();
			break;
		case COMMAND_MODE:
			mode_ ^= 1; // toggle mode
			if (mode_ == MODE_SET) { ctrl_blink(1, 300, 50); }
			else { ctrl_blink(program_ + 1, 2, 100); ctrl_blink(1, 100, 50); }
			break;
		case COMMAND_PROGRAM_READ:
			ctrl_blink(program_ + 1, 10, 50);
			break;
		case COMMAND_PROGRAM_NEXT:
			if (program_ < PROGRAM_END) { program_++; ctrl_blink_ok(); }
			else { ctrl_blink_error(); }			
			break;
		case COMMAND_PROGRAM_PREV:
			if (program_ > PROGRAM_BEGIN) { program_--; ctrl_blink_ok();}
			else { ctrl_blink_error(); }			
			break;
		default: break;
		}
		
		events_ = 0;
		sleep_ms(command > 0 ? 100 : 50);
		
		if (status_ == STATUS_PAUSE)
		{
			ctrl_led_toggle();
		}
	}	
}

uint8_t ctrl_command(void)
{
	uint8_t counter = 0;
	uint8_t events = events_;
	
	if (events == 0)
	{
		return COMMAND_NONE;
	}
	
	if ((events & KEY_ALPHA_EVENT) && (events & KEY_BETA_EVENT))
	{
		
		while ((PINB & _BV(KEY_ALPHA_PIN)) == 0 || (PINB & _BV(KEY_BETA_PIN)) == 0)
		{
			sleep_ms(10);
			if (counter++ == 30 && status_ == STATUS_IDLE)
			{
				return COMMAND_MODE;
			}	
		}
		
		
		if (mode_ == MODE_SET && status_ == STATUS_IDLE)
		{
			return COMMAND_PROGRAM_READ;
		}
		
		return COMMAND_NONE;
	}

	if (events & KEY_ALPHA_EVENT)
	{
		while ((PINB & _BV(KEY_ALPHA_PIN)) == 0);
		
		if (mode_ == MODE_SET && status_ == STATUS_IDLE)
		{
			return COMMAND_PROGRAM_PREV;
		}
		
		if (status_ == STATUS_BUSY)
		{
			return COMMAND_PAUSE;
		}
		
		if (status_ == STATUS_PAUSE)
		{
			return COMMAND_RESUME;
		}
		
		return COMMAND_START;
	}

	if (events & KEY_BETA_EVENT)
	{
		while ((PINB & _BV(KEY_BETA_PIN)) == 0);
		
		if (mode_ == MODE_SET && status_ == STATUS_IDLE)
		{
			return COMMAND_PROGRAM_NEXT;
		}
		
		if (status_ != STATUS_IDLE)
		{
			return COMMAND_STOP;
		}
	}
	
	return COMMAND_NONE;
}

void ctrl_blink(uint8_t n, uint16_t time_on, uint16_t time_off)
{
	while (n--)
	{
		PORTB |= _BV(LED_PIN);
		sleep_ms(time_on);
		PORTB &= ~_BV(LED_PIN);
		sleep_ms(time_off);
	}
}

void ctrl_program(void)
{
	
}


