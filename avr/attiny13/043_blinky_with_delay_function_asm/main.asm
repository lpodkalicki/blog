; Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
; ATtiny13/043
; Simple blinky with delay function (assembler version, 30 bytes of program flash).

.include "tn13def.inc"

.equ LED_PIN = PB0			; use PB0 as LED pin

.org 0x00				; set SRAM address to 0x00

setup:
	sbi	DDRB, LED_PIN		; set LED pin as output
loop:
	sbic	PINB, LED_PIN		; if bit of LED pin is clear, skip next line
 	cbi	PORTB, LED_PIN		; if 1, turn the LED off
	sbis	PINB, LED_PIN		; if bit of LED pin is set, skip next line
 	sbi	PORTB, LED_PIN		; if 0, light the LED up
delay_500ms:
	ldi	r20, 32			; set register, r20 = 32
delay2:
	ldi	r19, 64			; set register, r19 = 64
delay1:
	ldi	r18, 128		; set register, r18 = 128
delay0:
	dec	r18			; decrement register, r18 = r18 - 1
	brne	delay0			; if r18 != 0, jump to label delay0
	dec	r19			; decrement register, r19 = r19 -1
	brne	delay1			; if r19 != 0, jump to label delay1
	dec	r20			; decrement register, r20 = r20 -1
	brne	delay2			; if r20 != 0, jump to label delay2
	rjmp	loop			; if r20 == 0, jump to label loop
