;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATmega16M1.xml **********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m16M1def.inc"
;* Title             : Register/Bit Definitions for the ATmega16M1
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega16M1
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

#ifndef _M16M1DEF_INC_
#define _M16M1DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATmega16M1
#pragma AVRPART ADMIN PART_NAME ATmega16M1
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x84

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
.equ	LINDAT	= 0xd2	; MEMORY MAPPED
.equ	LINSEL	= 0xd1	; MEMORY MAPPED
.equ	LINIDR	= 0xd0	; MEMORY MAPPED
.equ	LINDLR	= 0xcf	; MEMORY MAPPED
.equ	LINBRRH	= 0xce	; MEMORY MAPPED
.equ	LINBRRL	= 0xcd	; MEMORY MAPPED
.equ	LINBTR	= 0xcc	; MEMORY MAPPED
.equ	LINERR	= 0xcb	; MEMORY MAPPED
.equ	LINENIR	= 0xca	; MEMORY MAPPED
.equ	LINSIR	= 0xc9	; MEMORY MAPPED
.equ	LINCR	= 0xc8	; MEMORY MAPPED
.equ	PIFR	= 0xbc	; MEMORY MAPPED
.equ	PIM	= 0xbb	; MEMORY MAPPED
.equ	PMIC2	= 0xba	; MEMORY MAPPED
.equ	PMIC1	= 0xb9	; MEMORY MAPPED
.equ	PMIC0	= 0xb8	; MEMORY MAPPED
.equ	PCTL	= 0xb7	; MEMORY MAPPED
.equ	POC	= 0xb6	; MEMORY MAPPED
.equ	PCNF	= 0xb5	; MEMORY MAPPED
.equ	PSYNC	= 0xb4	; MEMORY MAPPED
.equ	POCR_RBL	= 0xb2	; MEMORY MAPPED
.equ	POCR_RBH	= 0xb3	; MEMORY MAPPED
.equ	POCR2SBL	= 0xb0	; MEMORY MAPPED
.equ	POCR2SBH	= 0xb1	; MEMORY MAPPED
.equ	POCR2RAL	= 0xae	; MEMORY MAPPED
.equ	POCR2RAH	= 0xaf	; MEMORY MAPPED
.equ	POCR2SAL	= 0xac	; MEMORY MAPPED
.equ	POCR2SAH	= 0xad	; MEMORY MAPPED
.equ	POCR1SBL	= 0xaa	; MEMORY MAPPED
.equ	POCR1SBH	= 0xab	; MEMORY MAPPED
.equ	POCR1RAL	= 0xa8	; MEMORY MAPPED
.equ	POCR1RAH	= 0xa9	; MEMORY MAPPED
.equ	POCR1SAL	= 0xa6	; MEMORY MAPPED
.equ	POCR1SAH	= 0xa7	; MEMORY MAPPED
.equ	POCR0SBL	= 0xa4	; MEMORY MAPPED
.equ	POCR0SBH	= 0xa5	; MEMORY MAPPED
.equ	POCR0RAL	= 0xa2	; MEMORY MAPPED
.equ	POCR0RAH	= 0xa3	; MEMORY MAPPED
.equ	POCR0SAL	= 0xa0	; MEMORY MAPPED
.equ	POCR0SAH	= 0xa1	; MEMORY MAPPED
.equ	AC3CON	= 0x97	; MEMORY MAPPED
.equ	AC2CON	= 0x96	; MEMORY MAPPED
.equ	AC1CON	= 0x95	; MEMORY MAPPED
.equ	AC0CON	= 0x94	; MEMORY MAPPED
.equ	DACH	= 0x92	; MEMORY MAPPED
.equ	DACL	= 0x91	; MEMORY MAPPED
.equ	DACON	= 0x90	; MEMORY MAPPED
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
.equ	AMP2CSR	= 0x77	; MEMORY MAPPED
.equ	AMP1CSR	= 0x76	; MEMORY MAPPED
.equ	AMP0CSR	= 0x75	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK3	= 0x6d	; MEMORY MAPPED
.equ	PCMSK2	= 0x6c	; MEMORY MAPPED
.equ	PCMSK1	= 0x6b	; MEMORY MAPPED
.equ	PCMSK0	= 0x6a	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	OSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR	= 0x64	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	DWDR	= 0x31
.equ	ACSR	= 0x30
.equ	SPDR	= 0x2e
.equ	SPSR	= 0x2d
.equ	SPCR	= 0x2c
.equ	PLLCSR	= 0x29
.equ	OCR0B	= 0x28
.equ	OCR0A	= 0x27
.equ	TCNT0	= 0x26
.equ	TCCR0B	= 0x25
.equ	TCCR0A	= 0x24
.equ	GTCCR	= 0x23
.equ	EEARL	= 0x21
.equ	EEARH	= 0x22
.equ	EEDR	= 0x20
.equ	EECR	= 0x1f
.equ	GPIOR0	= 0x1e
.equ	EIMSK	= 0x1d
.equ	EIFR	= 0x1c
.equ	PCIFR	= 0x1b
.equ	GPIOR2	= 0x1a
.equ	GPIOR1	= 0x19
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
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


; ***** BIT DEFINITIONS **************************************************

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
.equ	OVFG	= 6	; Overload Frame Flag

; CANGIT - CAN General Interrupt Register Flags
.equ	AERG	= 0	; Ackknowledgement Error General Flag
.equ	FERG	= 1	; Form Error General Flag
.equ	CERG	= 2	; CRC Error General Flag
.equ	SERG	= 3	; Stuff Error General Flag
.equ	BXOK	= 4	; Burst Receive Interrupt Flag
.equ	OVRTIM	= 5	; Overrun CAN Timer Flag
.equ	BOFFIT	= 6	; Bus Off Interrupt Flag
.equ	CANIT	= 7	; General Interrupt Flag

