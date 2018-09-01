;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: AT90CAN64.xml ***********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "can64def.inc"
;* Title             : Register/Bit Definitions for the AT90CAN64
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : AT90CAN64
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;* The Register names are represented by their hexadecimal address.
;* 
;* The Register Bit names are represented by their bit number (0-7).
;* 
;* Please observe the difference in using the bit names with instructions
;* such as "sbr"/"cbr" (set/clear bit in register) and "sbrs"/"sbrc"
;* (skip if bit in register set/cleared). The following example illustrates
;* this:
;* 
;* in    r16,PORTB             ;read PORTB latch
;* sbr   r16,(1<<PB6)+(1<<PB5) ;set PB6 and PB5 (use masks, not bit#)
;* out   PORTB,r16             ;output to PORTB
;* 
;* in    r16,TIFR              ;read the Timer Interrupt Flag Register
;* sbrc  r16,TOV0              ;test the overflow flag (use bit#)
;* rjmp  TOV0_is_set           ;jump if set
;* ...                         ;otherwise do something else
;*************************************************************************

#ifndef _CAN64DEF_INC_
#define _CAN64DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device AT90CAN64
#pragma AVRPART ADMIN PART_NAME AT90CAN64
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x96
.equ	SIGNATURE_002	= 0x81

#pragma AVRPART CORE CORE_VERSION V2E


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	CANMSG	= 0xfa	; MEMORY MAPPED
.equ	CANSTMH	= 0xf9	; MEMORY MAPPED
.equ	CANSTML	= 0xf8	; MEMORY MAPPED
.equ	CANIDM1	= 0xf7	; MEMORY MAPPED
.equ	CANIDM2	= 0xf6	; MEMORY MAPPED
.equ	CANIDM3	= 0xf5	; MEMORY MAPPED
.equ	CANIDM4	= 0xf4	; MEMORY MAPPED
.equ	CANIDT1	= 0xf3	; MEMORY MAPPED
.equ	CANIDT2	= 0xf2	; MEMORY MAPPED
.equ	CANIDT3	= 0xf1	; MEMORY MAPPED
.equ	CANIDT4	= 0xf0	; MEMORY MAPPED
.equ	CANCDMOB	= 0xef	; MEMORY MAPPED
.equ	CANSTMOB	= 0xee	; MEMORY MAPPED
.equ	CANPAGE	= 0xed	; MEMORY MAPPED
.equ	CANHPMOB	= 0xec	; MEMORY MAPPED
.equ	CANREC	= 0xeb	; MEMORY MAPPED
.equ	CANTEC	= 0xea	; MEMORY MAPPED
.equ	CANTTCH	= 0xe9	; MEMORY MAPPED
.equ	CANTTCL	= 0xe8	; MEMORY MAPPED
.equ	CANTIMH	= 0xe7	; MEMORY MAPPED
.equ	CANTIML	= 0xe6	; MEMORY MAPPED
.equ	CANTCON	= 0xe5	; MEMORY MAPPED
.equ	CANBT3	= 0xe4	; MEMORY MAPPED
.equ	CANBT2	= 0xe3	; MEMORY MAPPED
.equ	CANBT1	= 0xe2	; MEMORY MAPPED
.equ	CANSIT1	= 0xe1	; MEMORY MAPPED
.equ	CANSIT2	= 0xe0	; MEMORY MAPPED
.equ	CANIE1	= 0xdf	; MEMORY MAPPED
.equ	CANIE2	= 0xde	; MEMORY MAPPED
.equ	CANEN1	= 0xdd	; MEMORY MAPPED
.equ	CANEN2	= 0xdc	; MEMORY MAPPED
.equ	CANGIE	= 0xdb	; MEMORY MAPPED
.equ	CANGIT	= 0xda	; MEMORY MAPPED
.equ	CANGSTA	= 0xd9	; MEMORY MAPPED
.equ	CANGCON	= 0xd8	; MEMORY MAPPED
.equ	UDR1	= 0xce	; MEMORY MAPPED
.equ	UBRR1L	= 0xcc	; MEMORY MAPPED
.equ	UBRR1H	= 0xcd	; MEMORY MAPPED
.equ	UCSR1C	= 0xca	; MEMORY MAPPED
.equ	UCSR1B	= 0xc9	; MEMORY MAPPED
.equ	UCSR1A	= 0xc8	; MEMORY MAPPED
.equ	UDR0	= 0xc6	; MEMORY MAPPED
.equ	UBRR0L	= 0xc4	; MEMORY MAPPED
.equ	UBRR0H	= 0xc5	; MEMORY MAPPED
.equ	UCSR0C	= 0xc2	; MEMORY MAPPED
.equ	UCSR0B	= 0xc1	; MEMORY MAPPED
.equ	UCSR0A	= 0xc0	; MEMORY MAPPED
.equ	TWCR	= 0xbc	; MEMORY MAPPED
.equ	TWDR	= 0xbb	; MEMORY MAPPED
.equ	TWAR	= 0xba	; MEMORY MAPPED
.equ	TWSR	= 0xb9	; MEMORY MAPPED
.equ	TWBR	= 0xb8	; MEMORY MAPPED
.equ	ASSR	= 0xb6	; MEMORY MAPPED
.equ	OCR2A	= 0xb3	; MEMORY MAPPED
.equ	TCNT2	= 0xb2	; MEMORY MAPPED
.equ	TCCR2A	= 0xb0	; MEMORY MAPPED
.equ	OCR3CL	= 0x9c	; MEMORY MAPPED
.equ	OCR3CH	= 0x9d	; MEMORY MAPPED
.equ	OCR3BL	= 0x9a	; MEMORY MAPPED
.equ	OCR3BH	= 0x9b	; MEMORY MAPPED
.equ	OCR3AL	= 0x98	; MEMORY MAPPED
.equ	OCR3AH	= 0x99	; MEMORY MAPPED
.equ	ICR3L	= 0x96	; MEMORY MAPPED
.equ	ICR3H	= 0x97	; MEMORY MAPPED
.equ	TCNT3L	= 0x94	; MEMORY MAPPED
.equ	TCNT3H	= 0x95	; MEMORY MAPPED
.equ	TCCR3C	= 0x92	; MEMORY MAPPED
.equ	TCCR3B	= 0x91	; MEMORY MAPPED
.equ	TCCR3A	= 0x90	; MEMORY MAPPED
.equ	OCR1CL	= 0x8c	; MEMORY MAPPED
.equ	OCR1CH	= 0x8d	; MEMORY MAPPED
.equ	OCR1BL	= 0x8a	; MEMORY MAPPED
.equ	OCR1BH	= 0x8b	; MEMORY MAPPED
.equ	OCR1AL	= 0x88	; MEMORY MAPPED
.equ	OCR1AH	= 0x89	; MEMORY MAPPED
.equ	ICR1L	= 0x86	; MEMORY MAPPED
.equ	ICR1H	= 0x87	; MEMORY MAPPED
.equ	TCNT1L	= 0x84	; MEMORY MAPPED
.equ	TCNT1H	= 0x85	; MEMORY MAPPED
.equ	TCCR1C	= 0x82	; MEMORY MAPPED
.equ	TCCR1B	= 0x81	; MEMORY MAPPED
.equ	TCCR1A	= 0x80	; MEMORY MAPPED
.equ	DIDR1	= 0x7f	; MEMORY MAPPED
.equ	DIDR0	= 0x7e	; MEMORY MAPPED
.equ	ADMUX	= 0x7c	; MEMORY MAPPED
.equ	ADCSRB	= 0x7b	; MEMORY MAPPED
.equ	ADCSRA	= 0x7a	; MEMORY MAPPED
.equ	ADCH	= 0x79	; MEMORY MAPPED
.equ	ADCL	= 0x78	; MEMORY MAPPED
.equ	XMCRB	= 0x75	; MEMORY MAPPED
.equ	XMCRA	= 0x74	; MEMORY MAPPED
.equ	TIMSK3	= 0x71	; MEMORY MAPPED
.equ	TIMSK2	= 0x70	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	EICRB	= 0x6a	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	OSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR	= 0x64	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	RAMPZ	= 0x3b
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	OCDR	= 0x31
.equ	ACSR	= 0x30
.equ	SPDR	= 0x2e
.equ	SPSR	= 0x2d
.equ	SPCR	= 0x2c
.equ	GPIOR2	= 0x2b
.equ	GPIOR1	= 0x2a
.equ	OCR0A	= 0x27
.equ	TCNT0	= 0x26
.equ	TCCR0A	= 0x24
.equ	GTCCR	= 0x23
.equ	EEARL	= 0x21
.equ	EEARH	= 0x22
.equ	EEDR	= 0x20
.equ	EECR	= 0x1f
.equ	GPIOR0	= 0x1e
.equ	EIMSK	= 0x1d
.equ	EIFR	= 0x1c
.equ	TIFR3	= 0x18
.equ	TIFR2	= 0x17
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
.equ	PORTG	= 0x14
.equ	DDRG	= 0x13
.equ	PING	= 0x12
.equ	PORTF	= 0x11
.equ	DDRF	= 0x10
.equ	PINF	= 0x0f
.equ	PORTE	= 0x0e
.equ	DDRE	= 0x0d
.equ	PINE	= 0x0c
.equ	PORTD	= 0x0b
.equ	DDRD	= 0x0a
.equ	PIND	= 0x09
.equ	PORTC	= 0x08
.equ	DDRC	= 0x07
.equ	PINC	= 0x06
.equ	PORTB	= 0x05
.equ	DDRB	= 0x04
.equ	PINB	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** PORTA ************************
; PORTA - Port A Data Register
.equ	PORTA0	= 0	; Port A Data Register bit 0
.equ	PA0	= 0	; For compatibility
.equ	PORTA1	= 1	; Port A Data Register bit 1
.equ	PA1	= 1	; For compatibility
.equ	PORTA2	= 2	; Port A Data Register bit 2
.equ	PA2	= 2	; For compatibility
.equ	PORTA3	= 3	; Port A Data Register bit 3
.equ	PA3	= 3	; For compatibility
.equ	PORTA4	= 4	; Port A Data Register bit 4
.equ	PA4	= 4	; For compatibility
.equ	PORTA5	= 5	; Port A Data Register bit 5
.equ	PA5	= 5	; For compatibility
.equ	PORTA6	= 6	; Port A Data Register bit 6
.equ	PA6	= 6	; For compatibility
.equ	PORTA7	= 7	; Port A Data Register bit 7
.equ	PA7	= 7	; For compatibility

; DDRA - Port A Data Direction Register
.equ	DDA0	= 0	; Data Direction Register, Port A, bit 0
.equ	DDA1	= 1	; Data Direction Register, Port A, bit 1
.equ	DDA2	= 2	; Data Direction Register, Port A, bit 2
.equ	DDA3	= 3	; Data Direction Register, Port A, bit 3
.equ	DDA4	= 4	; Data Direction Register, Port A, bit 4
.equ	DDA5	= 5	; Data Direction Register, Port A, bit 5
.equ	DDA6	= 6	; Data Direction Register, Port A, bit 6
.equ	DDA7	= 7	; Data Direction Register, Port A, bit 7

; PINA - Port A Input Pins
.equ	PINA0	= 0	; Input Pins, Port A bit 0
.equ	PINA1	= 1	; Input Pins, Port A bit 1
.equ	PINA2	= 2	; Input Pins, Port A bit 2
.equ	PINA3	= 3	; Input Pins, Port A bit 3
.equ	PINA4	= 4	; Input Pins, Port A bit 4
.equ	PINA5	= 5	; Input Pins, Port A bit 5
.equ	PINA6	= 6	; Input Pins, Port A bit 6
.equ	PINA7	= 7	; Input Pins, Port A bit 7


; ***** PORTB ************************
; PORTB - Port B Data Register
.equ	PORTB0	= 0	; Port B Data Register bit 0
.equ	PB0	= 0	; For compatibility
.equ	PORTB1	= 1	; Port B Data Register bit 1
.equ	PB1	= 1	; For compatibility
.equ	PORTB2	= 2	; Port B Data Register bit 2
.equ	PB2	= 2	; For compatibility
.equ	PORTB3	= 3	; Port B Data Register bit 3
.equ	PB3	= 3	; For compatibility
.equ	PORTB4	= 4	; Port B Data Register bit 4
.equ	PB4	= 4	; For compatibility
.equ	PORTB5	= 5	; Port B Data Register bit 5
.equ	PB5	= 5	; For compatibility
.equ	PORTB6	= 6	; Port B Data Register bit 6
.equ	PB6	= 6	; For compatibility
.equ	PORTB7	= 7	; Port B Data Register bit 7
.equ	PB7	= 7	; For compatibility

; DDRB - Port B Data Direction Register
.equ	DDB0	= 0	; Port B Data Direction Register bit 0
.equ	DDB1	= 1	; Port B Data Direction Register bit 1
.equ	DDB2	= 2	; Port B Data Direction Register bit 2
.equ	DDB3	= 3	; Port B Data Direction Register bit 3
.equ	DDB4	= 4	; Port B Data Direction Register bit 4
.equ	DDB5	= 5	; Port B Data Direction Register bit 5
.equ	DDB6	= 6	; Port B Data Direction Register bit 6
.equ	DDB7	= 7	; Port B Data Direction Register bit 7

; PINB - Port B Input Pins
.equ	PINB0	= 0	; Port B Input Pins bit 0
.equ	PINB1	= 1	; Port B Input Pins bit 1
.equ	PINB2	= 2	; Port B Input Pins bit 2
.equ	PINB3	= 3	; Port B Input Pins bit 3
.equ	PINB4	= 4	; Port B Input Pins bit 4
.equ	PINB5	= 5	; Port B Input Pins bit 5
.equ	PINB6	= 6	; Port B Input Pins bit 6
.equ	PINB7	= 7	; Port B Input Pins bit 7


; ***** PORTC ************************
; PORTC - Port C Data Register
.equ	PORTC0	= 0	; Port C Data Register bit 0
.equ	PC0	= 0	; For compatibility
.equ	PORTC1	= 1	; Port C Data Register bit 1
.equ	PC1	= 1	; For compatibility
.equ	PORTC2	= 2	; Port C Data Register bit 2
.equ	PC2	= 2	; For compatibility
.equ	PORTC3	= 3	; Port C Data Register bit 3
.equ	PC3	= 3	; For compatibility
.equ	PORTC4	= 4	; Port C Data Register bit 4
.equ	PC4	= 4	; For compatibility
.equ	PORTC5	= 5	; Port C Data Register bit 5
.equ	PC5	= 5	; For compatibility
.equ	PORTC6	= 6	; Port C Data Register bit 6
.equ	PC6	= 6	; For compatibility
.equ	PORTC7	= 7	; Port C Data Register bit 7
.equ	PC7	= 7	; For compatibility

; DDRC - Port C Data Direction Register
.equ	DDC0	= 0	; Port C Data Direction Register bit 0
.equ	DDC1	= 1	; Port C Data Direction Register bit 1
.equ	DDC2	= 2	; Port C Data Direction Register bit 2
.equ	DDC3	= 3	; Port C Data Direction Register bit 3
.equ	DDC4	= 4	; Port C Data Direction Register bit 4
.equ	DDC5	= 5	; Port C Data Direction Register bit 5
.equ	DDC6	= 6	; Port C Data Direction Register bit 6
.equ	DDC7	= 7	; Port C Data Direction Register bit 7

; PINC - Port C Input Pins
.equ	PINC0	= 0	; Port C Input Pins bit 0
.equ	PINC1	= 1	; Port C Input Pins bit 1
.equ	PINC2	= 2	; Port C Input Pins bit 2
.equ	PINC3	= 3	; Port C Input Pins bit 3
.equ	PINC4	= 4	; Port C Input Pins bit 4
.equ	PINC5	= 5	; Port C Input Pins bit 5
.equ	PINC6	= 6	; Port C Input Pins bit 6
.equ	PINC7	= 7	; Port C Input Pins bit 7


; ***** PORTD ************************
; PORTD - Port D Data Register
.equ	PORTD0	= 0	; Port D Data Register bit 0
.equ	PD0	= 0	; For compatibility
.equ	PORTD1	= 1	; Port D Data Register bit 1
.equ	PD1	= 1	; For compatibility
.equ	PORTD2	= 2	; Port D Data Register bit 2
.equ	PD2	= 2	; For compatibility
.equ	PORTD3	= 3	; Port D Data Register bit 3
.equ	PD3	= 3	; For compatibility
.equ	PORTD4	= 4	; Port D Data Register bit 4
.equ	PD4	= 4	; For compatibility
.equ	PORTD5	= 5	; Port D Data Register bit 5
.equ	PD5	= 5	; For compatibility
.equ	PORTD6	= 6	; Port D Data Register bit 6
.equ	PD6	= 6	; For compatibility
.equ	PORTD7	= 7	; Port D Data Register bit 7
.equ	PD7	= 7	; For compatibility

; DDRD - Port D Data Direction Register
.equ	DDD0	= 0	; Port D Data Direction Register bit 0
.equ	DDD1	= 1	; Port D Data Direction Register bit 1
.equ	DDD2	= 2	; Port D Data Direction Register bit 2
.equ	DDD3	= 3	; Port D Data Direction Register bit 3
.equ	DDD4	= 4	; Port D Data Direction Register bit 4
.equ	DDD5	= 5	; Port D Data Direction Register bit 5
.equ	DDD6	= 6	; Port D Data Direction Register bit 6
.equ	DDD7	= 7	; Port D Data Direction Register bit 7

; PIND - Port D Input Pins
.equ	PIND0	= 0	; Port D Input Pins bit 0
.equ	PIND1	= 1	; Port D Input Pins bit 1
.equ	PIND2	= 2	; Port D Input Pins bit 2
.equ	PIND3	= 3	; Port D Input Pins bit 3
.equ	PIND4	= 4	; Port D Input Pins bit 4
.equ	PIND5	= 5	; Port D Input Pins bit 5
.equ	PIND6	= 6	; Port D Input Pins bit 6
.equ	PIND7	= 7	; Port D Input Pins bit 7


; ***** PORTE ************************
; PORTE - Data Register, Port E
.equ	PORTE0	= 0	; 
.equ	PE0	= 0	; For compatibility
.equ	PORTE1	= 1	; 
.equ	PE1	= 1	; For compatibility
.equ	PORTE2	= 2	; 
.equ	PE2	= 2	; For compatibility
.equ	PORTE3	= 3	; 
.equ	PE3	= 3	; For compatibility
.equ	PORTE4	= 4	; 
.equ	PE4	= 4	; For compatibility
.equ	PORTE5	= 5	; 
.equ	PE5	= 5	; For compatibility
.equ	PORTE6	= 6	; 
.equ	PE6	= 6	; For compatibility
.equ	PORTE7	= 7	; 
.equ	PE7	= 7	; For compatibility

; DDRE - Data Direction Register, Port E
.equ	DDE0	= 0	; 
.equ	DDE1	= 1	; 
.equ	DDE2	= 2	; 
.equ	DDE3	= 3	; 
.equ	DDE4	= 4	; 
.equ	DDE5	= 5	; 
.equ	DDE6	= 6	; 
.equ	DDE7	= 7	; 

; PINE - Input Pins, Port E
.equ	PINE0	= 0	; 
.equ	PINE1	= 1	; 
.equ	PINE2	= 2	; 
.equ	PINE3	= 3	; 
.equ	PINE4	= 4	; 
.equ	PINE5	= 5	; 
.equ	PINE6	= 6	; 
.equ	PINE7	= 7	; 


; ***** PORTF ************************
; PORTF - Data Register, Port F
.equ	PORTF0	= 0	; 
.equ	PF0	= 0	; For compatibility
.equ	PORTF1	= 1	; 
.equ	PF1	= 1	; For compatibility
.equ	PORTF2	= 2	; 
.equ	PF2	= 2	; For compatibility
.equ	PORTF3	= 3	; 
.equ	PF3	= 3	; For compatibility
.equ	PORTF4	= 4	; 
.equ	PF4	= 4	; For compatibility
.equ	PORTF5	= 5	; 
.equ	PF5	= 5	; For compatibility
.equ	PORTF6	= 6	; 
.equ	PF6	= 6	; For compatibility
.equ	PORTF7	= 7	; 
.equ	PF7	= 7	; For compatibility

; DDRF - Data Direction Register, Port F
.equ	DDF0	= 0	; 
.equ	DDF1	= 1	; 
.equ	DDF2	= 2	; 
.equ	DDF3	= 3	; 
.equ	DDF4	= 4	; 
.equ	DDF5	= 5	; 
.equ	DDF6	= 6	; 
.equ	DDF7	= 7	; 

; PINF - Input Pins, Port F
.equ	PINF0	= 0	; 
.equ	PINF1	= 1	; 
.equ	PINF2	= 2	; 
.equ	PINF3	= 3	; 
.equ	PINF4	= 4	; 
.equ	PINF5	= 5	; 
.equ	PINF6	= 6	; 
.equ	PINF7	= 7	; 


; ***** JTAG *************************
; OCDR - On-Chip Debug Related Register in I/O Memory
.equ	OCDR0	= 0	; On-Chip Debug Register Bit 0
.equ	OCDR1	= 1	; On-Chip Debug Register Bit 1
.equ	OCDR2	= 2	; On-Chip Debug Register Bit 2
.equ	OCDR3	= 3	; On-Chip Debug Register Bit 3
.equ	OCDR4	= 4	; On-Chip Debug Register Bit 4
.equ	OCDR5	= 5	; On-Chip Debug Register Bit 5
.equ	OCDR6	= 6	; On-Chip Debug Register Bit 6
.equ	OCDR7	= 7	; On-Chip Debug Register Bit 7
.equ	IDRD	= OCDR7	; For compatibility

; MCUCR - MCU Control Register
.equ	JTD	= 7	; JTAG Interface Disable

; MCUSR - MCU Status Register
.equ	JTRF	= 4	; JTAG Reset Flag


; ***** SPI **************************
; SPDR - SPI Data Register
.equ	SPDR0	= 0	; SPI Data Register bit 0
.equ	SPDR1	= 1	; SPI Data Register bit 1
.equ	SPDR2	= 2	; SPI Data Register bit 2
.equ	SPDR3	= 3	; SPI Data Register bit 3
.equ	SPDR4	= 4	; SPI Data Register bit 4
.equ	SPDR5	= 5	; SPI Data Register bit 5
.equ	SPDR6	= 6	; SPI Data Register bit 6
.equ	SPDR7	= 7	; SPI Data Register bit 7

; SPSR - SPI Status Register
.equ	SPI2X	= 0	; Double SPI Speed Bit
.equ	WCOL	= 6	; Write Collision Flag
.equ	SPIF	= 7	; SPI Interrupt Flag

; SPCR - SPI Control Register
.equ	SPR0	= 0	; SPI Clock Rate Select 0
.equ	SPR1	= 1	; SPI Clock Rate Select 1
.equ	CPHA	= 2	; Clock Phase
.equ	CPOL	= 3	; Clock polarity
.equ	MSTR	= 4	; Master/Slave Select
.equ	DORD	= 5	; Data Order
.equ	SPE	= 6	; SPI Enable
.equ	SPIE	= 7	; SPI Interrupt Enable


; ***** TWI **************************
; TWBR - TWI Bit Rate register
.equ	I2BR	= TWBR	; For compatibility
.equ	TWBR0	= 0	; 
.equ	TWBR1	= 1	; 
.equ	TWBR2	= 2	; 
.equ	TWBR3	= 3	; 
.equ	TWBR4	= 4	; 
.equ	TWBR5	= 5	; 
.equ	TWBR6	= 6	; 
.equ	TWBR7	= 7	; 

; TWCR - TWI Control Register
.equ	I2CR	= TWCR	; For compatibility
.equ	TWIE	= 0	; TWI Interrupt Enable
.equ	I2IE	= TWIE	; For compatibility
.equ	TWEN	= 2	; TWI Enable Bit
.equ	I2EN	= TWEN	; For compatibility
.equ	ENI2C	= TWEN	; For compatibility
.equ	TWWC	= 3	; TWI Write Collition Flag
.equ	I2WC	= TWWC	; For compatibility
.equ	TWSTO	= 4	; TWI Stop Condition Bit
.equ	I2STO	= TWSTO	; For compatibility
.equ	TWSTA	= 5	; TWI Start Condition Bit
.equ	I2STA	= TWSTA	; For compatibility
.equ	TWEA	= 6	; TWI Enable Acknowledge Bit
.equ	I2EA	= TWEA	; For compatibility
.equ	TWINT	= 7	; TWI Interrupt Flag
.equ	I2INT	= TWINT	; For compatibility

; TWSR - TWI Status Register
.equ	I2SR	= TWSR	; For compatibility
.equ	TWPS0	= 0	; TWI Prescaler
.equ	TWS0	= TWPS0	; For compatibility
.equ	I2GCE	= TWPS0	; For compatibility
.equ	TWPS1	= 1	; TWI Prescaler
.equ	TWS1	= TWPS1	; For compatibility
.equ	TWS3	= 3	; TWI Status
.equ	I2S3	= TWS3	; For compatibility
.equ	TWS4	= 4	; TWI Status
.equ	I2S4	= TWS4	; For compatibility
.equ	TWS5	= 5	; TWI Status
.equ	I2S5	= TWS5	; For compatibility
.equ	TWS6	= 6	; TWI Status
.equ	I2S6	= TWS6	; For compatibility
.equ	TWS7	= 7	; TWI Status
.equ	I2S7	= TWS7	; For compatibility

; TWDR - TWI Data register
.equ	I2DR	= TWDR	; For compatibility
.equ	TWD0	= 0	; TWI Data Register Bit 0
.equ	TWD1	= 1	; TWI Data Register Bit 1
.equ	TWD2	= 2	; TWI Data Register Bit 2
.equ	TWD3	= 3	; TWI Data Register Bit 3
.equ	TWD4	= 4	; TWI Data Register Bit 4
.equ	TWD5	= 5	; TWI Data Register Bit 5
.equ	TWD6	= 6	; TWI Data Register Bit 6
.equ	TWD7	= 7	; TWI Data Register Bit 7

; TWAR - TWI (Slave) Address register
.equ	I2AR	= TWAR	; For compatibility
.equ	TWGCE	= 0	; TWI General Call Recognition Enable Bit
.equ	TWA0	= 1	; TWI (Slave) Address register Bit 0
.equ	TWA1	= 2	; TWI (Slave) Address register Bit 1
.equ	TWA2	= 3	; TWI (Slave) Address register Bit 2
.equ	TWA3	= 4	; TWI (Slave) Address register Bit 3
.equ	TWA4	= 5	; TWI (Slave) Address register Bit 4
.equ	TWA5	= 6	; TWI (Slave) Address register Bit 5
.equ	TWA6	= 7	; TWI (Slave) Address register Bit 6


; ***** USART0 ***********************
; UDR0 - USART I/O Data Register
.equ	UDR00	= 0	; USART I/O Data Register bit 0
.equ	UDR01	= 1	; USART I/O Data Register bit 1
.equ	UDR02	= 2	; USART I/O Data Register bit 2
.equ	UDR03	= 3	; USART I/O Data Register bit 3
.equ	UDR04	= 4	; USART I/O Data Register bit 4
.equ	UDR05	= 5	; USART I/O Data Register bit 5
.equ	UDR06	= 6	; USART I/O Data Register bit 6
.equ	UDR07	= 7	; USART I/O Data Register bit 7

; UCSR0A - USART Control and Status Register A
.equ	MPCM0	= 0	; Multi-processor Communication Mode
.equ	U2X0	= 1	; Double the USART transmission speed
.equ	UPE0	= 2	; Parity Error
.equ	DOR0	= 3	; Data overRun
.equ	FE0	= 4	; Framing Error
.equ	UDRE0	= 5	; USART Data Register Empty
.equ	TXC0	= 6	; USART Transmitt Complete
.equ	RXC0	= 7	; USART Receive Complete

; UCSR0B - USART Control and Status Register B
.equ	TXB80	= 0	; Transmit Data Bit 8
.equ	RXB80	= 1	; Receive Data Bit 8
.equ	UCSZ02	= 2	; Character Size
.equ	UCSZ2	= UCSZ02	; For compatibility
.equ	TXEN0	= 3	; Transmitter Enable
.equ	RXEN0	= 4	; Receiver Enable
.equ	UDRIE0	= 5	; USART Data register Empty Interrupt Enable
.equ	TXCIE0	= 6	; TX Complete Interrupt Enable
.equ	RXCIE0	= 7	; RX Complete Interrupt Enable

; UCSR0C - USART Control and Status Register C
.equ	UCPOL0	= 0	; Clock Polarity
.equ	UCSZ00	= 1	; Character Size
.equ	UCSZ01	= 2	; Character Size
.equ	USBS0	= 3	; Stop Bit Select
.equ	UPM00	= 4	; Parity Mode Bit 0
.equ	UPM01	= 5	; Parity Mode Bit 1
.equ	UMSEL0	= 6	; USART Mode Select

; UBRR0H - USART Baud Rate Register Hight Byte
.equ	UBRR8	= 0	; USART Baud Rate Register bit 8
.equ	UBRR9	= 1	; USART Baud Rate Register bit 9
.equ	UBRR10	= 2	; USART Baud Rate Register bit 10
.equ	UBRR11	= 3	; USART Baud Rate Register bit 11

; UBRR0L - USART Baud Rate Register Low Byte
.equ	UBRR0	= 0	; USART Baud Rate Register bit 0
.equ	UBRR1	= 1	; USART Baud Rate Register bit 1
.equ	UBRR2	= 2	; USART Baud Rate Register bit 2
.equ	UBRR3	= 3	; USART Baud Rate Register bit 3
.equ	UBRR4	= 4	; USART Baud Rate Register bit 4
.equ	UBRR5	= 5	; USART Baud Rate Register bit 5
.equ	UBRR6	= 6	; USART Baud Rate Register bit 6
.equ	UBRR7	= 7	; USART Baud Rate Register bit 7


; ***** USART1 ***********************
; UDR1 - USART I/O Data Register
.equ	UDR10	= 0	; USART I/O Data Register bit 0
.equ	UDR11	= 1	; USART I/O Data Register bit 1
.equ	UDR12	= 2	; USART I/O Data Register bit 2
.equ	UDR13	= 3	; USART I/O Data Register bit 3
.equ	UDR14	= 4	; USART I/O Data Register bit 4
.equ	UDR15	= 5	; USART I/O Data Register bit 5
.equ	UDR16	= 6	; USART I/O Data Register bit 6
.equ	UDR17	= 7	; USART I/O Data Register bit 7

; UCSR1A - USART Control and Status Register A
.equ	MPCM1	= 0	; Multi-processor Communication Mode
.equ	U2X1	= 1	; Double the USART transmission speed
.equ	UPE1	= 2	; Parity Error
.equ	DOR1	= 3	; Data overRun
.equ	FE1	= 4	; Framing Error
.equ	UDRE1	= 5	; USART Data Register Empty
.equ	TXC1	= 6	; USART Transmitt Complete
.equ	RXC1	= 7	; USART Receive Complete

; UCSR1B - USART Control and Status Register B
.equ	TXB81	= 0	; Transmit Data Bit 8
.equ	RXB81	= 1	; Receive Data Bit 8
.equ	UCSZ12	= 2	; Character Size
.equ	TXEN1	= 3	; Transmitter Enable
.equ	RXEN1	= 4	; Receiver Enable
.equ	UDRIE1	= 5	; USART Data register Empty Interrupt Enable
.equ	TXCIE1	= 6	; TX Complete Interrupt Enable
.equ	RXCIE1	= 7	; RX Complete Interrupt Enable

; UCSR1C - USART Control and Status Register C
.equ	UCPOL1	= 0	; Clock Polarity
.equ	UCSZ10	= 1	; Character Size
.equ	UCSZ11	= 2	; Character Size
.equ	USBS1	= 3	; Stop Bit Select
.equ	UPM10	= 4	; Parity Mode Bit 0
.equ	UPM11	= 5	; Parity Mode Bit 1
.equ	UMSEL1	= 6	; USART Mode Select

; UBRR1H - USART Baud Rate Register Hight Byte
;.equ	UBRR8	= 0	; USART Baud Rate Register bit 8
;.equ	UBRR9	= 1	; USART Baud Rate Register bit 9
;.equ	UBRR10	= 2	; USART Baud Rate Register bit 10
;.equ	UBRR11	= 3	; USART Baud Rate Register bit 11

; UBRR1L - USART Baud Rate Register Low Byte
;.equ	UBRR0	= 0	; USART Baud Rate Register bit 0
;.equ	UBRR1	= 1	; USART Baud Rate Register bit 1
;.equ	UBRR2	= 2	; USART Baud Rate Register bit 2
;.equ	UBRR3	= 3	; USART Baud Rate Register bit 3
;.equ	UBRR4	= 4	; USART Baud Rate Register bit 4
;.equ	UBRR5	= 5	; USART Baud Rate Register bit 5
;.equ	UBRR6	= 6	; USART Baud Rate Register bit 6
;.equ	UBRR7	= 7	; USART Baud Rate Register bit 7


; ***** CPU **************************
; SREG - Status Register
.equ	SREG_C	= 0	; Carry Flag
.equ	SREG_Z	= 1	; Zero Flag
.equ	SREG_N	= 2	; Negative Flag
.equ	SREG_V	= 3	; Two's Complement Overflow Flag
.equ	SREG_S	= 4	; Sign Bit
.equ	SREG_H	= 5	; Half Carry Flag
.equ	SREG_T	= 6	; Bit Copy Storage
.equ	SREG_I	= 7	; Global Interrupt Enable

; MCUCR - MCU Control Register
.equ	IVCE	= 0	; Interrupt Vector Change Enable
.equ	IVSEL	= 1	; Interrupt Vector Select
.equ	PUD	= 4	; Pull-up disable

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag
;.equ	JTRF	= 4	; JTAG Reset Flag

; XMCRA - External Memory Control Register A
.equ	SRW00	= 0	; Wait state select bit lower page
.equ	SRW01	= 1	; Wait state select bit lower page
.equ	SRW10	= 2	; Wait state select bit upper page
.equ	SRW11	= 3	; Wait state select bit upper page
.equ	SRL0	= 4	; Wait state page limit
.equ	SRL1	= 5	; Wait state page limit
.equ	SRL2	= 6	; Wait state page limit
.equ	SRE	= 7	; External SRAM Enable

; XMCRB - External Memory Control Register B
.equ	XMM0	= 0	; External Memory High Mask
.equ	XMM1	= 1	; External Memory High Mask
.equ	XMM2	= 2	; External Memory High Mask
.equ	XMBK	= 7	; External Memory Bus Keeper Enable

; OSCCAL - Oscillator Calibration Value
.equ	CAL0	= 0	; Oscillator Calibration Value Bit0
.equ	CAL1	= 1	; Oscillator Calibration Value Bit1
.equ	CAL2	= 2	; Oscillator Calibration Value Bit2
.equ	CAL3	= 3	; Oscillator Calibration Value Bit3
.equ	CAL4	= 4	; Oscillator Calibration Value Bit4
.equ	CAL5	= 5	; Oscillator Calibration Value Bit5
.equ	CAL6	= 6	; Oscillator Calibration Value Bit6

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; 
.equ	CLKPS1	= 1	; 
.equ	CLKPS2	= 2	; 
.equ	CLKPS3	= 3	; 
.equ	CLKPCE	= 7	; 

; SMCR - Sleep Mode Control Register
.equ	SE	= 0	; Sleep Enable
.equ	SM0	= 1	; Sleep Mode Select bit 0
.equ	SM1	= 2	; Sleep Mode Select bit 1
.equ	SM2	= 3	; Sleep Mode Select bit 2

; RAMPZ - RAM Page Z Select Register - Not used.
.equ	RAMPZ0	= 0	; RAM Page Z Select Register Bit 0

; GPIOR2 - General Purpose IO Register 2
.equ	GPIOR20	= 0	; General Purpose IO Register 2 bit 0
.equ	GPIOR21	= 1	; General Purpose IO Register 2 bit 1
.equ	GPIOR22	= 2	; General Purpose IO Register 2 bit 2
.equ	GPIOR23	= 3	; General Purpose IO Register 2 bit 3
.equ	GPIOR24	= 4	; General Purpose IO Register 2 bit 4
.equ	GPIOR25	= 5	; General Purpose IO Register 2 bit 5
.equ	GPIOR26	= 6	; General Purpose IO Register 2 bit 6
.equ	GPIOR27	= 7	; General Purpose IO Register 2 bit 7

; GPIOR1 - General Purpose IO Register 1
.equ	GPIOR10	= 0	; General Purpose IO Register 1 bit 0
.equ	GPIOR11	= 1	; General Purpose IO Register 1 bit 1
.equ	GPIOR12	= 2	; General Purpose IO Register 1 bit 2
.equ	GPIOR13	= 3	; General Purpose IO Register 1 bit 3
.equ	GPIOR14	= 4	; General Purpose IO Register 1 bit 4
.equ	GPIOR15	= 5	; General Purpose IO Register 1 bit 5
.equ	GPIOR16	= 6	; General Purpose IO Register 1 bit 6
.equ	GPIOR17	= 7	; General Purpose IO Register 1 bit 7

; GPIOR0 - General Purpose IO Register 0
.equ	GPIOR00	= 0	; General Purpose IO Register 0 bit 0
.equ	GPIOR01	= 1	; General Purpose IO Register 0 bit 1
.equ	GPIOR02	= 2	; General Purpose IO Register 0 bit 2
.equ	GPIOR03	= 3	; General Purpose IO Register 0 bit 3
.equ	GPIOR04	= 4	; General Purpose IO Register 0 bit 4
.equ	GPIOR05	= 5	; General Purpose IO Register 0 bit 5
.equ	GPIOR06	= 6	; General Purpose IO Register 0 bit 6
.equ	GPIOR07	= 7	; General Purpose IO Register 0 bit 7


; ***** BOOT_LOAD ********************
; SPMCSR - Store Program Memory Control Register
.equ	SPMCR	= SPMCSR	; For compatibility
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	BLBSET	= 3	; Boot Lock Bit Set
.equ	RWWSRE	= 4	; Read While Write section read enable
.equ	ASRE	= RWWSRE	; For compatibility
.equ	RWWSB	= 6	; Read While Write Section Busy
.equ	ASB	= RWWSB	; For compatibility
.equ	SPMIE	= 7	; SPM Interrupt Enable


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0	; External Interrupt Sense Control Bit
.equ	ISC01	= 1	; External Interrupt Sense Control Bit
.equ	ISC10	= 2	; External Interrupt Sense Control Bit
.equ	ISC11	= 3	; External Interrupt Sense Control Bit
.equ	ISC20	= 4	; External Interrupt Sense Control Bit
.equ	ISC21	= 5	; External Interrupt Sense Control Bit
.equ	ISC30	= 6	; External Interrupt Sense Control Bit
.equ	ISC31	= 7	; External Interrupt Sense Control Bit

; EICRB - External Interrupt Control Register B
.equ	ISC40	= 0	; External Interrupt 7-4 Sense Control Bit
.equ	ISC41	= 1	; External Interrupt 7-4 Sense Control Bit
.equ	ISC50	= 2	; External Interrupt 7-4 Sense Control Bit
.equ	ISC51	= 3	; External Interrupt 7-4 Sense Control Bit
.equ	ISC60	= 4	; External Interrupt 7-4 Sense Control Bit
.equ	ISC61	= 5	; External Interrupt 7-4 Sense Control Bit
.equ	ISC70	= 6	; External Interrupt 7-4 Sense Control Bit
.equ	ISC71	= 7	; External Interrupt 7-4 Sense Control Bit

; EIMSK - External Interrupt Mask Register
.equ	GICR	= EIMSK	; For compatibility
.equ	GIMSK	= EIMSK	; For compatibility
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable
.equ	INT2	= 2	; External Interrupt Request 2 Enable
.equ	INT3	= 3	; External Interrupt Request 3 Enable
.equ	INT4	= 4	; External Interrupt Request 4 Enable
.equ	INT5	= 5	; External Interrupt Request 5 Enable
.equ	INT6	= 6	; External Interrupt Request 6 Enable
.equ	INT7	= 7	; External Interrupt Request 7 Enable

; EIFR - External Interrupt Flag Register
.equ	GIFR	= EIFR	; For compatibility
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1
.equ	INTF2	= 2	; External Interrupt Flag 2
.equ	INTF3	= 3	; External Interrupt Flag 3
.equ	INTF4	= 4	; External Interrupt Flag 4
.equ	INTF5	= 5	; External Interrupt Flag 5
.equ	INTF6	= 6	; External Interrupt Flag 6
.equ	INTF7	= 7	; External Interrupt Flag 7


; ***** EEPROM ***********************
; EEDR - EEPROM Data Register
.equ	EEDR0	= 0	; EEPROM Data Register bit 0
.equ	EEDR1	= 1	; EEPROM Data Register bit 1
.equ	EEDR2	= 2	; EEPROM Data Register bit 2
.equ	EEDR3	= 3	; EEPROM Data Register bit 3
.equ	EEDR4	= 4	; EEPROM Data Register bit 4
.equ	EEDR5	= 5	; EEPROM Data Register bit 5
.equ	EEDR6	= 6	; EEPROM Data Register bit 6
.equ	EEDR7	= 7	; EEPROM Data Register bit 7

; EECR - EEPROM Control Register
.equ	EERE	= 0	; EEPROM Read Enable
.equ	EEWE	= 1	; EEPROM Write Enable
.equ	EEMWE	= 2	; EEPROM Master Write Enable
.equ	EERIE	= 3	; EEPROM Ready Interrupt Enable


; ***** PORTG ************************
; PORTG - Data Register, Port G
.equ	PORTG0	= 0	; 
.equ	PG0	= 0	; For compatibility
.equ	PORTG1	= 1	; 
.equ	PG1	= 1	; For compatibility
.equ	PORTG2	= 2	; 
.equ	PG2	= 2	; For compatibility
.equ	PORTG3	= 3	; 
.equ	PG3	= 3	; For compatibility
.equ	PORTG4	= 4	; 
.equ	PG4	= 4	; For compatibility

; DDRG - Data Direction Register, Port G
.equ	DDG0	= 0	; 
.equ	DDG1	= 1	; 
.equ	DDG2	= 2	; 
.equ	DDG3	= 3	; 
.equ	DDG4	= 4	; 

; PING - Input Pins, Port G
.equ	PING0	= 0	; 
.equ	PING1	= 1	; 
.equ	PING2	= 2	; 
.equ	PING3	= 3	; 
.equ	PING4	= 4	; 


; ***** TIMER_COUNTER_0 **************
; TCCR0A - Timer/Counter0 Control Register
.equ	CS00	= 0	; Clock Select 0
.equ	CS01	= 1	; Clock Select 1
.equ	CS02	= 2	; Clock Select 2
.equ	WGM01	= 3	; Waveform Generation Mode 1
.equ	COM0A0	= 4	; Compare match Output Mode 0
.equ	COM0A1	= 5	; Compare Match Output Mode 1
.equ	WGM00	= 6	; Waveform Generation Mode 0
.equ	FOC0A	= 7	; Force Output Compare

; TCNT0 - Timer/Counter0
.equ	TCNT0_0	= 0	; 
.equ	TCNT0_1	= 1	; 
.equ	TCNT0_2	= 2	; 
.equ	TCNT0_3	= 3	; 
.equ	TCNT0_4	= 4	; 
.equ	TCNT0_5	= 5	; 
.equ	TCNT0_6	= 6	; 
.equ	TCNT0_7	= 7	; 

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A0	= 0	; 
.equ	OCR0A1	= 1	; 
.equ	OCR0A2	= 2	; 
.equ	OCR0A3	= 3	; 
.equ	OCR0A4	= 4	; 
.equ	OCR0A5	= 5	; 
.equ	OCR0A6	= 6	; 
.equ	OCR0A7	= 7	; 

; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Timer/Counter0 Output Compare Flag 0

; GTCCR - General Timer/Control Register
.equ	PSR310	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	PSR10	= PSR310	; For compatibility
.equ	PSR0	= PSR310	; For compatibility
.equ	PSR1	= PSR310	; For compatibility
.equ	PSR3	= PSR310	; For compatibility
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	OCIE1C	= 3	; Timer/Counter1 Output CompareC Match Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Output Compare Flag 1A
.equ	OCF1B	= 2	; Output Compare Flag 1B
.equ	OCF1C	= 3	; Output Compare Flag 1C
.equ	ICF1	= 5	; Input Capture Flag 1

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode
.equ	WGM11	= 1	; Waveform Generation Mode
.equ	COM1C0	= 2	; Compare Output Mode 1C, bit 0
.equ	COM1C1	= 3	; Compare Output Mode 1C, bit 1
.equ	COM1B0	= 4	; Compare Output Mode 1B, bit 0
.equ	COM1B1	= 5	; Compare Output Mode 1B, bit 1
.equ	COM1A0	= 6	; Comparet Ouput Mode 1A, bit 0
.equ	COM1A1	= 7	; Compare Output Mode 1A, bit 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Prescaler source of Timer/Counter 1
.equ	CS11	= 1	; Prescaler source of Timer/Counter 1
.equ	CS12	= 2	; Prescaler source of Timer/Counter 1
.equ	WGM12	= 3	; Waveform Generation Mode
.equ	WGM13	= 4	; Waveform Generation Mode
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter 1 Control Register C
.equ	FOC1C	= 5	; Force Output Compare 1C
.equ	FOC1B	= 6	; Force Output Compare 1B
.equ	FOC1A	= 7	; Force Output Compare 1A


; ***** TIMER_COUNTER_3 **************
; TIMSK3 - Timer/Counter Interrupt Mask Register
.equ	TOIE3	= 0	; Timer/Counter3 Overflow Interrupt Enable
.equ	OCIE3A	= 1	; Timer/Counter3 Output CompareA Match Interrupt Enable
.equ	OCIE3B	= 2	; Timer/Counter3 Output CompareB Match Interrupt Enable
.equ	OCIE3C	= 3	; Timer/Counter3 Output CompareC Match Interrupt Enable
.equ	ICIE3	= 5	; Timer/Counter3 Input Capture Interrupt Enable

; TIFR3 - Timer/Counter Interrupt Flag register
.equ	TOV3	= 0	; Timer/Counter3 Overflow Flag
.equ	OCF3A	= 1	; Output Compare Flag 3A
.equ	OCF3B	= 2	; Output Compare Flag 3B
.equ	OCF3C	= 3	; Output Compare Flag 3C
.equ	ICF3	= 5	; Input Capture Flag 3

; TCCR3A - Timer/Counter3 Control Register A
.equ	WGM30	= 0	; Waveform Generation Mode
.equ	WGM31	= 1	; Waveform Generation Mode
.equ	COM3C0	= 2	; Compare Output Mode 3C, bit 0
.equ	COM3C1	= 3	; Compare Output Mode 3C, bit 1
.equ	COM3B0	= 4	; Compare Output Mode 3B, bit 0
.equ	COM3B1	= 5	; Compare Output Mode 3B, bit 1
.equ	COM3A0	= 6	; Comparet Ouput Mode 3A, bit 0
.equ	COM3A1	= 7	; Compare Output Mode 3A, bit 1

; TCCR3B - Timer/Counter3 Control Register B
.equ	CS30	= 0	; Prescaler source of Timer/Counter 3
.equ	CS31	= 1	; Prescaler source of Timer/Counter 3
.equ	CS32	= 2	; Prescaler source of Timer/Counter 3
.equ	WGM32	= 3	; Waveform Generation Mode
.equ	WGM33	= 4	; Waveform Generation Mode
.equ	ICES3	= 6	; Input Capture 3 Edge Select
.equ	ICNC3	= 7	; Input Capture 3 Noise Canceler

; TCCR3C - Timer/Counter 3 Control Register C
.equ	FOC3C	= 5	; Force Output Compare 3C
.equ	FOC3B	= 6	; Force Output Compare 3B
.equ	FOC3A	= 7	; Force Output Compare 3A


; ***** TIMER_COUNTER_2 **************
; TIMSK2 - Timer/Counter Interrupt Mask register
.equ	TOIE2	= 0	; Timer/Counter2 Overflow Interrupt Enable
.equ	OCIE2A	= 1	; Timer/Counter2 Output Compare Match Interrupt Enable

; TIFR2 - Timer/Counter Interrupt Flag Register
.equ	TOV2	= 0	; Timer/Counter2 Overflow Flag
.equ	OCF2A	= 1	; Output Compare Flag 2

; TCCR2A - Timer/Counter2 Control Register
.equ	CS20	= 0	; Clock Select bit 0
.equ	CS21	= 1	; Clock Select bit 1
.equ	CS22	= 2	; Clock Select bit 2
.equ	WGM21	= 3	; Waveform Generation Mode
.equ	COM2A0	= 4	; Compare Output Mode bit 0
.equ	COM2A1	= 5	; Compare Output Mode bit 1
.equ	WGM20	= 6	; Waveform Genration Mode
.equ	FOC2A	= 7	; Force Output Compare
.equ	FOC2	= FOC2A	; For compatibility

; TCNT2 - Timer/Counter2
.equ	TCNT2_0	= 0	; Timer/Counter 2 bit 0
.equ	TCNT2_1	= 1	; Timer/Counter 2 bit 1
.equ	TCNT2_2	= 2	; Timer/Counter 2 bit 2
.equ	TCNT2_3	= 3	; Timer/Counter 2 bit 3
.equ	TCNT2_4	= 4	; Timer/Counter 2 bit 4
.equ	TCNT2_5	= 5	; Timer/Counter 2 bit 5
.equ	TCNT2_6	= 6	; Timer/Counter 2 bit 6
.equ	TCNT2_7	= 7	; Timer/Counter 2 bit 7

; OCR2A - Timer/Counter2 Output Compare Register
.equ	OCR2A0	= 0	; Timer/Counter2 Output Compare Register Bit 0
.equ	OCR2A1	= 1	; Timer/Counter2 Output Compare Register Bit 1
.equ	OCR2A2	= 2	; Timer/Counter2 Output Compare Register Bit 2
.equ	OCR2A3	= 3	; Timer/Counter2 Output Compare Register Bit 3
.equ	OCR2A4	= 4	; Timer/Counter2 Output Compare Register Bit 4
.equ	OCR2A5	= 5	; Timer/Counter2 Output Compare Register Bit 5
.equ	OCR2A6	= 6	; Timer/Counter2 Output Compare Register Bit 6
.equ	OCR2A7	= 7	; Timer/Counter2 Output Compare Register Bit 7

; GTCCR - General Timer/Counter Control Register
.equ	PSR2	= 1	; Prescaler Reset Timer/Counter2

; ASSR - Asynchronous Status Register
.equ	TCR2UB	= 0	; TCR2UB: Timer/Counter Control Register2 Update Busy
.equ	OCR2UB	= 1	; Output Compare Register2 Update Busy
.equ	TCN2UB	= 2	; TCN2UB: Timer/Counter2 Update Busy
.equ	AS2	= 3	; AS2: Asynchronous Timer/Counter2
.equ	EXCLK	= 4	; Enable External Clock Interrupt


; ***** WATCHDOG *********************
; WDTCR - Watchdog Timer Control Register
.equ	WDTCSR	= WDTCR	; For compatibility
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDCE	= 4	; Watchdog Change Enable
.equ	WDTOE	= WDCE	; For compatibility


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
.equ	MUX4	= 4	; Analog Channel and Gain Selection Bits
.equ	ADLAR	= 5	; Left Adjust Result
.equ	REFS0	= 6	; Reference Selection Bit 0
.equ	REFS1	= 7	; Reference Selection Bit 1

; ADCSRA - The ADC Control and Status register
.equ	ADPS0	= 0	; ADC  Prescaler Select Bits
.equ	ADPS1	= 1	; ADC  Prescaler Select Bits
.equ	ADPS2	= 2	; ADC  Prescaler Select Bits
.equ	ADIE	= 3	; ADC Interrupt Enable
.equ	ADIF	= 4	; ADC Interrupt Flag
.equ	ADATE	= 5	; ADC Auto Trigger Enable
.equ	ADSC	= 6	; ADC Start Conversion
.equ	ADEN	= 7	; ADC Enable

; ADCH - ADC Data Register High Byte
.equ	ADCH0	= 0	; ADC Data Register High Byte Bit 0
.equ	ADCH1	= 1	; ADC Data Register High Byte Bit 1
.equ	ADCH2	= 2	; ADC Data Register High Byte Bit 2
.equ	ADCH3	= 3	; ADC Data Register High Byte Bit 3
.equ	ADCH4	= 4	; ADC Data Register High Byte Bit 4
.equ	ADCH5	= 5	; ADC Data Register High Byte Bit 5
.equ	ADCH6	= 6	; ADC Data Register High Byte Bit 6
.equ	ADCH7	= 7	; ADC Data Register High Byte Bit 7

; ADCL - ADC Data Register Low Byte
.equ	ADCL0	= 0	; ADC Data Register Low Byte Bit 0
.equ	ADCL1	= 1	; ADC Data Register Low Byte Bit 1
.equ	ADCL2	= 2	; ADC Data Register Low Byte Bit 2
.equ	ADCL3	= 3	; ADC Data Register Low Byte Bit 3
.equ	ADCL4	= 4	; ADC Data Register Low Byte Bit 4
.equ	ADCL5	= 5	; ADC Data Register Low Byte Bit 5
.equ	ADCL6	= 6	; ADC Data Register Low Byte Bit 6
.equ	ADCL7	= 7	; ADC Data Register Low Byte Bit 7

; ADCSRB - ADC Control and Status Register B
.equ	ADTS0	= 0	; ADC Auto Trigger Source 0
.equ	ADTS1	= 1	; ADC Auto Trigger Source 1
.equ	ADTS2	= 2	; ADC Auto Trigger Source 2
.equ	ADHSM	= 7	; ADC High Speed Mode

; DIDR0 - Digital Input Disable Register 1
.equ	ADC0D	= 0	; ADC0 Digital input Disable
.equ	ADC1D	= 1	; ADC1 Digital input Disable
.equ	ADC2D	= 2	; ADC2 Digital input Disable
.equ	ADC3D	= 3	; ADC3 Digital input Disable
.equ	ADC4D	= 4	; ADC4 Digital input Disable
.equ	ADC5D	= 5	; ADC5 Digital input Disable
.equ	ADC6D	= 6	; ADC6 Digital input Disable
.equ	ADC7D	= 7	; ADC7 Digital input Disable


; ***** ANALOG_COMPARATOR ************
; ADCSRB - ADC Control and Status Register B
.equ	ACME	= 6	; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIC	= 2	; Analog Comparator Input Capture Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACBG	= 6	; Analog Comparator Bandgap Select
.equ	ACD	= 7	; Analog Comparator Disable

; DIDR1 - 
.equ	AIN0D	= 0	; AIN0 Digital Input Disable
.equ	AIN1D	= 1	; AIN1 Digital Input Disable


; ***** CAN **************************
; CANGCON - CAN General Control Register
.equ	SWRES	= 0	; Software Reset Request
.equ	ENASTB	= 1	; Enable / Standby
.equ	TEST	= 2	; Test Mode
.equ	LISTEN	= 3	; Listening Mode
.equ	SYNTTC	= 4	; Synchronization of TTC
.equ	TTC	= 5	; Time Trigger Communication
.equ	OVRQ	= 6	; Overload Frame Request
.equ	ABRQ	= 7	; Abort Request

; CANGSTA - CAN General Status Register
.equ	ERRP	= 0	; Error Passive Mode
.equ	BOFF	= 1	; Bus Off Mode
.equ	ENFG	= 2	; Enable Flag
.equ	RXBSY	= 3	; Receiver Busy
.equ	TXBSY	= 4	; Transmitter Busy
.equ	OVRG	= 6	; Overload Frame Flag

; CANGIT - CAN General Interrupt Register
.equ	AERG	= 0	; Ackknowledgement Error General
.equ	FERG	= 1	; Form Error General
.equ	CERG	= 2	; CRC Error General
.equ	SERG	= 3	; Stuff Error General
.equ	BXOK	= 4	; Burst Receive Interrupt
.equ	OVRTIM	= 5	; Overrun CAN Timer
.equ	BOFFIT	= 6	; Bus Off Interrupt Flag
.equ	CANIT	= 7	; General Interrupt Flag

; CANGIE - CAN General Interrupt Enable Register
.equ	ENOVRT	= 0	; Enable CAN Timer Overrun Interrupt
.equ	ENERG	= 1	; Enable General Error Interrupt
.equ	ENBX	= 2	; Enable Burst Receive Interrupt
.equ	ENERR	= 3	; Enable MOb Error Interrupt
.equ	ENTX	= 4	; Enable Transmitt Interrupt
.equ	ENRX	= 5	; Enable Receive Interrupt
.equ	ENBOFF	= 6	; Enable Bus Off INterrupt
.equ	ENIT	= 7	; Enable all Interrupts

; CANEN2 - Enable MOb Register
.equ	ENMOB0	= 0	; 
.equ	ENMOB1	= 1	; 
.equ	ENMOB2	= 2	; 
.equ	ENMOB3	= 3	; 
.equ	ENMOB4	= 4	; 
.equ	ENMOB5	= 5	; 
.equ	ENMOB6	= 6	; 
.equ	ENMOB7	= 7	; 

; CANEN1 - Enable MOb Register
.equ	ENMOB8	= 0	; 
.equ	ENMOB9	= 1	; 
.equ	ENMOB10	= 2	; 
.equ	ENMOB11	= 3	; 
.equ	ENMOB12	= 4	; 
.equ	ENMOB13	= 5	; 
.equ	ENMOB14	= 6	; 

; CANIE2 - Enable Interrupt MOb Register
.equ	IEMOB0	= 0	; 
.equ	IEMOB1	= 1	; 
.equ	IEMOB2	= 2	; 
.equ	IEMOB3	= 3	; 
.equ	IEMOB4	= 4	; 
.equ	IEMOB5	= 5	; 
.equ	IEMOB6	= 6	; 
.equ	IEMOB7	= 7	; 

; CANIE1 - Enable Interrupt MOb Register
.equ	IEMOB8	= 0	; 
.equ	IEMOB9	= 1	; 
.equ	IEMOB10	= 2	; 
.equ	IEMOB11	= 3	; 
.equ	IEMOB12	= 4	; 
.equ	IEMOB13	= 5	; 
.equ	IEMOB14	= 6	; 

; CANSIT2 - CAN Status Interrupt MOb Register
.equ	SIT0	= 0	; 
.equ	SIT1	= 1	; 
.equ	SIT2	= 2	; 
.equ	SIT3	= 3	; 
.equ	SIT4	= 4	; 
.equ	SIT5	= 5	; 
.equ	SIT6	= 6	; 
.equ	SIT7	= 7	; 

; CANSIT1 - CAN Status Interrupt MOb Register
.equ	SIT8	= 0	; 
.equ	SIT9	= 1	; 
.equ	SIT10	= 2	; 
.equ	SIT11	= 3	; 
.equ	SIT12	= 4	; 
.equ	SIT13	= 5	; 
.equ	SIT14	= 6	; 

; CANBT1 - Bit Timing Register 1
.equ	BRP0	= 1	; Baud Rate Prescaler bit 0
.equ	BRP1	= 2	; Baud Rate Prescaler bit 1
.equ	BRP2	= 3	; Baud Rate Prescaler bit 2
.equ	BRP3	= 4	; Baud Rate Prescaler bit 3
.equ	BRP4	= 5	; Baud Rate Prescaler bit 4
.equ	BRP5	= 6	; Baud Rate Prescaler bit 5

; CANBT2 - Bit Timing Register 2
.equ	PRS0	= 1	; Propagation Time Segment
.equ	PRS1	= 2	; Propagation Time Segment
.equ	PRS2	= 3	; Propagation Time Segment
.equ	SJW0	= 5	; Re-Sync Jump Width
.equ	SJW1	= 6	; Re-Sync Jump Width

; CANBT3 - Bit Timing Register 3
.equ	SMP	= 0	; Sample Type
.equ	PHS10	= 1	; Phase Segment 1
.equ	PHS11	= 2	; Phase Segment 1
.equ	PHS12	= 3	; Phase Segment 1
.equ	PHS20	= 4	; Phase Segment 2
.equ	PHS21	= 5	; Phase Segment 2
.equ	PHS22	= 6	; Phase Segment 2

; CANTCON - Timer Control Register

; CANTIML - Timer Register Low

; CANTIMH - Timer Register High

; CANTTCL - TTC Timer Register Low

; CANTTCH - TTC Timer Register High

; CANTEC - Transmit Error Counter Register

; CANREC - Receive Error Counter Register

; CANHPMOB - Highest Priority MOb Register
.equ	CGP0	= 0	; 
.equ	CGP	= CGP0	; For compatibility
.equ	CGP1	= 1	; 
.equ	CGP2	= 2	; 
.equ	CGP3	= 3	; 
.equ	HPMOB0	= 4	; 
.equ	HPMOB1	= 5	; 
.equ	HPMOB2	= 6	; 
.equ	HPMOB3	= 7	; 

; CANPAGE - Page MOb Register
.equ	INDX0	= 0	; Data Buffer Index Bit 0
.equ	INDX1	= 1	; Data Buffer Index Bit 1
.equ	INDX2	= 2	; Data Buffer Index Bit 2
.equ	AINC	= 3	; MOb Data Buffer Auto Increment
.equ	MOBNB0	= 4	; MOb Number Bit 0
.equ	MOBNB1	= 5	; MOb Number Bit 1
.equ	MOBNB2	= 6	; MOb Number Bit 2
.equ	MOBNB3	= 7	; MOb Number Bit 3

; CANSTMOB - MOb Status Register
.equ	AERR	= 0	; Ackknowledgement Error
.equ	FERR	= 1	; Form Error
.equ	CERR	= 2	; CRC Error
.equ	SERR	= 3	; Stuff Error
.equ	BERR	= 4	; Bit Error
.equ	RXOK	= 5	; Receive OK
.equ	TXOK	= 6	; Transmit OK
.equ	DLCW	= 7	; Data Length Code Warning

; CANCDMOB - MOb Control and DLC Register
.equ	DLC0	= 0	; Data Length Code Bit 0
.equ	DLC1	= 1	; Data Length Code Bit 1
.equ	DLC2	= 2	; Data Length Code Bit 2
.equ	DLC3	= 3	; Data Length Code Bit 3
.equ	IDE	= 4	; Identifier Extension
.equ	RPLV	= 5	; Reply Valid
.equ	CONMOB0	= 6	; MOb Config Bit 0
.equ	CONMOB1	= 7	; MOb Config Bit 1

; CANIDT4 - Identifier Tag Register 4
.equ	RB0TAG	= 0	; 
.equ	RB1TAG	= 1	; 
.equ	RTRTAG	= 2	; 
.equ	IDT0	= 3	; 
.equ	IDT1	= 4	; 
.equ	IDT2	= 5	; 
.equ	IDT3	= 6	; 
.equ	IDT4	= 7	; 

; CANIDT3 - Identifier Tag Register 3
.equ	IDT5	= 0	; 
.equ	IDT6	= 1	; 
.equ	IDT7	= 2	; 
.equ	IDT8	= 3	; 
.equ	IDT9	= 4	; 
.equ	IDT10	= 5	; 
.equ	IDT11	= 6	; 
.equ	IDT12	= 7	; 

; CANIDT2 - Identifier Tag Register 2
.equ	IDT13	= 0	; 
.equ	IDT14	= 1	; 
.equ	IDT15	= 2	; 
.equ	IDT16	= 3	; 
.equ	IDT17	= 4	; 
.equ	IDT18	= 5	; 
.equ	IDT19	= 6	; 
.equ	IDT20	= 7	; 

; CANIDT1 - Identifier Tag Register 1
.equ	IDT21	= 0	; 
.equ	IDT22	= 1	; 
.equ	IDT23	= 2	; 
.equ	IDT24	= 3	; 
.equ	IDT25	= 4	; 
.equ	IDT26	= 5	; 
.equ	IDT27	= 6	; 
.equ	IDT28	= 7	; 

; CANIDM4 - Identifier Mask Register 4
.equ	IDEMSK	= 0	; 
.equ	RTRMSK	= 2	; 
.equ	IDMSK0	= 3	; 
.equ	IDMSK1	= 4	; 
.equ	IDMSK2	= 5	; 
.equ	IDMSK3	= 6	; 
.equ	IDMSK4	= 7	; 

; CANIDM3 - Identifier Mask Register 3
.equ	IDMSK5	= 0	; 
.equ	IDMSK6	= 1	; 
.equ	IDMSK7	= 2	; 
.equ	IDMSK8	= 3	; 
.equ	IDMSK9	= 4	; 
.equ	IDMSK10	= 5	; 
.equ	IDMSK11	= 6	; 
.equ	IDMSK12	= 7	; 

; CANIDM2 - Identifier Mask Register 2
.equ	IDMSK13	= 0	; 
.equ	IDMSK14	= 1	; 
.equ	IDMSK15	= 2	; 
.equ	IDMSK16	= 3	; 
.equ	IDMSK17	= 4	; 
.equ	IDMSK18	= 5	; 
.equ	IDMSK19	= 6	; 
.equ	IDMSK20	= 7	; 

; CANIDM1 - Identifier Mask Register 1
.equ	IDMSK21	= 0	; 
.equ	IDMSK22	= 1	; 
.equ	IDMSK23	= 2	; 
.equ	IDMSK24	= 3	; 
.equ	IDMSK25	= 4	; 
.equ	IDMSK26	= 5	; 
.equ	IDMSK27	= 6	; 
.equ	IDMSK28	= 7	; 

; CANSTML - Time Stamp Register Low

; CANSTMH - Time Stamp Register High

; CANMSG - Message Data Register



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lock bit
.equ	LB2	= 1	; Lock bit
.equ	BLB01	= 2	; Boot Lock bit
.equ	BLB02	= 3	; Boot Lock bit
.equ	BLB11	= 4	; Boot lock bit
.equ	BLB12	= 5	; Boot lock bit


; ***** FUSES ************************************************************
; LOW fuse bits
.equ	CKSEL0	= 0	; Select Clock Source
.equ	CKSEL1	= 1	; Select Clock Source
.equ	CKSEL2	= 2	; Select Clock Source
.equ	CKSEL3	= 3	; Select Clock Source
.equ	SUT0	= 4	; Select start-up time
.equ	SUT1	= 5	; Select start-up time
.equ	CKOUT	= 6	; Oscillator output option
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BOOTRST	= 0	; Select Reset Vector
.equ	BOOTSZ0	= 1	; Select Boot Size
.equ	BOOTSZ1	= 2	; Select Boot Size
.equ	EESAVE	= 3	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 4	; Watchdog timer always on
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	JTAGEN	= 6	; Enable JTAG
.equ	OCDEN	= 7	; Enable OCD

; EXTENDED fuse bits
.equ	TA0SEL	= 0	; (Reserved to factory tests)
.equ	BODLEVEL0	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 2	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 3	; Brown out detector trigger level



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x7fff	; Note: Word address
.equ	IOEND	= 0x00ff
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 4096
.equ	RAMEND	= 0x10ff
.equ	XRAMEND	= 0xffff
.equ	E2END	= 0x07ff
.equ	EEPROMEND	= 0x07ff
.equ	EEADRBITS	= 11
#pragma AVRPART MEMORY PROG_FLASH 65536
#pragma AVRPART MEMORY EEPROM 2048
#pragma AVRPART MEMORY INT_SRAM SIZE 4096
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0x7000
.equ	NRWW_STOP_ADDR	= 0x7fff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x6fff
.equ	PAGESIZE	= 128
.equ	FIRSTBOOTSTART	= 0x7e00
.equ	SECONDBOOTSTART	= 0x7c00
.equ	THIRDBOOTSTART	= 0x7800
.equ	FOURTHBOOTSTART	= 0x7000
.equ	SMALLBOOTSTART	= FIRSTBOOTSTART
.equ	LARGEBOOTSTART	= FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0002	; External Interrupt Request 0
.equ	INT1addr	= 0x0004	; External Interrupt Request 1
.equ	INT2addr	= 0x0006	; External Interrupt Request 2
.equ	INT3addr	= 0x0008	; External Interrupt Request 3
.equ	INT4addr	= 0x000a	; External Interrupt Request 4
.equ	INT5addr	= 0x000c	; External Interrupt Request 5
.equ	INT6addr	= 0x000e	; External Interrupt Request 6
.equ	INT7addr	= 0x0010	; External Interrupt Request 7
.equ	OC2addr	= 0x0012	; Timer/Counter2 Compare Match
.equ	OVF2addr	= 0x0014	; Timer/Counter2 Overflow
.equ	ICP1addr	= 0x0016	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x0018	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x001a	; Timer/Counter Compare Match B
.equ	OC1Caddr	= 0x001c	; Timer/Counter1 Compare Match C
.equ	OVF1addr	= 0x001e	; Timer/Counter1 Overflow
.equ	OC0addr	= 0x0020	; Timer/Counter0 Compare Match
.equ	OVF0addr	= 0x0022	; Timer/Counter0 Overflow
.equ	CANITaddr	= 0x0024	; CAN Transfer Complete or Error
.equ	OVRITaddr	= 0x0026	; CAN Timer Overrun
.equ	SPIaddr	= 0x0028	; SPI Serial Transfer Complete
.equ	URXC0addr	= 0x002a	; USART0, Rx Complete
.equ	UDRE0addr	= 0x002c	; USART0 Data Register Empty
.equ	UTXC0addr	= 0x002e	; USART0, Tx Complete
.equ	ACIaddr	= 0x0030	; Analog Comparator
.equ	ADCCaddr	= 0x0032	; ADC Conversion Complete
.equ	ERDYaddr	= 0x0034	; EEPROM Ready
.equ	ICP3addr	= 0x0036	; Timer/Counter3 Capture Event
.equ	OC3Aaddr	= 0x0038	; Timer/Counter3 Compare Match A
.equ	OC3Baddr	= 0x003a	; Timer/Counter3 Compare Match B
.equ	OC3Caddr	= 0x003c	; Timer/Counter3 Compare Match C
.equ	OVF3addr	= 0x003e	; Timer/Counter3 Overflow
.equ	URXC1addr	= 0x0040	; USART1, Rx Complete
.equ	UDRE1addr	= 0x0042	; USART1, Data Register Empty
.equ	UTXC1addr	= 0x0044	; USART1, Tx Complete
.equ	TWIaddr	= 0x0046	; 2-wire Serial Interface
.equ	SPMRaddr	= 0x0048	; Store Program Memory Read

.equ	INT_VECTORS_SIZE	= 74	; size in words

#endif  /* _CAN64DEF_INC_ */

; ***** END OF FILE ******************************************************
