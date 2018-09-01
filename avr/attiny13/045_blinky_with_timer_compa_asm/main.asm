; Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
; ATtiny13/044
; Simple blinky with Timer Compare Match A (assembler version, 36 bytes of program flash).

.nolist
.include "tn13def.inc"
.list

; define constnt
.equ LED_PIN = PB0			; use PB0 as LED pin

; define register
.def tmp = r16				; define r16 as temporary register

; start vector
.org	0x0000
	rjmp main

; interrupt vectors
.org    OC0Aaddr			; Timer/Counter Compare Match A
	rjmp OC0A_isr			; jump to label OC0A_isr

; main program
main:
	sbi	DDRB, LED_PIN		; set LED pin as output
	ldi	tmp, (1<<WGM01)		; set configuration bits to temprary register
	out	TCCR0A, tmp		; set timer counter mode to CTC
	ldi	tmp, (1<<CS02)|(1<<CS00); set configuration bits to temprary register
	out	TCCR0B, tmp		; set prescaler to 1024 (F=1200000Hz/1024/256=4Hz, 0.25s)
	ldi	tmp, 255		; set value to temporary register
	out	OCR0A, tmp		; set OCR0A value (256 - 1)
	ldi	tmp, (1<<OCIE0A)	; set configuration bits to temprary register
	out	TIMSK0, tmp		; enable Timer Compare Match A Interrupt
	sei				; enable global interrupts
loop:
	rjmp	loop			; infinity loop

; timer compare match interrupt service routine
OC0A_isr:
	sbic    PINB, LED_PIN           ; if bit of LED pin is clear, skip next line
	cbi     PORTB, LED_PIN          ; if 1, turn the LED off
	sbis    PINB, LED_PIN           ; if bit of LED pin is set, skip next line
	sbi     PORTB, LED_PIN          ; if 0, light the LED up
	reti