; CANGIE - CAN General Interrupt Enable Register
.equ	ENOVRT	= 0	; Enable CAN Timer Overrun Interrupt
.equ	ENERG	= 1	; Enable General Error Interrupt
.equ	ENBX	= 2	; Enable Burst Receive Interrupt
.equ	ENERR	= 3	; Enable MOb Error Interrupt
.equ	ENTX	= 4	; Enable Transmitt Interrupt
.equ	ENRX	= 5	; Enable Receive Interrupt
.equ	ENBOFF	= 6	; Enable Bus Off Interrupt
.equ	ENIT	= 7	; Enable all Interrupts

; CANEN2 - Enable MOb Register 2
.equ	ENMOB0	= 0	; Enable MOb 0
.equ	ENMOB1	= 1	; Enable MOb 1
.equ	ENMOB2	= 2	; Enable MOb 2
.equ	ENMOB3	= 3	; Enable MOb 3
.equ	ENMOB4	= 4	; Enable MOb 4
.equ	ENMOB5	= 5	; Enable MOb 5

; CANEN1 - Enable MOb Register 1(empty)

; CANIE2 - Enable Interrupt MOb Register 2
.equ	IEMOB0	= 0	; Interrupt Enable  MOb 0
.equ	IEMOB1	= 1	; Interrupt Enable  MOb 1
.equ	IEMOB2	= 2	; Interrupt Enable  MOb 2
.equ	IEMOB3	= 3	; Interrupt Enable  MOb 3
.equ	IEMOB4	= 4	; Interrupt Enable  MOb 4
.equ	IEMOB5	= 5	; Interrupt Enable  MOb 5

; CANIE1 - Enable Interrupt MOb Register 1 (empty)

; CANSIT2 - CAN Status Interrupt MOb Register 2
.equ	SIT0	= 0	; Status of Interrupt MOb 0
.equ	SIT1	= 1	; Status of Interrupt MOb 1
.equ	SIT2	= 2	; Status of Interrupt MOb 2
.equ	SIT3	= 3	; Status of Interrupt MOb 3
.equ	SIT4	= 4	; Status of Interrupt MOb 4
.equ	SIT5	= 5	; Status of Interrupt MOb 5

; CANSIT1 - CAN Status Interrupt MOb Register 1 (empty)

; CANBT1 - CAN Bit Timing Register 1
.equ	BRP0	= 1	; Baud Rate Prescaler bit 0
.equ	BRP1	= 2	; Baud Rate Prescaler bit 1
.equ	BRP2	= 3	; Baud Rate Prescaler bit 2
.equ	BRP3	= 4	; Baud Rate Prescaler bit 3
.equ	BRP4	= 5	; Baud Rate Prescaler bit 4
.equ	BRP5	= 6	; Baud Rate Prescaler bit 5

; CANBT2 - CAN Bit Timing Register 2
.equ	PRS0	= 1	; Propagation Time Segment bit 0
.equ	PRS1	= 2	; Propagation Time Segment bit 1
.equ	PRS2	= 3	; Propagation Time Segment bit 2
.equ	SJW0	= 5	; Re-Sync Jump Width bit 0
.equ	SJW1	= 6	; Re-Sync Jump Width bit 1

; CANBT3 - CAN Bit Timing Register 3
.equ	SMP	= 0	; Sample Type
.equ	PHS10	= 1	; Phase Segment 1 bit 0
.equ	PHS11	= 2	; Phase Segment 1 bit 1
.equ	PHS12	= 3	; Phase Segment 1 bit 2
.equ	PHS20	= 4	; Phase Segment 2 bit 0
.equ	PHS21	= 5	; Phase Segment 2 bit 1
.equ	PHS22	= 6	; Phase Segment 2 bit 2

; CANTCON - Timer Control Register
.equ	TPRSC0	= 0	; CAN Timer Prescaler bit 0
.equ	TPRSC1	= 1	; CAN Timer Prescaler bit 1
.equ	TPRSC2	= 2	; CAN Timer Prescaler bit 2
.equ	TPRSC3	= 3	; CAN Timer Prescaler bit 3
.equ	TPRSC4	= 4	; CAN Timer Prescaler bit 4
.equ	TPRSC5	= 5	; CAN Timer Prescaler bit 5
.equ	TPRSC6	= 6	; CAN Timer Prescaler bit 6
.equ	TPRSC7	= 7	; CAN Timer Prescaler bit 7

; CANTIML - Timer Register Low
.equ	CANTIM0	= 0	; CAN Timer Count bit 0
.equ	CANTIM1	= 1	; CAN Timer Count bit 1
.equ	CANTIM2	= 2	; CAN Timer Count bit 2
.equ	CANTIM3	= 3	; CAN Timer Count bit 3
.equ	CANTIM4	= 4	; CAN Timer Count bit 4
.equ	CANTIM5	= 5	; CAN Timer Count bit 5
.equ	CANTIM6	= 6	; CAN Timer Count bit 6
.equ	CANTIM7	= 7	; CAN Timer Count bit 7

; CANTIMH - Timer Register High
.equ	CANTIM8	= 0	; CAN Timer Count bit 8
.equ	CANTIM9	= 1	; CAN Timer Count bit 9
.equ	CANTIM10	= 2	; CAN Timer Count bit 10
.equ	CANTIM11	= 3	; CAN Timer Count bit 11
.equ	CANTIM12	= 4	; CAN Timer Count bit 12
.equ	CANTIM13	= 5	; CAN Timer Count bit 13
.equ	CANTIM14	= 6	; CAN Timer Count bit 14
.equ	CANTIM15	= 7	; CAN Timer Count bit 15

; CANTTCL - TTC Timer Register Low
.equ	TIMTCC0	= 0	; TTC Timer Count bit 0
.equ	TIMTCC1	= 1	; TTC Timer Count bit 1
.equ	TIMTCC2	= 2	; TTC Timer Count bit 2
.equ	TIMTCC3	= 3	; TTC Timer Count bit 3
.equ	TIMTCC4	= 4	; TTC Timer Count bit 4
.equ	TIMTCC5	= 5	; TTC Timer Count bit 5
.equ	TIMTCC6	= 6	; TTC Timer Count bit 6
.equ	TIMTCC7	= 7	; TTC Timer Count bit 7

; CANTTCH - TTC Timer Register High
.equ	TIMTCC8	= 0	; TTC Timer Count bit 8
.equ	TIMTCC9	= 1	; TTC Timer Count bit 9
.equ	TIMTCC10	= 2	; TTC Timer Count bit 10
.equ	TIMTCC11	= 3	; TTC Timer Count bit 11
.equ	TIMTCC12	= 4	; TTC Timer Count bit 12
.equ	TIMTCC13	= 5	; TTC Timer Count bit 13
.equ	TIMTCC14	= 6	; TTC Timer Count bit 14
.equ	TIMTCC15	= 7	; TTC Timer Count bit 15

; CANTEC - Transmit Error Counter Register
.equ	TEC0	= 0	; Transmit Error Count bit 0
.equ	TEC1	= 1	; Transmit Error Count bit 1
.equ	TEC2	= 2	; Transmit Error Count bit 2
.equ	TEC3	= 3	; Transmit Error Count bit 3
.equ	TEC4	= 4	; Transmit Error Count bit 4
.equ	TEC5	= 5	; Transmit Error Count bit 5
.equ	TEC6	= 6	; Transmit Error Count bit 6
.equ	TEC7	= 7	; Transmit Error Count bit 7

; CANREC - Receive Error Counter Register
.equ	REC0	= 0	; Receive Error Count bit 0
.equ	REC1	= 1	; Receive Error Count bit 1
.equ	REC2	= 2	; Receive Error Count bit 2
.equ	REC3	= 3	; Receive Error Count bit 3
.equ	REC4	= 4	; Receive Error Count bit 4
.equ	REC5	= 5	; Receive Error Count bit 5
.equ	REC6	= 6	; Receive Error Count bit 6
.equ	REC7	= 7	; Receive Error Count bit 7

; CANHPMOB - Highest Priority MOb Register
.equ	CGP0	= 0	; CAN General Purpose bit 0
.equ	CGP1	= 1	; CAN General Purpose bit 1
.equ	CGP2	= 2	; CAN General Purpose bit 2
.equ	CGP3	= 3	; CAN General Purpose bit 3
.equ	HPMOB0	= 4	; Highest Priority MOb Number bit 0
.equ	HPMOB1	= 5	; Highest Priority MOb Number bit 1
.equ	HPMOB2	= 6	; Highest Priority MOb Number bit 2
.equ	HPMOB3	= 7	; Highest Priority MOb Number bit 3

; CANPAGE - Page MOb Register
.equ	INDX0	= 0	; Data Buffer Index bit 0
.equ	INDX1	= 1	; Data Buffer Index bit 1
.equ	INDX2	= 2	; Data Buffer Index bit 2
.equ	AINC	= 3	; MOb Data Buffer Auto Increment (Active Low)
.equ	MOBNB0	= 4	; MOb Number bit 0
.equ	MOBNB1	= 5	; MOb Number bit 1
.equ	MOBNB2	= 6	; MOb Number bit 2
.equ	MOBNB3	= 7	; MOb Number bit 3

; CANSTMOB - MOb Status Register
.equ	AERR	= 0	; Ackknowledgement Error on MOb
.equ	FERR	= 1	; Form Error on MOb
.equ	CERR	= 2	; CRC Error on MOb
.equ	SERR	= 3	; Stuff Error on MOb
.equ	BERR	= 4	; Bit Error on MOb
.equ	RXOK	= 5	; Receive OK on MOb
.equ	TXOK	= 6	; Transmit OK on MOb
.equ	DLCW	= 7	; Data Length Code Warning on MOb

; CANCDMOB - MOb Control and DLC Register
.equ	DLC0	= 0	; Data Length Code bit 0
.equ	DLC1	= 1	; Data Length Code bit 1
.equ	DLC2	= 2	; Data Length Code bit 2
.equ	DLC3	= 3	; Data Length Code bit 3
.equ	IDE	= 4	; Identifier Extension
.equ	RPLV	= 5	; Reply Valid
.equ	CONMOB0	= 6	; MOb Config bit 0
.equ	CONMOB1	= 7	; MOb Config bit 1

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
.equ	TIMSTM0	= 0	; CAN Timer Count bit 0
.equ	TIMSTM1	= 1	; CAN Timer Count bit 1
.equ	TIMSTM2	= 2	; CAN Timer Count bit 2
.equ	TIMSTM3	= 3	; CAN Timer Count bit 3
.equ	TIMSTM4	= 4	; CAN Timer Count bit 4
.equ	TIMSTM5	= 5	; CAN Timer Count bit 5
.equ	TIMSTM6	= 6	; CAN Timer Count bit 6
.equ	TIMSTM7	= 7	; CAN Timer Count bit 7

; CANSTMH - Time Stamp Register High
.equ	TIMSTM8	= 0	; CAN Timer Count bit 0
.equ	TIMSTM9	= 1	; CAN Timer Count bit 9
.equ	TIMSTM10	= 2	; CAN Timer Count bit 10
.equ	TIMSTM11	= 3	; CAN Timer Count bit 11
.equ	TIMSTM12	= 4	; CAN Timer Count bit 12
.equ	TIMSTM13	= 5	; CAN Timer Count bit 13
.equ	TIMSTM14	= 6	; CAN Timer Count bit 14
.equ	TIMSTM15	= 7	; CAN Timer Count bit 15

; CANMSG - Message Data Register
.equ	MSG0	= 0	; Message Data bit 0
.equ	MSG1	= 1	; Message Data bit 1
.equ	MSG2	= 2	; Message Data bit 2
.equ	MSG3	= 3	; Message Data bit 3
.equ	MSG4	= 4	; Message Data bit 4
.equ	MSG5	= 5	; Message Data bit 5
.equ	MSG6	= 6	; Message Data bit 6
.equ	MSG7	= 7	; Message Data bit 7


; ***** ANALOG_COMPARATOR ************
; AC0CON - Analog Comparator 0 Control Register
.equ	AC0M0	= 0	; Analog Comparator 0 Multiplexer Register
.equ	AC0M1	= 1	; Analog Comparator 0 Multiplexer Regsiter
.equ	AC0M2	= 2	; Analog Comparator 0 Multiplexer Register
.equ	ACCKSEL	= 3	; Analog Comparator Clock Select
.equ	AC0IS0	= 4	; Analog Comparator 0 Interrupt Select Bit 0
.equ	AC0IS1	= 5	; Analog Comparator 0  Interrupt Select Bit 1
.equ	AC0IE	= 6	; Analog Comparator 0 Interrupt Enable Bit
.equ	AC0EN	= 7	; Analog Comparator 0 Enable Bit

; AC1CON - Analog Comparator 1 Control Register
.equ	AC1M0	= 0	; Analog Comparator 1 Multiplexer Register
.equ	AC1M1	= 1	; Analog Comparator 1 Multiplexer Regsiter
.equ	AC1M2	= 2	; Analog Comparator 1 Multiplexer Register
.equ	AC1ICE	= 3	; Analog Comparator 1 Interrupt Capture Enable Bit
.equ	AC1IS0	= 4	; Analog Comparator 1 Interrupt Select Bit
.equ	AC1IS1	= 5	; Analog Comparator 1  Interrupt Select Bit
.equ	AC1IE	= 6	; Analog Comparator 1 Interrupt Enable Bit
.equ	AC1EN	= 7	; Analog Comparator 1 Enable Bit

; AC2CON - Analog Comparator 2 Control Register
.equ	AC2M0	= 0	; Analog Comparator 2 Multiplexer Register
.equ	AC2M1	= 1	; Analog Comparator 2 Multiplexer Regsiter
.equ	AC2M2	= 2	; Analog Comparator 2 Multiplexer Register
.equ	AC2IS0	= 4	; Analog Comparator 2 Interrupt Select Bit
.equ	AC2IS1	= 5	; Analog Comparator 2  Interrupt Select Bit
.equ	AC2IE	= 6	; Analog Comparator 2 Interrupt Enable Bit
.equ	AC2EN	= 7	; Analog Comparator 2 Enable Bit

; AC3CON - Analog Comparator 3 Control Register
.equ	AC3M0	= 0	; Analog Comparator 3 Multiplexer Register
.equ	AC3M1	= 1	; Analog Comparator 3 Multiplexer Regsiter
.equ	AC3M2	= 2	; Analog Comparator 3 Multiplexer Register
.equ	AC3IS0	= 4	; Analog Comparator 3 Interrupt Select Bit
.equ	AC3IS1	= 5	; Analog Comparator 3  Interrupt Select Bit
.equ	AC3IE	= 6	; Analog Comparator 3 Interrupt Enable Bit
.equ	AC3EN	= 7	; Analog Comparator 3 Enable Bit

; ACSR - Analog Comparator Status Register
.equ	AC0O	= 0	; Analog Comparator 0 Output Bit
.equ	AC1O	= 1	; Analog Comparator 1 Output Bit
.equ	AC2O	= 2	; Analog Comparator 2 Output Bit
.equ	AC3O	= 3	; Analog Comparator 3 Output Bit
.equ	AC0IF	= 4	; Analog Comparator 0 Interrupt Flag Bit
.equ	AC1IF	= 5	; Analog Comparator 1  Interrupt Flag Bit
.equ	AC2IF	= 6	; Analog Comparator 2 Interrupt Flag Bit
.equ	AC3IF	= 7	; Analog Comparator 3 Interrupt Flag Bit


; ***** DA_CONVERTER *****************
; DACH - DAC Data Register High Byte
.equ	DACH0	= 0	; DAC Data Register High Byte Bit 0
.equ	DACH1	= 1	; DAC Data Register High Byte Bit 1
.equ	DACH2	= 2	; DAC Data Register High Byte Bit 2
.equ	DACH3	= 3	; DAC Data Register High Byte Bit 3
.equ	DACH4	= 4	; DAC Data Register High Byte Bit 4
.equ	DACH5	= 5	; DAC Data Register High Byte Bit 5
.equ	DACH6	= 6	; DAC Data Register High Byte Bit 6
.equ	DACH7	= 7	; DAC Data Register High Byte Bit 7

; DACL - DAC Data Register Low Byte
.equ	DACL0	= 0	; DAC Data Register Low Byte Bit 0
.equ	DACL1	= 1	; DAC Data Register Low Byte Bit 1
.equ	DACL2	= 2	; DAC Data Register Low Byte Bit 2
.equ	DACL3	= 3	; DAC Data Register Low Byte Bit 3
.equ	DACL4	= 4	; DAC Data Register Low Byte Bit 4
.equ	DACL5	= 5	; DAC Data Register Low Byte Bit 5
.equ	DACL6	= 6	; DAC Data Register Low Byte Bit 6
.equ	DACL7	= 7	; DAC Data Register Low Byte Bit 7

; DACON - DAC Control Register
.equ	DAEN	= 0	; DAC Enable Bit
.equ	DALA	= 2	; DAC Left Adjust
.equ	DATS0	= 4	; DAC Trigger Selection Bit 0
.equ	DATS1	= 5	; DAC Trigger Selection Bit 1
.equ	DATS2	= 6	; DAC Trigger Selection Bit 2
.equ	DAATE	= 7	; DAC Auto Trigger Enable Bit


; ***** CPU **************************
; SPMCSR - Store Program Memory Control Register
.equ	SPMCR	= SPMCSR	; For compatibility
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	BLBSET	= 3	; Boot Lock Bit Set
.equ	RWWSRE	= 4	; Read While Write section read enable
.equ	ASRE	= RWWSRE	; For compatibility
.equ	SIGRD	= 5	; Signature Row Read
.equ	RWWSB	= 6	; Read While Write Section Busy
.equ	ASB	= RWWSB	; For compatibility
.equ	SPMIE	= 7	; SPM Interrupt Enable

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
.equ	SPIPS	= 7	; SPI Pin Select

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag

; OSCCAL - Oscillator Calibration Value
.equ	CAL0	= 0	; Oscillator Calibration Value Bit0
.equ	CAL1	= 1	; Oscillator Calibration Value Bit1
.equ	CAL2	= 2	; Oscillator Calibration Value Bit2
.equ	CAL3	= 3	; Oscillator Calibration Value Bit3
.equ	CAL4	= 4	; Oscillator Calibration Value Bit4
.equ	CAL5	= 5	; Oscillator Calibration Value Bit5
.equ	CAL6	= 6	; Oscillator Calibration Value Bit6

; CLKPR - 
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

; PLLCSR - PLL Control And Status Register
.equ	PLOCK	= 0	; PLL Lock Detector
.equ	PLLE	= 1	; PLL Enable
.equ	PLLF	= 2	; PLL Factor

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRLIN	= 1	; Power Reduction LIN UART
.equ	PRSPI	= 2	; Power Reduction Serial Peripheral Interface
.equ	PRTIM0	= 3	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 4	; Power Reduction Timer/Counter1
.equ	PRPSC	= 5	; Power Reduction PSC
.equ	PRCAN	= 6	; Power Reduction CAN


; ***** PORTE ************************
; PORTE - Port E Data Register
.equ	PORTE0	= 0	; 
.equ	PE0	= 0	; For compatibility
.equ	PORTE1	= 1	; 
.equ	PE1	= 1	; For compatibility
.equ	PORTE2	= 2	; 
.equ	PE2	= 2	; For compatibility

; DDRE - Port E Data Direction Register
.equ	DDE0	= 0	; 
.equ	DDE1	= 1	; 
.equ	DDE2	= 2	; 

; PINE - Port E Input Pins
.equ	PINE0	= 0	; 
.equ	PINE1	= 1	; 
.equ	PINE2	= 2	; 


; ***** TIMER_COUNTER_0 **************
; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Timer/Counter0 Output Compare Flag 0A
.equ	OCF0B	= 2	; Timer/Counter0 Output Compare Flag 0B

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	WGM01	= 1	; Waveform Generation Mode
.equ	COM0B0	= 4	; Compare Output Mode, Fast PWm
.equ	COM0B1	= 5	; Compare Output Mode, Fast PWm
.equ	COM0A0	= 6	; Compare Output Mode, Phase Correct PWM Mode
.equ	COM0A1	= 7	; Compare Output Mode, Phase Correct PWM Mode

; TCCR0B - Timer/Counter Control Register B
.equ	CS00	= 0	; Clock Select
.equ	CS01	= 1	; Clock Select
.equ	CS02	= 2	; Clock Select
.equ	WGM02	= 3	; 
.equ	FOC0B	= 6	; Force Output Compare B
.equ	FOC0A	= 7	; Force Output Compare A

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
.equ	OCR0A_0	= 0	; 
.equ	OCR0A_1	= 1	; 
.equ	OCR0A_2	= 2	; 
.equ	OCR0A_3	= 3	; 
.equ	OCR0A_4	= 4	; 
.equ	OCR0A_5	= 5	; 
.equ	OCR0A_6	= 6	; 
.equ	OCR0A_7	= 7	; 

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0B_0	= 0	; 
.equ	OCR0B_1	= 1	; 
.equ	OCR0B_2	= 2	; 
.equ	OCR0B_3	= 3	; 
.equ	OCR0B_4	= 4	; 
.equ	OCR0B_5	= 5	; 
.equ	OCR0B_6	= 6	; 
.equ	OCR0B_7	= 7	; 

; GTCCR - General Timer/Counter Control Register
.equ	PSR10	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	ICPSEL1	= 6	; Timer1 Input Capture Selection Bit
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Output Compare Flag 1A
.equ	OCF1B	= 2	; Output Compare Flag 1B
.equ	ICF1	= 5	; Input Capture Flag 1

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode
.equ	WGM11	= 1	; Waveform Generation Mode
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

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6	; 
.equ	FOC1A	= 7	; 

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
;.equ	TSM	= 7	; Timer/Counter Synchronization Mode


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
.equ	ADTS3	= 3	; ADC Auto Trigger Source 3
.equ	AREFEN	= 5	; Analog Reference pin Enable
.equ	ISRCEN	= 6	; Current Source Enable
.equ	ADHSM	= 7	; ADC High Speed Mode

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; ADC0 Digital input Disable
.equ	ADC1D	= 1	; ADC1 Digital input Disable
.equ	ADC2D	= 2	; ADC2 Digital input Disable
.equ	ADC3D	= 3	; ADC3 Digital input Disable
.equ	ADC4D	= 4	; ADC4 Digital input Disable
.equ	ADC5D	= 5	; ADC5 Digital input Disable
.equ	ADC6D	= 6	; ADC6 Digital input Disable
.equ	ADC7D	= 7	; ADC7 Digital input Disable

; DIDR1 - Digital Input Disable Register 0
.equ	ADC8D	= 0	; ADC8 Pin Digital input Disable
.equ	ADC9D	= 1	; ADC9 Pin Digital input Disable
.equ	ADC10D	= 2	; ADC10 Pin Digital input Disable
.equ	AMP0ND	= 3	; AMP0N Pin Digital input Disable
.equ	AMP0PD	= 4	; AMP0P Pin Digital input Disable
.equ	ACMP0D	= 5	; ACMP0 Pin Digital input Disable
.equ	AMP2PD	= 6	; AMP2P Pin Digital input Disable

; AMP0CSR - 
.equ	AMP0TS0	= 0	; 
.equ	AMP0TS1	= 1	; 
.equ	AMP0TS2	= 2	; 
.equ	AMPCMP0	= 3	; Amplifier 0 - Comparator 0 Connection
.equ	AMP0G0	= 4	; 
.equ	AMP0G1	= 5	; 
.equ	AMP0IS	= 6	; 
.equ	AMP0EN	= 7	; 

; AMP1CSR - 
.equ	AMP1TS0	= 0	; 
.equ	AMP1TS1	= 1	; 
.equ	AMP1TS2	= 2	; 
.equ	AMPCMP1	= 3	; Amplifier 1 - Comparator 1 Connection
.equ	AMP1G0	= 4	; 
.equ	AMP1G1	= 5	; 
.equ	AMP1IS	= 6	; 
.equ	AMP1EN	= 7	; 

; AMP2CSR - 
.equ	AMP2TS0	= 0	; 
.equ	AMP2TS1	= 1	; 
.equ	AMP2TS2	= 2	; 
.equ	AMPCMP2	= 3	; Amplifier 2 - Comparator 2 Connection
.equ	AMP2G0	= 4	; 
.equ	AMP2G1	= 5	; 
.equ	AMP2IS	= 6	; 
.equ	AMP2EN	= 7	; 


; ***** LINUART **********************
; LINCR - LIN Control Register
.equ	LCMD0	= 0	; LIN Command and Mode bit 0
.equ	LCMD1	= 1	; LIN Command and Mode bit 1
.equ	LCMD2	= 2	; LIN Command and Mode bit 2
.equ	LENA	= 3	; LIN or UART Enable
.equ	LCONF0	= 4	; LIN Configuration bit 0
.equ	LCONF1	= 5	; LIN Configuration bit 1
.equ	LIN13	= 6	; LIN Standard
.equ	LSWRES	= 7	; Software Reset

; LINSIR - LIN Status and Interrupt Register
.equ	LRXOK	= 0	; Receive Performed Interrupt
.equ	LTXOK	= 1	; Transmit Performed Interrupt
.equ	LIDOK	= 2	; Identifier Interrupt
.equ	LERR	= 3	; Error Interrupt
.equ	LBUSY	= 4	; Busy Signal
.equ	LIDST0	= 5	; Identifier Status bit 0
.equ	LIDST1	= 6	; Identifier Status bit 1
.equ	LIDST2	= 7	; Identifier Status bit 2

; LINENIR - LIN Enable Interrupt Register
.equ	LENRXOK	= 0	; Enable Receive Performed Interrupt
.equ	LENTXOK	= 1	; Enable Transmit Performed Interrupt
.equ	LENIDOK	= 2	; Enable Identifier Interrupt
.equ	LENERR	= 3	; Enable Error Interrupt

; LINERR - LIN Error Register
.equ	LBERR	= 0	; Bit Error Flag
.equ	LCERR	= 1	; Checksum Error Flag
.equ	LPERR	= 2	; Parity Error Flag
.equ	LSERR	= 3	; Synchronization Error Flag
.equ	LFERR	= 4	; Framing Error Flag
.equ	LOVERR	= 5	; Overrun Error Flag
.equ	LTOERR	= 6	; Frame Time Out Error Flag
.equ	LABORT	= 7	; Abort Flag

; LINBTR - LIN Bit Timing Register
.equ	LBT0	= 0	; LIN Bit Timing bit 0
.equ	LBT1	= 1	; LIN Bit Timing bit 1
.equ	LBT2	= 2	; LIN Bit Timing bit 2
.equ	LBT3	= 3	; LIN Bit Timing bit 3
.equ	LBT4	= 4	; LIN Bit Timing bit 4
.equ	LBT5	= 5	; LIN Bit Timing bit 5
.equ	LDISR	= 7	; Disable Bit Timing Resynchronization

; LINBRRL - LIN Baud Rate Low Register
.equ	LDIV0	= 0	; 
.equ	LDIV1	= 1	; 
.equ	LDIV2	= 2	; 
.equ	LDIV3	= 3	; 
.equ	LDIV4	= 4	; 
.equ	LDIV5	= 5	; 
.equ	LDIV6	= 6	; 
.equ	LDIV7	= 7	; 

; LINBRRH - LIN Baud Rate High Register
.equ	LDIV8	= 0	; 
.equ	LDIV9	= 1	; 
.equ	LDIV10	= 2	; 
.equ	LDIV11	= 3	; 

; LINDLR - LIN Data Length Register
.equ	LRXDL0	= 0	; LIN Receive Data Length bit 0
.equ	LRXDL1	= 1	; LIN Receive Data Length bit 1
.equ	LRXDL2	= 2	; LIN Receive Data Length bit 2
.equ	LRXDL3	= 3	; LIN Receive Data Length bit 3
.equ	LTXDL0	= 4	; LIN Transmit Data Length bit 0
.equ	LTXDL1	= 5	; LIN Transmit Data Length bit 1
.equ	LTXDL2	= 6	; LIN Transmit Data Length bit 2
.equ	LTXDL3	= 7	; LIN Transmit Data Length bit 3

; LINIDR - LIN Identifier Register
.equ	LID0	= 0	; Identifier bit 0
.equ	LID1	= 1	; Identifier bit 1
.equ	LID2	= 2	; Identifier bit 2
.equ	LID3	= 3	; Identifier bit 3
.equ	LID4	= 4	; Identifier bit 4 or Data Length bit 0
.equ	LID5	= 5	; Identifier bit 5 or Data Length bit 1
.equ	LP0	= 6	; Parity bit 0
.equ	LP1	= 7	; Parity bit 1

; LINSEL - LIN Data Buffer Selection Register
.equ	LINDX0	= 0	; FIFO LIN Data Buffer Index bit 0
.equ	LINDX1	= 1	; FIFO LIN Data Buffer Index bit 1
.equ	LINDX2	= 2	; FIFO LIN Data Buffer Index bit 2
.equ	LAINC	= 3	; Auto Increment of Data Buffer Index (Active Low)

; LINDAT - LIN Data Register
.equ	LDATA0	= 0	; 
.equ	LDATA1	= 1	; 
.equ	LDATA2	= 2	; 
.equ	LDATA3	= 3	; 
.equ	LDATA4	= 4	; 
.equ	LDATA5	= 5	; 
.equ	LDATA6	= 6	; 
.equ	LDATA7	= 7	; 


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


; ***** WATCHDOG *********************
; WDTCSR - Watchdog Timer Control Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDCE	= 4	; Watchdog Change Enable
.equ	WDP3	= 5	; Watchdog Timer Prescaler Bit 3
.equ	WDIE	= 6	; Watchdog Timeout Interrupt Enable
.equ	WDIF	= 7	; Watchdog Timeout Interrupt Flag


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0	; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; External Interrupt Sense Control 0 Bit 1
.equ	ISC10	= 2	; External Interrupt Sense Control 1 Bit 0
.equ	ISC11	= 3	; External Interrupt Sense Control 1 Bit 1
.equ	ISC20	= 4	; External Interrupt Sense Control Bit
.equ	ISC21	= 5	; External Interrupt Sense Control Bit
.equ	ISC30	= 6	; External Interrupt Sense Control Bit
.equ	ISC31	= 7	; External Interrupt Sense Control Bit

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable
.equ	INT2	= 2	; External Interrupt Request 2 Enable
.equ	INT3	= 3	; External Interrupt Request 3 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1
.equ	INTF2	= 2	; External Interrupt Flag 2
.equ	INTF3	= 3	; External Interrupt Flag 3

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1	; Pin Change Interrupt Enable 1
.equ	PCIE2	= 2	; Pin Change Interrupt Enable 2
.equ	PCIE3	= 3	; Pin Change Interrupt Enable 3

; PCMSK3 - Pin Change Mask Register 3
.equ	PCINT24	= 0	; Pin Change Enable Mask 24
.equ	PCINT25	= 1	; Pin Change Enable Mask 25
.equ	PCINT26	= 2	; Pin Change Enable Mask 26

; PCMSK2 - Pin Change Mask Register 2
.equ	PCINT16	= 0	; Pin Change Enable Mask 16
.equ	PCINT17	= 1	; Pin Change Enable Mask 17
.equ	PCINT18	= 2	; Pin Change Enable Mask 18
.equ	PCINT19	= 3	; Pin Change Enable Mask 19
.equ	PCINT20	= 4	; Pin Change Enable Mask 20
.equ	PCINT21	= 5	; Pin Change Enable Mask 21
.equ	PCINT22	= 6	; Pin Change Enable Mask 22
.equ	PCINT23	= 7	; Pin Change Enable Mask 23

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; Pin Change Enable Mask 8
.equ	PCINT9	= 1	; Pin Change Enable Mask 9
.equ	PCINT10	= 2	; Pin Change Enable Mask 10
.equ	PCINT11	= 3	; Pin Change Enable Mask 11
.equ	PCINT12	= 4	; Pin Change Enable Mask 12
.equ	PCINT13	= 5	; Pin Change Enable Mask 13
.equ	PCINT14	= 6	; Pin Change Enable Mask 14
.equ	PCINT15	= 7	; Pin Change Enable Mask 15

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3
.equ	PCINT4	= 4	; Pin Change Enable Mask 4
.equ	PCINT5	= 5	; Pin Change Enable Mask 5
.equ	PCINT6	= 6	; Pin Change Enable Mask 6
.equ	PCINT7	= 7	; Pin Change Enable Mask 7

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1
.equ	PCIF2	= 2	; Pin Change Interrupt Flag 2
.equ	PCIF3	= 3	; Pin Change Interrupt Flag 3


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
.equ	EEPE	= EEWE	; For compatibility
.equ	EEMWE	= 2	; EEPROM Master Write Enable
.equ	EEMPE	= EEMWE	; For compatibility
.equ	EERIE	= 3	; EEProm Ready Interrupt Enable
.equ	EEPM0	= 4	; 
.equ	EEPM1	= 5	; 


; ***** PSC **************************
; PIFR - PSC Interrupt Flag Register
.equ	PEOP	= 0	; PSC End of Cycle Interrupt
.equ	PEV0	= 1	; PSC External Event 0 Interrupt
.equ	PEV1	= 2	; PSC External Event 1 Interrupt
.equ	PEV2	= 3	; PSC External Event 2 Interrupt

; PIM - PSC Interrupt Mask Register
.equ	PEOPE	= 0	; PSC End of Cycle Interrupt Enable
.equ	PEVE0	= 1	; External Event 0 Interrupt Enable
.equ	PEVE1	= 2	; External Event 1 Interrupt Enable
.equ	PEVE2	= 3	; External Event 2 Interrupt Enable

; PMIC2 - PSC Module 2 Input Control Register
.equ	PRFM20	= 0	; PSC Module 2 Input Mode bit 0
.equ	PRFM21	= 1	; PSC Module 2 Input Mode bit 1
.equ	PRFM22	= 2	; PSC Module 2 Input Mode bit 2
.equ	PAOC2	= 3	; PSC Module 2 Asynchronous Output Control
.equ	PFLTE2	= 4	; PSC Module 2 Input Filter Enable
.equ	PELEV2	= 5	; PSC Module 2 Input Level Selector
.equ	PISEL2	= 6	; PSC Module 2 Input Select
.equ	POVEN2	= 7	; PSC Module 2 Overlap Enable

; PMIC1 - PSC Module 1 Input Control Register
.equ	PRFM10	= 0	; PSC Module 1 Input Mode bit 0
.equ	PRFM11	= 1	; PSC Module 1 Input Mode bit 1
.equ	PRFM12	= 2	; PSC Module 1 Input Mode bit 2
.equ	PAOC1	= 3	; PSC Module 1 Asynchronous Output Control
.equ	PFLTE1	= 4	; PSC Module 1 Input Filter Enable
.equ	PELEV1	= 5	; PSC Module 1 Input Level Selector
.equ	PISEL1	= 6	; PSC Module 1 Input Select
.equ	POVEN1	= 7	; PSC Module 1 Overlap Enable

; PMIC0 - PSC Module 0 Input Control Register
.equ	PRFM00	= 0	; PSC Module 0 Input Mode bit 0
.equ	PRFM01	= 1	; PSC Module 0 Input Mode bit 1
.equ	PRFM02	= 2	; PSC Module 0 Input Mode bit 2
.equ	PAOC0	= 3	; PSC Module 0 Asynchronous Output Control
.equ	PFLTE0	= 4	; PSC Module 0 Input Filter Enable
.equ	PELEV0	= 5	; PSC Module 0 Input Level Selector
.equ	PISEL0	= 6	; PSC Module 0 Input Select
.equ	POVEN0	= 7	; PSC Module 0 Overlap Enable

; PCTL - PSC Control Register
.equ	PRUN	= 0	; PSC Run
.equ	PCCYC	= 1	; PSC Complete Cycle
.equ	PCLKSEL	= 5	; PSC Input Clock Select
.equ	PPRE0	= 6	; PSC Prescaler Select bit 0
.equ	PPRE1	= 7	; PSC Prescaler Select bit 1

; POC - PSC Output Configuration
.equ	POEN0A	= 0	; PSC Output 0A Enable
.equ	POEN0B	= 1	; PSC Output 0B Enable
.equ	POEN1A	= 2	; PSC Output 1A Enable
.equ	POEN1B	= 3	; PSC Output 1B Enable
.equ	POEN2A	= 4	; PSC Output 2A Enable
.equ	POEN2B	= 5	; PSC Output 2B Enable

; PCNF - PSC Configuration Register
.equ	POPA	= 2	; PSC Output A Polarity
.equ	POPB	= 3	; PSC Output B Polarity
.equ	PMODE	= 4	; PSC Mode
.equ	PULOCK	= 5	; PSC Update Lock

; PSYNC - PSC Synchro Configuration
.equ	PSYNC00	= 0	; Selection of Synchronization Out for ADC
.equ	PSYNC01	= 1	; Selection of Synchronization Out for ADC
.equ	PSYNC10	= 2	; Selection of Synchronization Out for ADC
.equ	PSYNC11	= 3	; Selection of Synchronization Out for ADC
.equ	PSYNC20	= 4	; Selection of Synchronization Out for ADC
.equ	PSYNC21	= 5	; Selection of Synchronization Out for ADC



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
.equ	DWEN	= 6	; DebugWIRE Enable
.equ	RSTDISBL	= 7	; External Reset Disable

; EXTENDED fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector Trigger Level
.equ	BODLEVEL1	= 1	; Brown-out Detector Trigger Level
.equ	BODLEVEL2	= 2	; Brown-out Detector Trigger Level
.equ	PSCRVB	= 3	; PSC Outputs xB Reset Value
.equ	PSCRVA	= 4	; PSC Outputs xA Reset Value
.equ	PSCRB	= 5	; PSC Reset Behavior



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x1fff	; Note: Word address
.equ	IOEND	= 0x00ff
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 1024
.equ	RAMEND	= 0x04ff
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x01ff
.equ	EEPROMEND	= 0x01ff
.equ	EEADRBITS	= 9
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY EEPROM 512
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0x1800
.equ	NRWW_STOP_ADDR	= 0x1fff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x17ff
.equ	PAGESIZE	= 64
.equ	FIRSTBOOTSTART	= 0x1f00
.equ	SECONDBOOTSTART	= 0x1e00
.equ	THIRDBOOTSTART	= 0x1c00
.equ	FOURTHBOOTSTART	= 0x1800
.equ	SMALLBOOTSTART	= FIRSTBOOTSTART
.equ	LARGEBOOTSTART	= FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
.equ	ACI0addr	= 0x0002	; Analog Comparator 0
.equ	ACI1addr	= 0x0004	; Analog Comparator 1
.equ	ACI2addr	= 0x0006	; Analog Comparator 2
.equ	ACI3addr	= 0x0008	; Analog Comparator 3
.equ	PSC_FAULTaddr	= 0x000a	; PSC Fault
.equ	PSC_ECaddr	= 0x000c	; PSC End of Cycle
.equ	INT0addr	= 0x000e	; External Interrupt Request 0
.equ	INT1addr	= 0x0010	; External Interrupt Request 1
.equ	INT2addr	= 0x0012	; External Interrupt Request 2
.equ	INT3addr	= 0x0014	; External Interrupt Request 3
.equ	ICP1addr	= 0x0016	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x0018	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x001a	; Timer/Counter1 Compare Match B
.equ	OVF1addr	= 0x001c	; Timer1/Counter1 Overflow
.equ	OC0Aaddr	= 0x001e	; Timer/Counter0 Compare Match A
.equ	OC0Baddr	= 0x0020	; Timer/Counter0 Compare Match B
.equ	OVF0addr	= 0x0022	; Timer/Counter0 Overflow
.equ	CAN_INTaddr	= 0x0024	; CAN MOB, Burst, General Errors
.equ	CAN_TOVFaddr	= 0x0026	; CAN Timer Overflow
.equ	LIN_TCaddr	= 0x0028	; LIN Transfer Complete
.equ	LIN_ERRaddr	= 0x002a	; LIN Error
.equ	PCI0addr	= 0x002c	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x002e	; Pin Change Interrupt Request 1
.equ	PCI2addr	= 0x0030	; Pin Change Interrupt Request 2
.equ	PCI3addr	= 0x0032	; Pin Change Interrupt Request 3
.equ	SPIaddr	= 0x0034	; SPI Serial Transfer Complete
.equ	ADCCaddr	= 0x0036	; ADC Conversion Complete
.equ	WDTaddr	= 0x0038	; Watchdog Time-Out Interrupt
.equ	ERDYaddr	= 0x003a	; EEPROM Ready
.equ	SPMRaddr	= 0x003c	; Store Program Memory Read

.equ	INT_VECTORS_SIZE	= 62	; size in words

#endif  /* _M16M1DEF_INC_ */

; ***** END OF FILE ******************************************************
