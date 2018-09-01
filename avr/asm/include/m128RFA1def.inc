;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATmega128RFA1.xml *******
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m128RFA1def.inc"
;* Title             : Register/Bit Definitions for the ATmega128RFA1
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega128RFA1
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

#ifndef _M128RFA1DEF_INC_
#define _M128RFA1DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATmega128RFA1
#pragma AVRPART ADMIN PART_NAME ATmega128RFA1
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0xa7
.equ	SIGNATURE_002	= 0x01

#pragma AVRPART CORE CORE_VERSION V3


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	TRXFBEND	= 0x1ff	; MEMORY MAPPED
.equ	TRXFBST	= 0x180	; MEMORY MAPPED
.equ	TST_RX_LENGTH	= 0x17b	; MEMORY MAPPED
.equ	TST_CTRL_DIGI	= 0x176	; MEMORY MAPPED
.equ	CSMA_BE	= 0x16f	; MEMORY MAPPED
.equ	CSMA_SEED_1	= 0x16e	; MEMORY MAPPED
.equ	CSMA_SEED_0	= 0x16d	; MEMORY MAPPED
.equ	XAH_CTRL_0	= 0x16c	; MEMORY MAPPED
.equ	IEEE_ADDR_7	= 0x16b	; MEMORY MAPPED
.equ	IEEE_ADDR_6	= 0x16a	; MEMORY MAPPED
.equ	IEEE_ADDR_5	= 0x169	; MEMORY MAPPED
.equ	IEEE_ADDR_4	= 0x168	; MEMORY MAPPED
.equ	IEEE_ADDR_3	= 0x167	; MEMORY MAPPED
.equ	IEEE_ADDR_2	= 0x166	; MEMORY MAPPED
.equ	IEEE_ADDR_1	= 0x165	; MEMORY MAPPED
.equ	IEEE_ADDR_0	= 0x164	; MEMORY MAPPED
.equ	PAN_ID_1	= 0x163	; MEMORY MAPPED
.equ	PAN_ID_0	= 0x162	; MEMORY MAPPED
.equ	SHORT_ADDR_1	= 0x161	; MEMORY MAPPED
.equ	SHORT_ADDR_0	= 0x160	; MEMORY MAPPED
.equ	MAN_ID_1	= 0x15f	; MEMORY MAPPED
.equ	MAN_ID_0	= 0x15e	; MEMORY MAPPED
.equ	VERSION_NUM	= 0x15d	; MEMORY MAPPED
.equ	PART_NUM	= 0x15c	; MEMORY MAPPED
.equ	PLL_DCU	= 0x15b	; MEMORY MAPPED
.equ	PLL_CF	= 0x15a	; MEMORY MAPPED
.equ	FTN_CTRL	= 0x158	; MEMORY MAPPED
.equ	XAH_CTRL_1	= 0x157	; MEMORY MAPPED
.equ	RX_SYN	= 0x155	; MEMORY MAPPED
.equ	XOSC_CTRL	= 0x152	; MEMORY MAPPED
.equ	BATMON	= 0x151	; MEMORY MAPPED
.equ	VREG_CTRL	= 0x150	; MEMORY MAPPED
.equ	IRQ_STATUS	= 0x14f	; MEMORY MAPPED
.equ	IRQ_MASK	= 0x14e	; MEMORY MAPPED
.equ	ANT_DIV	= 0x14d	; MEMORY MAPPED
.equ	TRX_CTRL_2	= 0x14c	; MEMORY MAPPED
.equ	SFD_VALUE	= 0x14b	; MEMORY MAPPED
.equ	RX_CTRL	= 0x14a	; MEMORY MAPPED
.equ	CCA_THRES	= 0x149	; MEMORY MAPPED
.equ	PHY_CC_CCA	= 0x148	; MEMORY MAPPED
.equ	PHY_ED_LEVEL	= 0x147	; MEMORY MAPPED
.equ	PHY_RSSI	= 0x146	; MEMORY MAPPED
.equ	PHY_TX_PWR	= 0x145	; MEMORY MAPPED
.equ	TRX_CTRL_1	= 0x144	; MEMORY MAPPED
.equ	TRX_CTRL_0	= 0x143	; MEMORY MAPPED
.equ	TRX_STATE	= 0x142	; MEMORY MAPPED
.equ	TRX_STATUS	= 0x141	; MEMORY MAPPED
.equ	AES_KEY	= 0x13f	; MEMORY MAPPED
.equ	AES_STATE	= 0x13e	; MEMORY MAPPED
.equ	AES_STATUS	= 0x13d	; MEMORY MAPPED
.equ	AES_CTRL	= 0x13c	; MEMORY MAPPED
.equ	TRXPR	= 0x139	; MEMORY MAPPED
.equ	DPDS1	= 0x137	; MEMORY MAPPED
.equ	DPDS0	= 0x136	; MEMORY MAPPED
.equ	DRTRAM0	= 0x135	; MEMORY MAPPED
.equ	DRTRAM1	= 0x134	; MEMORY MAPPED
.equ	DRTRAM2	= 0x133	; MEMORY MAPPED
.equ	DRTRAM3	= 0x132	; MEMORY MAPPED
.equ	LLDRH	= 0x131	; MEMORY MAPPED
.equ	LLDRL	= 0x130	; MEMORY MAPPED
.equ	LLCR	= 0x12f	; MEMORY MAPPED
.equ	OCR5CL	= 0x12c	; MEMORY MAPPED
.equ	OCR5CH	= 0x12d	; MEMORY MAPPED
.equ	OCR5BL	= 0x12a	; MEMORY MAPPED
.equ	OCR5BH	= 0x12b	; MEMORY MAPPED
.equ	OCR5AL	= 0x128	; MEMORY MAPPED
.equ	OCR5AH	= 0x129	; MEMORY MAPPED
.equ	ICR5H	= 0x127	; MEMORY MAPPED
.equ	ICR5L	= 0x126	; MEMORY MAPPED
.equ	TCNT5L	= 0x124	; MEMORY MAPPED
.equ	TCNT5H	= 0x125	; MEMORY MAPPED
.equ	TCCR5C	= 0x122	; MEMORY MAPPED
.equ	TCCR5B	= 0x121	; MEMORY MAPPED
.equ	TCCR5A	= 0x120	; MEMORY MAPPED
.equ	PORTL	= 0x10b	; MEMORY MAPPED
.equ	DDRL	= 0x10a	; MEMORY MAPPED
.equ	PINL	= 0x109	; MEMORY MAPPED
.equ	PORTK	= 0x108	; MEMORY MAPPED
.equ	DDRK	= 0x107	; MEMORY MAPPED
.equ	PINK	= 0x106	; MEMORY MAPPED
.equ	PORTJ	= 0x105	; MEMORY MAPPED
.equ	DDRJ	= 0x104	; MEMORY MAPPED
.equ	PINJ	= 0x103	; MEMORY MAPPED
.equ	PORTH	= 0x102	; MEMORY MAPPED
.equ	DDRH	= 0x101	; MEMORY MAPPED
.equ	PINH	= 0x100	; MEMORY MAPPED
.equ	SCOCR1HH	= 0xf8	; MEMORY MAPPED
.equ	SCOCR1HL	= 0xf7	; MEMORY MAPPED
.equ	SCOCR1LH	= 0xf6	; MEMORY MAPPED
.equ	SCOCR1LL	= 0xf5	; MEMORY MAPPED
.equ	SCOCR2HH	= 0xf4	; MEMORY MAPPED
.equ	SCOCR2HL	= 0xf3	; MEMORY MAPPED
.equ	SCOCR2LH	= 0xf2	; MEMORY MAPPED
.equ	SCOCR2LL	= 0xf1	; MEMORY MAPPED
.equ	SCOCR3HH	= 0xf0	; MEMORY MAPPED
.equ	SCOCR3HL	= 0xef	; MEMORY MAPPED
.equ	SCOCR3LH	= 0xee	; MEMORY MAPPED
.equ	SCOCR3LL	= 0xed	; MEMORY MAPPED
.equ	SCTSRHH	= 0xec	; MEMORY MAPPED
.equ	SCTSRHL	= 0xeb	; MEMORY MAPPED
.equ	SCTSRLH	= 0xea	; MEMORY MAPPED
.equ	SCTSRLL	= 0xe9	; MEMORY MAPPED
.equ	SCBTSRHH	= 0xe8	; MEMORY MAPPED
.equ	SCBTSRHL	= 0xe7	; MEMORY MAPPED
.equ	SCBTSRLH	= 0xe6	; MEMORY MAPPED
.equ	SCBTSRLL	= 0xe5	; MEMORY MAPPED
.equ	SCCNTHH	= 0xe4	; MEMORY MAPPED
.equ	SCCNTHL	= 0xe3	; MEMORY MAPPED
.equ	SCCNTLH	= 0xe2	; MEMORY MAPPED
.equ	SCCNTLL	= 0xe1	; MEMORY MAPPED
.equ	SCIRQS	= 0xe0	; MEMORY MAPPED
.equ	SCIRQM	= 0xdf	; MEMORY MAPPED
.equ	SCSR	= 0xde	; MEMORY MAPPED
.equ	SCCR1	= 0xdd	; MEMORY MAPPED
.equ	SCCR0	= 0xdc	; MEMORY MAPPED
.equ	ATBR33	= 0xd1	; MEMORY MAPPED
.equ	ATBR18	= 0xd0	; MEMORY MAPPED
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
.equ	TWAMR	= 0xbd	; MEMORY MAPPED
.equ	TWCR	= 0xbc	; MEMORY MAPPED
.equ	TWDR	= 0xbb	; MEMORY MAPPED
.equ	TWAR	= 0xba	; MEMORY MAPPED
.equ	TWSR	= 0xb9	; MEMORY MAPPED
.equ	TWBR	= 0xb8	; MEMORY MAPPED
.equ	ASSR	= 0xb6	; MEMORY MAPPED
.equ	OCR2B	= 0xb4	; MEMORY MAPPED
.equ	OCR2A	= 0xb3	; MEMORY MAPPED
.equ	TCNT2	= 0xb2	; MEMORY MAPPED
.equ	TCCR2B	= 0xb1	; MEMORY MAPPED
.equ	TCCR2A	= 0xb0	; MEMORY MAPPED
.equ	OCR4CL	= 0xac	; MEMORY MAPPED
.equ	OCR4CH	= 0xad	; MEMORY MAPPED
.equ	OCR4BL	= 0xaa	; MEMORY MAPPED
.equ	OCR4BH	= 0xab	; MEMORY MAPPED
.equ	OCR4AL	= 0xa8	; MEMORY MAPPED
.equ	OCR4AH	= 0xa9	; MEMORY MAPPED
.equ	ICR4L	= 0xa6	; MEMORY MAPPED
.equ	ICR4H	= 0xa7	; MEMORY MAPPED
.equ	TCNT4L	= 0xa4	; MEMORY MAPPED
.equ	TCNT4H	= 0xa5	; MEMORY MAPPED
.equ	TCCR4C	= 0xa2	; MEMORY MAPPED
.equ	TCCR4B	= 0xa1	; MEMORY MAPPED
.equ	TCCR4A	= 0xa0	; MEMORY MAPPED
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
.equ	DIDR2	= 0x7d	; MEMORY MAPPED
.equ	ADMUX	= 0x7c	; MEMORY MAPPED
.equ	ADCSRB	= 0x7b	; MEMORY MAPPED
.equ	ADCSRA	= 0x7a	; MEMORY MAPPED
.equ	ADCH	= 0x79	; MEMORY MAPPED
.equ	ADCL	= 0x78	; MEMORY MAPPED
.equ	ADCSRC	= 0x77	; MEMORY MAPPED
.equ	NEMCR	= 0x75	; MEMORY MAPPED
.equ	TIMSK5	= 0x73	; MEMORY MAPPED
.equ	TIMSK4	= 0x72	; MEMORY MAPPED
.equ	TIMSK3	= 0x71	; MEMORY MAPPED
.equ	TIMSK2	= 0x70	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK2	= 0x6d	; MEMORY MAPPED
.equ	PCMSK1	= 0x6c	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRB	= 0x6a	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	BGCR	= 0x67	; MEMORY MAPPED
.equ	OSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR1	= 0x65	; MEMORY MAPPED
.equ	PRR0	= 0x64	; MEMORY MAPPED
.equ	PRR2	= 0x63	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	EIND	= 0x3c
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
.equ	OCR0B	= 0x28
.equ	OCR0A	= 0x27
.equ	TCNT0	= 0x26
.equ	TCCR0B	= 0x25
.equ	TCCR0A	= 0x24
.equ	GTCCR	= 0x23
.equ	EEARH	= 0x22
.equ	EEARL	= 0x21
.equ	EEDR	= 0x20
.equ	EECR	= 0x1f
.equ	GPIOR0	= 0x1e
.equ	EIMSK	= 0x1d
.equ	EIFR	= 0x1c
.equ	PCIFR	= 0x1b
.equ	TIFR5	= 0x1a
.equ	TIFR4	= 0x19
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

; ***** ANALOG_COMPARATOR ************
; ADCSRB - ADC Control and Status Register B
.equ	ACME	= 6	; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select
.equ	ACIC	= 2	; Analog Comparator Input Capture Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACBG	= 6	; Analog Comparator Bandgap Select
.equ	ACD	= 7	; Analog Comparator Disable

; DIDR1 - Digital Input Disable Register 1
.equ	AIN0D	= 0	; AIN0 Digital Input Disable
.equ	AIN1D	= 1	; AIN1 Digital Input Disable


; ***** USART0 ***********************
; UDR0 - USART0 I/O Data Register
.equ	UDR00	= 0	; USART I/O Data Register
.equ	UDR01	= 1	; USART I/O Data Register
.equ	UDR02	= 2	; USART I/O Data Register
.equ	UDR03	= 3	; USART I/O Data Register
.equ	UDR04	= 4	; USART I/O Data Register
.equ	UDR05	= 5	; USART I/O Data Register
.equ	UDR06	= 6	; USART I/O Data Register
.equ	UDR07	= 7	; USART I/O Data Register

; UCSR0A - USART0 Control and Status Register A
.equ	MPCM0	= 0	; Multi-processor Communication Mode
.equ	U2X0	= 1	; Double the USART Transmission Speed
.equ	UPE0	= 2	; USART Parity Error
.equ	DOR0	= 3	; Data OverRun
.equ	FE0	= 4	; Frame Error
.equ	UDRE0	= 5	; USART Data Register Empty
.equ	TXC0	= 6	; USART Transmit Complete
.equ	RXC0	= 7	; USART Receive Complete

; UCSR0B - USART0 Control and Status Register B
.equ	TXB80	= 0	; Transmit Data Bit 8
.equ	RXB80	= 1	; Receive Data Bit 8
.equ	UCSZ02	= 2	; Character Size
.equ	TXEN0	= 3	; Transmitter Enable
.equ	RXEN0	= 4	; Receiver Enable
.equ	UDRIE0	= 5	; USART Data Register Empty Interrupt Enable
.equ	TXCIE0	= 6	; TX Complete Interrupt Enable
.equ	RXCIE0	= 7	; RX Complete Interrupt Enable

; UCSR0C - USART0 Control and Status Register C
.equ	UCPOL0	= 0	; Clock Polarity
.equ	UCSZ00	= 1	; Character Size
.equ	UCPHA0	= UCSZ00	; For compatibility
.equ	UCSZ01	= 2	; Character Size
.equ	UDORD0	= UCSZ01	; For compatibility
.equ	USBS0	= 3	; Stop Bit Select
.equ	UPM00	= 4	; Parity Mode
.equ	UPM01	= 5	; Parity Mode
.equ	UMSEL00	= 6	; USART Mode Select
.equ	UMSEL0	= UMSEL00	; For compatibility
.equ	UMSEL01	= 7	; USART Mode Select
.equ	UMSEL1	= UMSEL01	; For compatibility

; UBRR0H - USART0 Baud Rate Register High Byte
.equ	UBRR8	= 0	; USART Baud Rate Register
.equ	UBRR9	= 1	; USART Baud Rate Register
.equ	UBRR10	= 2	; USART Baud Rate Register
.equ	UBRR11	= 3	; USART Baud Rate Register
.equ	Res0	= 4	; Reserved Bit
.equ	Res1	= 5	; Reserved Bit
.equ	Res2	= 6	; Reserved Bit
.equ	Res3	= 7	; Reserved Bit

; UBRR0L - USART0 Baud Rate Register Low Byte
.equ	UBRR0	= 0	; USART Baud Rate Register
.equ	UBRR1	= 1	; USART Baud Rate Register
.equ	UBRR2	= 2	; USART Baud Rate Register
.equ	UBRR3	= 3	; USART Baud Rate Register
.equ	UBRR4	= 4	; USART Baud Rate Register
.equ	UBRR5	= 5	; USART Baud Rate Register
.equ	UBRR6	= 6	; USART Baud Rate Register
.equ	UBRR7	= 7	; USART Baud Rate Register


; ***** USART1 ***********************
; UDR1 - USART1 I/O Data Register
.equ	UDR10	= 0	; USART I/O Data Register
.equ	UDR11	= 1	; USART I/O Data Register
.equ	UDR12	= 2	; USART I/O Data Register
.equ	UDR13	= 3	; USART I/O Data Register
.equ	UDR14	= 4	; USART I/O Data Register
.equ	UDR15	= 5	; USART I/O Data Register
.equ	UDR16	= 6	; USART I/O Data Register
.equ	UDR17	= 7	; USART I/O Data Register

; UCSR1A - USART1 Control and Status Register A
.equ	MPCM1	= 0	; Multi-processor Communication Mode
.equ	U2X1	= 1	; Double the USART Transmission Speed
.equ	UPE1	= 2	; USART Parity Error
.equ	DOR1	= 3	; Data OverRun
.equ	FE1	= 4	; Frame Error
.equ	UDRE1	= 5	; USART Data Register Empty
.equ	TXC1	= 6	; USART Transmit Complete
.equ	RXC1	= 7	; USART Receive Complete

; UCSR1B - USART1 Control and Status Register B
.equ	TXB81	= 0	; Transmit Data Bit 8
.equ	RXB81	= 1	; Receive Data Bit 8
.equ	UCSZ12	= 2	; Character Size
.equ	TXEN1	= 3	; Transmitter Enable
.equ	RXEN1	= 4	; Receiver Enable
.equ	UDRIE1	= 5	; USART Data Register Empty Interrupt Enable
.equ	TXCIE1	= 6	; TX Complete Interrupt Enable
.equ	RXCIE1	= 7	; RX Complete Interrupt Enable

; UCSR1C - USART1 Control and Status Register C
.equ	UCPOL1	= 0	; Clock Polarity
.equ	UCSZ10	= 1	; Character Size
.equ	UCPHA1	= UCSZ10	; For compatibility
.equ	UCSZ11	= 2	; Character Size
.equ	UDORD1	= UCSZ11	; For compatibility
.equ	USBS1	= 3	; Stop Bit Select
.equ	UPM10	= 4	; Parity Mode
.equ	UPM11	= 5	; Parity Mode
.equ	UMSEL10	= 6	; USART Mode Select
.equ	UMSEL11	= 7	; USART Mode Select

; UBRR1H - USART1 Baud Rate Register High Byte
;.equ	UBRR8	= 0	; USART Baud Rate Register
;.equ	UBRR9	= 1	; USART Baud Rate Register
;.equ	UBRR10	= 2	; USART Baud Rate Register
;.equ	UBRR11	= 3	; USART Baud Rate Register
;.equ	Res0	= 4	; Reserved Bit
;.equ	Res1	= 5	; Reserved Bit
;.equ	Res2	= 6	; Reserved Bit
;.equ	Res3	= 7	; Reserved Bit

; UBRR1L - USART1 Baud Rate Register Low Byte
;.equ	UBRR0	= 0	; USART Baud Rate Register
;.equ	UBRR1	= 1	; USART Baud Rate Register
;.equ	UBRR2	= 2	; USART Baud Rate Register
;.equ	UBRR3	= 3	; USART Baud Rate Register
;.equ	UBRR4	= 4	; USART Baud Rate Register
;.equ	UBRR5	= 5	; USART Baud Rate Register
;.equ	UBRR6	= 6	; USART Baud Rate Register
;.equ	UBRR7	= 7	; USART Baud Rate Register


; ***** TWI **************************
; TWAMR - TWI (Slave) Address Mask Register
.equ	Res	= 0	; Reserved Bit
.equ	TWAM0	= 1	; TWI Address Mask
.equ	TWAMR0	= TWAM0	; For compatibility
.equ	TWAM1	= 2	; TWI Address Mask
.equ	TWAMR1	= TWAM1	; For compatibility
.equ	TWAM2	= 3	; TWI Address Mask
.equ	TWAMR2	= TWAM2	; For compatibility
.equ	TWAM3	= 4	; TWI Address Mask
.equ	TWAMR3	= TWAM3	; For compatibility
.equ	TWAM4	= 5	; TWI Address Mask
.equ	TWAMR4	= TWAM4	; For compatibility
.equ	TWAM5	= 6	; TWI Address Mask
.equ	TWAMR5	= TWAM5	; For compatibility
.equ	TWAM6	= 7	; TWI Address Mask
.equ	TWAMR6	= TWAM6	; For compatibility

; TWBR - TWI Bit Rate Register
.equ	TWBR0	= 0	; TWI Bit Rate Register Value
.equ	TWBR1	= 1	; TWI Bit Rate Register Value
.equ	TWBR2	= 2	; TWI Bit Rate Register Value
.equ	TWBR3	= 3	; TWI Bit Rate Register Value
.equ	TWBR4	= 4	; TWI Bit Rate Register Value
.equ	TWBR5	= 5	; TWI Bit Rate Register Value
.equ	TWBR6	= 6	; TWI Bit Rate Register Value
.equ	TWBR7	= 7	; TWI Bit Rate Register Value

; TWCR - TWI Control Register
.equ	TWIE	= 0	; TWI Interrupt Enable
;.equ	Res	= 1	; Reserved Bit
.equ	TWEN	= 2	; TWI Enable Bit
.equ	TWWC	= 3	; TWI Write Collision Flag
.equ	TWSTO	= 4	; TWI STOP Condition Bit
.equ	TWSTA	= 5	; TWI START Condition Bit
.equ	TWEA	= 6	; TWI Enable Acknowledge Bit
.equ	TWINT	= 7	; TWI Interrupt Flag

; TWSR - TWI Status Register
.equ	TWPS0	= 0	; TWI Prescaler Bits
.equ	TWPS1	= 1	; TWI Prescaler Bits
;.equ	Res	= 2	; Reserved Bit
.equ	TWS3	= 3	; TWI Status
.equ	TWS4	= 4	; TWI Status
.equ	TWS5	= 5	; TWI Status
.equ	TWS6	= 6	; TWI Status
.equ	TWS7	= 7	; TWI Status

; TWDR - TWI Data Register
.equ	TWD0	= 0	; TWI Data Register Byte
.equ	TWD1	= 1	; TWI Data Register Byte
.equ	TWD2	= 2	; TWI Data Register Byte
.equ	TWD3	= 3	; TWI Data Register Byte
.equ	TWD4	= 4	; TWI Data Register Byte
.equ	TWD5	= 5	; TWI Data Register Byte
.equ	TWD6	= 6	; TWI Data Register Byte
.equ	TWD7	= 7	; TWI Data Register Byte

; TWAR - TWI (Slave) Address Register
.equ	TWGCE	= 0	; TWI General Call Recognition Enable Bit
.equ	TWA0	= 1	; TWI (Slave) Address
.equ	TWA1	= 2	; TWI (Slave) Address
.equ	TWA2	= 3	; TWI (Slave) Address
.equ	TWA3	= 4	; TWI (Slave) Address
.equ	TWA4	= 5	; TWI (Slave) Address
.equ	TWA5	= 6	; TWI (Slave) Address
.equ	TWA6	= 7	; TWI (Slave) Address


; ***** SPI **************************
; SPDR - SPI Data Register
.equ	SPDR0	= 0	; SPI Data Register
.equ	SPDR1	= 1	; SPI Data Register
.equ	SPDR2	= 2	; SPI Data Register
.equ	SPDR3	= 3	; SPI Data Register
.equ	SPDR4	= 4	; SPI Data Register
.equ	SPDR5	= 5	; SPI Data Register
.equ	SPDR6	= 6	; SPI Data Register
.equ	SPDR7	= 7	; SPI Data Register

; SPSR - SPI Status Register
.equ	SPI2X	= 0	; Double SPI Speed Bit
;.equ	Res0	= 1	; Reserved
;.equ	Res1	= 2	; Reserved
;.equ	Res2	= 3	; Reserved
;.equ	Res3	= 4	; Reserved
.equ	Res4	= 5	; Reserved
.equ	WCOL	= 6	; Write Collision Flag
.equ	SPIF	= 7	; SPI Interrupt Flag

; SPCR - SPI Control Register
.equ	SPR0	= 0	; SPI Clock Rate Select 1 and 0
.equ	SPR1	= 1	; SPI Clock Rate Select 1 and 0
.equ	CPHA	= 2	; Clock Phase
.equ	CPOL	= 3	; Clock polarity
.equ	MSTR	= 4	; Master/Slave Select
.equ	DORD	= 5	; Data Order
.equ	SPE	= 6	; SPI Enable
.equ	SPIE	= 7	; SPI Interrupt Enable


; ***** PORTA ************************
; PORTA - Port A Data Register
.equ	PORTA0	= 0	; Port A Data Register Value
.equ	PA0	= 0	; For compatibility
.equ	PORTA1	= 1	; Port A Data Register Value
.equ	PA1	= 1	; For compatibility
.equ	PORTA2	= 2	; Port A Data Register Value
.equ	PA2	= 2	; For compatibility
.equ	PORTA3	= 3	; Port A Data Register Value
.equ	PA3	= 3	; For compatibility
.equ	PORTA4	= 4	; Port A Data Register Value
.equ	PA4	= 4	; For compatibility
.equ	PORTA5	= 5	; Port A Data Register Value
.equ	PA5	= 5	; For compatibility
.equ	PORTA6	= 6	; Port A Data Register Value
.equ	PA6	= 6	; For compatibility
.equ	PORTA7	= 7	; Port A Data Register Value
.equ	PA7	= 7	; For compatibility

; DDRA - Port A Data Direction Register
.equ	DDA0	= 0	; Port A Data Direction Register Value
.equ	DDA1	= 1	; Port A Data Direction Register Value
.equ	DDA2	= 2	; Port A Data Direction Register Value
.equ	DDA3	= 3	; Port A Data Direction Register Value
.equ	DDA4	= 4	; Port A Data Direction Register Value
.equ	DDA5	= 5	; Port A Data Direction Register Value
.equ	DDA6	= 6	; Port A Data Direction Register Value
.equ	DDA7	= 7	; Port A Data Direction Register Value

; PINA - Port A Input Pins Address
.equ	PINA0	= 0	; Port A Input Pins
.equ	PINA1	= 1	; Port A Input Pins
.equ	PINA2	= 2	; Port A Input Pins
.equ	PINA3	= 3	; Port A Input Pins
.equ	PINA4	= 4	; Port A Input Pins
.equ	PINA5	= 5	; Port A Input Pins
.equ	PINA6	= 6	; Port A Input Pins
.equ	PINA7	= 7	; Port A Input Pins


; ***** PORTB ************************
; PORTB - Port B Data Register
.equ	PORTB0	= 0	; Port B Data Register Value
.equ	PB0	= 0	; For compatibility
.equ	PORTB1	= 1	; Port B Data Register Value
.equ	PB1	= 1	; For compatibility
.equ	PORTB2	= 2	; Port B Data Register Value
.equ	PB2	= 2	; For compatibility
.equ	PORTB3	= 3	; Port B Data Register Value
.equ	PB3	= 3	; For compatibility
.equ	PORTB4	= 4	; Port B Data Register Value
.equ	PB4	= 4	; For compatibility
.equ	PORTB5	= 5	; Port B Data Register Value
.equ	PB5	= 5	; For compatibility
.equ	PORTB6	= 6	; Port B Data Register Value
.equ	PB6	= 6	; For compatibility
.equ	PORTB7	= 7	; Port B Data Register Value
.equ	PB7	= 7	; For compatibility

; DDRB - Port B Data Direction Register
.equ	DDB0	= 0	; Port B Data Direction Register Value
.equ	DDB1	= 1	; Port B Data Direction Register Value
.equ	DDB2	= 2	; Port B Data Direction Register Value
.equ	DDB3	= 3	; Port B Data Direction Register Value
.equ	DDB4	= 4	; Port B Data Direction Register Value
.equ	DDB5	= 5	; Port B Data Direction Register Value
.equ	DDB6	= 6	; Port B Data Direction Register Value
.equ	DDB7	= 7	; Port B Data Direction Register Value

; PINB - Port B Input Pins Address
.equ	PINB0	= 0	; Port B Input Pins Value
.equ	PINB1	= 1	; Port B Input Pins Value
.equ	PINB2	= 2	; Port B Input Pins Value
.equ	PINB3	= 3	; Port B Input Pins Value
.equ	PINB4	= 4	; Port B Input Pins Value
.equ	PINB5	= 5	; Port B Input Pins Value
.equ	PINB6	= 6	; Port B Input Pins Value
.equ	PINB7	= 7	; Port B Input Pins Value


; ***** PORTC ************************
; PORTC - Port C Data Register
.equ	PORTC0	= 0	; Port C Data Register Value
.equ	PC0	= 0	; For compatibility
.equ	PORTC1	= 1	; Port C Data Register Value
.equ	PC1	= 1	; For compatibility
.equ	PORTC2	= 2	; Port C Data Register Value
.equ	PC2	= 2	; For compatibility
.equ	PORTC3	= 3	; Port C Data Register Value
.equ	PC3	= 3	; For compatibility
.equ	PORTC4	= 4	; Port C Data Register Value
.equ	PC4	= 4	; For compatibility
.equ	PORTC5	= 5	; Port C Data Register Value
.equ	PC5	= 5	; For compatibility
.equ	PORTC6	= 6	; Port C Data Register Value
.equ	PC6	= 6	; For compatibility
.equ	PORTC7	= 7	; Port C Data Register Value
.equ	PC7	= 7	; For compatibility

; DDRC - Port C Data Direction Register
.equ	DDC0	= 0	; Port C Data Direction Register Value
.equ	DDC1	= 1	; Port C Data Direction Register Value
.equ	DDC2	= 2	; Port C Data Direction Register Value
.equ	DDC3	= 3	; Port C Data Direction Register Value
.equ	DDC4	= 4	; Port C Data Direction Register Value
.equ	DDC5	= 5	; Port C Data Direction Register Value
.equ	DDC6	= 6	; Port C Data Direction Register Value
.equ	DDC7	= 7	; Port C Data Direction Register Value

; PINC - Port C Input Pins Address
.equ	PINC0	= 0	; Port C Input Pins
.equ	PINC1	= 1	; Port C Input Pins
.equ	PINC2	= 2	; Port C Input Pins
.equ	PINC3	= 3	; Port C Input Pins
.equ	PINC4	= 4	; Port C Input Pins
.equ	PINC5	= 5	; Port C Input Pins
.equ	PINC6	= 6	; Port C Input Pins
.equ	PINC7	= 7	; Port C Input Pins


; ***** PORTD ************************
; PORTD - Port D Data Register
.equ	PORTD0	= 0	; Port D Data Register Value
.equ	PD0	= 0	; For compatibility
.equ	PORTD1	= 1	; Port D Data Register Value
.equ	PD1	= 1	; For compatibility
.equ	PORTD2	= 2	; Port D Data Register Value
.equ	PD2	= 2	; For compatibility
.equ	PORTD3	= 3	; Port D Data Register Value
.equ	PD3	= 3	; For compatibility
.equ	PORTD4	= 4	; Port D Data Register Value
.equ	PD4	= 4	; For compatibility
.equ	PORTD5	= 5	; Port D Data Register Value
.equ	PD5	= 5	; For compatibility
.equ	PORTD6	= 6	; Port D Data Register Value
.equ	PD6	= 6	; For compatibility
.equ	PORTD7	= 7	; Port D Data Register Value
.equ	PD7	= 7	; For compatibility

; DDRD - Port D Data Direction Register
.equ	DDD0	= 0	; Port D Data Direction Register Value
.equ	DDD1	= 1	; Port D Data Direction Register Value
.equ	DDD2	= 2	; Port D Data Direction Register Value
.equ	DDD3	= 3	; Port D Data Direction Register Value
.equ	DDD4	= 4	; Port D Data Direction Register Value
.equ	DDD5	= 5	; Port D Data Direction Register Value
.equ	DDD6	= 6	; Port D Data Direction Register Value
.equ	DDD7	= 7	; Port D Data Direction Register Value

; PIND - Port D Input Pins Address
.equ	PIND0	= 0	; Port D Input Pins Value
.equ	PIND1	= 1	; Port D Input Pins Value
.equ	PIND2	= 2	; Port D Input Pins Value
.equ	PIND3	= 3	; Port D Input Pins Value
.equ	PIND4	= 4	; Port D Input Pins Value
.equ	PIND5	= 5	; Port D Input Pins Value
.equ	PIND6	= 6	; Port D Input Pins Value
.equ	PIND7	= 7	; Port D Input Pins Value


; ***** PORTE ************************
; PORTE - Port E Data Register
.equ	PORTE0	= 0	; Port E Data Register Value
.equ	PE0	= 0	; For compatibility
.equ	PORTE1	= 1	; Port E Data Register Value
.equ	PE1	= 1	; For compatibility
.equ	PORTE2	= 2	; Port E Data Register Value
.equ	PE2	= 2	; For compatibility
.equ	PORTE3	= 3	; Port E Data Register Value
.equ	PE3	= 3	; For compatibility
.equ	PORTE4	= 4	; Port E Data Register Value
.equ	PE4	= 4	; For compatibility
.equ	PORTE5	= 5	; Port E Data Register Value
.equ	PE5	= 5	; For compatibility
.equ	PORTE6	= 6	; Port E Data Register Value
.equ	PE6	= 6	; For compatibility
.equ	PORTE7	= 7	; Port E Data Register Value
.equ	PE7	= 7	; For compatibility

; DDRE - Port E Data Direction Register
.equ	DDE0	= 0	; Port E Data Direction Register Value
.equ	DDE1	= 1	; Port E Data Direction Register Value
.equ	DDE2	= 2	; Port E Data Direction Register Value
.equ	DDE3	= 3	; Port E Data Direction Register Value
.equ	DDE4	= 4	; Port E Data Direction Register Value
.equ	DDE5	= 5	; Port E Data Direction Register Value
.equ	DDE6	= 6	; Port E Data Direction Register Value
.equ	DDE7	= 7	; Port E Data Direction Register Value

; PINE - Port E Input Pins Address
.equ	PINE0	= 0	; Port E Input Pins Value
.equ	PINE1	= 1	; Port E Input Pins Value
.equ	PINE2	= 2	; Port E Input Pins Value
.equ	PINE3	= 3	; Port E Input Pins Value
.equ	PINE4	= 4	; Port E Input Pins Value
.equ	PINE5	= 5	; Port E Input Pins Value
.equ	PINE6	= 6	; Port E Input Pins Value
.equ	PINE7	= 7	; Port E Input Pins Value


; ***** PORTF ************************
; PORTF - Port F Data Register
.equ	PORTF0	= 0	; Port F Data Register Value
.equ	PF0	= 0	; For compatibility
.equ	PORTF1	= 1	; Port F Data Register Value
.equ	PF1	= 1	; For compatibility
.equ	PORTF2	= 2	; Port F Data Register Value
.equ	PF2	= 2	; For compatibility
.equ	PORTF3	= 3	; Port F Data Register Value
.equ	PF3	= 3	; For compatibility
.equ	PORTF4	= 4	; Port F Data Register Value
.equ	PF4	= 4	; For compatibility
.equ	PORTF5	= 5	; Port F Data Register Value
.equ	PF5	= 5	; For compatibility
.equ	PORTF6	= 6	; Port F Data Register Value
.equ	PF6	= 6	; For compatibility
.equ	PORTF7	= 7	; Port F Data Register Value
.equ	PF7	= 7	; For compatibility

; DDRF - Port F Data Direction Register
.equ	DDF0	= 0	; Port F Data Direction Register Value
.equ	DDF1	= 1	; Port F Data Direction Register Value
.equ	DDF2	= 2	; Port F Data Direction Register Value
.equ	DDF3	= 3	; Port F Data Direction Register Value
.equ	DDF4	= 4	; Port F Data Direction Register Value
.equ	DDF5	= 5	; Port F Data Direction Register Value
.equ	DDF6	= 6	; Port F Data Direction Register Value
.equ	DDF7	= 7	; Port F Data Direction Register Value

; PINF - Port F Input Pins Address
.equ	PINF0	= 0	; Port F Input Pins Value
.equ	PINF1	= 1	; Port F Input Pins Value
.equ	PINF2	= 2	; Port F Input Pins Value
.equ	PINF3	= 3	; Port F Input Pins Value
.equ	PINF4	= 4	; Port F Input Pins Value
.equ	PINF5	= 5	; Port F Input Pins Value
.equ	PINF6	= 6	; Port F Input Pins Value
.equ	PINF7	= 7	; Port F Input Pins Value


; ***** PORTG ************************
; PORTG - Port G Data Register
.equ	PORTG0	= 0	; Port G Data Register Value
.equ	PG0	= 0	; For compatibility
.equ	PORTG1	= 1	; Port G Data Register Value
.equ	PG1	= 1	; For compatibility
.equ	PORTG2	= 2	; Port G Data Register Value
.equ	PG2	= 2	; For compatibility
.equ	PORTG3	= 3	; Port G Data Register Value
.equ	PG3	= 3	; For compatibility
.equ	PORTG4	= 4	; Port G Data Register Value
.equ	PG4	= 4	; For compatibility
.equ	PORTG5	= 5	; Port G Data Register Value
.equ	PG5	= 5	; For compatibility
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; DDRG - Port G Data Direction Register
.equ	DDG0	= 0	; Port G Data Direction Register Value
.equ	DDG1	= 1	; Port G Data Direction Register Value
.equ	DDG2	= 2	; Port G Data Direction Register Value
.equ	DDG3	= 3	; Port G Data Direction Register Value
.equ	DDG4	= 4	; Port G Data Direction Register Value
.equ	DDG5	= 5	; Port G Data Direction Register Value
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; PING - Port G Input Pins Address
.equ	PING0	= 0	; Port G Input Pins Value
.equ	PING1	= 1	; Port G Input Pins Value
.equ	PING2	= 2	; Port G Input Pins Value
.equ	PING3	= 3	; Port G Input Pins Value
.equ	PING4	= 4	; Port G Input Pins Value
.equ	PING5	= 5	; Port G Input Pins Value
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit


; ***** TIMER_COUNTER_0 **************
; TIMSK0 - Timer/Counter0 Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter0 Output Compare Match B Interrupt Enable
;.equ	Res0	= 3	; Reserved
;.equ	Res1	= 4	; Reserved
;.equ	Res2	= 5	; Reserved
;.equ	Res3	= 6	; Reserved
;.equ	Res4	= 7	; Reserved

; TIFR0 - Timer/Counter0 Interrupt Flag Register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Timer/Counter0 Output Compare A Match Flag
.equ	OCF0B	= 2	; Timer/Counter0 Output Compare B Match Flag
;.equ	Res0	= 3	; Reserved
;.equ	Res1	= 4	; Reserved
;.equ	Res2	= 5	; Reserved
;.equ	Res3	= 6	; Reserved
;.equ	Res4	= 7	; Reserved

; TCCR0A - Timer/Counter0 Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	WGM01	= 1	; Waveform Generation Mode
;.equ	Res0	= 2	; Reserved Bit
;.equ	Res1	= 3	; Reserved Bit
.equ	COM0B0	= 4	; Compare Match Output B Mode
.equ	COM0B1	= 5	; Compare Match Output B Mode
.equ	COM0A0	= 6	; Compare Match Output A Mode
.equ	COM0A1	= 7	; Compare Match Output A Mode

; TCCR0B - Timer/Counter0 Control Register B
.equ	CS00	= 0	; Clock Select
.equ	CS01	= 1	; Clock Select
.equ	CS02	= 2	; Clock Select
.equ	WGM02	= 3	; 
;.equ	Res0	= 4	; Reserved Bit
;.equ	Res1	= 5	; Reserved Bit
.equ	FOC0B	= 6	; Force Output Compare B
.equ	FOC0A	= 7	; Force Output Compare A

; TCNT0 - Timer/Counter0 Register
.equ	TCNT0_0	= 0	; Timer/Counter0 Byte
.equ	TCNT0_1	= 1	; Timer/Counter0 Byte
.equ	TCNT0_2	= 2	; Timer/Counter0 Byte
.equ	TCNT0_3	= 3	; Timer/Counter0 Byte
.equ	TCNT0_4	= 4	; Timer/Counter0 Byte
.equ	TCNT0_5	= 5	; Timer/Counter0 Byte
.equ	TCNT0_6	= 6	; Timer/Counter0 Byte
.equ	TCNT0_7	= 7	; Timer/Counter0 Byte

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A_0	= 0	; Output Compare Register
.equ	OCR0A_1	= 1	; Output Compare Register
.equ	OCR0A_2	= 2	; Output Compare Register
.equ	OCR0A_3	= 3	; Output Compare Register
.equ	OCR0A_4	= 4	; Output Compare Register
.equ	OCR0A_5	= 5	; Output Compare Register
.equ	OCR0A_6	= 6	; Output Compare Register
.equ	OCR0A_7	= 7	; Output Compare Register

; OCR0B - Timer/Counter0 Output Compare Register B
.equ	OCR0B_0	= 0	; Output Compare Register
.equ	OCR0B_1	= 1	; Output Compare Register
.equ	OCR0B_2	= 2	; Output Compare Register
.equ	OCR0B_3	= 3	; Output Compare Register
.equ	OCR0B_4	= 4	; Output Compare Register
.equ	OCR0B_5	= 5	; Output Compare Register
.equ	OCR0B_6	= 6	; Output Compare Register
.equ	OCR0B_7	= 7	; Output Compare Register

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0	; Prescaler Reset for Synchronous Timer/Counters
.equ	PSR10	= PSRSYNC	; For compatibility
.equ	PSRASY	= 1	; Prescaler Reset Timer/Counter2
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
;.equ	Res2	= 4	; Reserved
;.equ	Res3	= 5	; Reserved
;.equ	Res4	= 6	; Reserved
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_2 **************
; TIMSK2 - Timer/Counter Interrupt Mask register
.equ	TOIE2	= 0	; Timer/Counter2 Overflow Interrupt Enable
.equ	TOIE2A	= TOIE2	; For compatibility
.equ	OCIE2A	= 1	; Timer/Counter2 Output Compare Match A Interrupt Enable
.equ	OCIE2B	= 2	; Timer/Counter2 Output Compare Match B Interrupt Enable
;.equ	Res0	= 3	; Reserved Bit
;.equ	Res1	= 4	; Reserved Bit
;.equ	Res2	= 5	; Reserved Bit
;.equ	Res3	= 6	; Reserved Bit
;.equ	Res4	= 7	; Reserved Bit

; TIFR2 - Timer/Counter Interrupt Flag Register
.equ	TOV2	= 0	; Timer/Counter2 Overflow Flag
.equ	OCF2A	= 1	; Output Compare Flag 2 A
.equ	OCF2B	= 2	; Output Compare Flag 2 B
;.equ	Res0	= 3	; Reserved Bit
;.equ	Res1	= 4	; Reserved Bit
;.equ	Res2	= 5	; Reserved Bit
;.equ	Res3	= 6	; Reserved Bit
;.equ	Res4	= 7	; Reserved Bit

; TCCR2A - Timer/Counter2 Control Register A
.equ	WGM20	= 0	; Waveform Generation Mode
.equ	WGM21	= 1	; Waveform Generation Mode
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
.equ	COM2B0	= 4	; Compare Match Output B Mode
.equ	COM2B1	= 5	; Compare Match Output B Mode
.equ	COM2A0	= 6	; Compare Match Output A Mode
.equ	COM2A1	= 7	; Compare Match Output A Mode

; TCCR2B - Timer/Counter2 Control Register B
.equ	CS20	= 0	; Clock Select
.equ	CS21	= 1	; Clock Select
.equ	CS22	= 2	; Clock Select
.equ	WGM22	= 3	; Waveform Generation Mode
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
.equ	FOC2B	= 6	; Force Output Compare B
.equ	FOC2A	= 7	; Force Output Compare A

; TCNT2 - Timer/Counter2
.equ	TCNT20	= 0	; Timer/Counter2 Byte
.equ	TCNT21	= 1	; Timer/Counter2 Byte
.equ	TCNT22	= 2	; Timer/Counter2 Byte
.equ	TCNT23	= 3	; Timer/Counter2 Byte
.equ	TCNT24	= 4	; Timer/Counter2 Byte
.equ	TCNT25	= 5	; Timer/Counter2 Byte
.equ	TCNT26	= 6	; Timer/Counter2 Byte
.equ	TCNT27	= 7	; Timer/Counter2 Byte

; OCR2A - Timer/Counter2 Output Compare Register A
.equ	OCR2A0	= 0	; Output Compare Register
.equ	OCR2A1	= 1	; Output Compare Register
.equ	OCR2A2	= 2	; Output Compare Register
.equ	OCR2A3	= 3	; Output Compare Register
.equ	OCR2A4	= 4	; Output Compare Register
.equ	OCR2A5	= 5	; Output Compare Register
.equ	OCR2A6	= 6	; Output Compare Register
.equ	OCR2A7	= 7	; Output Compare Register

; OCR2B - Timer/Counter2 Output Compare Register B
.equ	OCR2B0	= 0	; Output Compare Register
.equ	OCR2B1	= 1	; Output Compare Register
.equ	OCR2B2	= 2	; Output Compare Register
.equ	OCR2B3	= 3	; Output Compare Register
.equ	OCR2B4	= 4	; Output Compare Register
.equ	OCR2B5	= 5	; Output Compare Register
.equ	OCR2B6	= 6	; Output Compare Register
.equ	OCR2B7	= 7	; Output Compare Register

; ASSR - Asynchronous Status Register
.equ	TCR2BUB	= 0	; Timer/Counter2 Control Register B Update Busy
.equ	TCR2AUB	= 1	; Timer/Counter2 Control Register A Update Busy
.equ	OCR2BUB	= 2	; Timer/Counter2 Output Compare Register B Update Busy
.equ	OCR2AUB	= 3	; Timer/Counter2 Output Compare Register A Update Busy
.equ	TCN2UB	= 4	; Timer/Counter2 Update Busy
.equ	AS2	= 5	; Timer/Counter2 Asynchronous Mode
.equ	EXCLK	= 6	; Enable External Clock Input
.equ	EXCLKAMR	= 7	; Enable External Clock Input for AMR

; GTCCR - General Timer Counter Control register
;.equ	PSRASY	= 1	; Prescaler Reset Timer/Counter2
.equ	PSR2	= PSRASY	; For compatibility
;.equ	TSM	= 7	; Timer/Counter Synchronization Mode


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


; ***** TIMER_COUNTER_5 **************
; TIMSK5 - Timer/Counter5 Interrupt Mask Register
.equ	TOIE5	= 0	; Timer/Counter5 Overflow Interrupt Enable
.equ	OCIE5A	= 1	; Timer/Counter5 Output Compare A Match Interrupt Enable
.equ	OCIE5B	= 2	; Timer/Counter5 Output Compare B Match Interrupt Enable
.equ	OCIE5C	= 3	; Timer/Counter5 Output Compare C Match Interrupt Enable
;.equ	Res	= 4	; Reserved Bit
.equ	ICIE5	= 5	; Timer/Counter5 Input Capture Interrupt Enable
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TIFR5 - Timer/Counter5 Interrupt Flag Register
.equ	TOV5	= 0	; Timer/Counter5 Overflow Flag
.equ	OCF5A	= 1	; Timer/Counter5 Output Compare A Match Flag
.equ	OCF5B	= 2	; Timer/Counter5 Output Compare B Match Flag
.equ	OCF5C	= 3	; Timer/Counter5 Output Compare C Match Flag
;.equ	Res	= 4	; Reserved Bit
.equ	ICF5	= 5	; Timer/Counter5 Input Capture Flag
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TCCR5A - Timer/Counter5 Control Register A
.equ	WGM50	= 0	; Waveform Generation Mode
.equ	WGM51	= 1	; Waveform Generation Mode
.equ	COM5C0	= 2	; Compare Output Mode for Channel C
.equ	COM5C1	= 3	; Compare Output Mode for Channel C
.equ	COM5B0	= 4	; Compare Output Mode for Channel B
.equ	COM5B1	= 5	; Compare Output Mode for Channel B
.equ	COM5A0	= 6	; Compare Output Mode for Channel A
.equ	COM5A1	= 7	; Compare Output Mode for Channel A

; TCCR5B - Timer/Counter5 Control Register B
.equ	CS50	= 0	; Clock Select
.equ	CS51	= 1	; Clock Select
.equ	CS52	= 2	; Clock Select
.equ	WGM52	= 3	; Waveform Generation Mode
.equ	WGM53	= 4	; Waveform Generation Mode
;.equ	Res	= 5	; Reserved Bit
.equ	ICES5	= 6	; Input Capture 5 Edge Select
.equ	ICNC5	= 7	; Input Capture 5 Noise Canceller

; TCCR5C - Timer/Counter5 Control Register C
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
.equ	FOC5C	= 5	; Force Output Compare for Channel C
.equ	FOC5B	= 6	; Force Output Compare for Channel B
.equ	FOC5A	= 7	; Force Output Compare for Channel A

; ICR5H - Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H0	= 0	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H1	= 1	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H2	= 2	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H3	= 3	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H4	= 4	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H5	= 5	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H6	= 6	; Timer/Counter5 Input Capture Register High Byte
.equ	ICR5H7	= 7	; Timer/Counter5 Input Capture Register High Byte

; ICR5L - Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L0	= 0	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L1	= 1	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L2	= 2	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L3	= 3	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L4	= 4	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L5	= 5	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L6	= 6	; Timer/Counter5 Input Capture Register Low Byte
.equ	ICR5L7	= 7	; Timer/Counter5 Input Capture Register Low Byte


; ***** TIMER_COUNTER_4 **************
; TIMSK4 - Timer/Counter4 Interrupt Mask Register
.equ	TOIE4	= 0	; Timer/Counter4 Overflow Interrupt Enable
.equ	OCIE4A	= 1	; Timer/Counter4 Output Compare A Match Interrupt Enable
.equ	OCIE4B	= 2	; Timer/Counter4 Output Compare B Match Interrupt Enable
.equ	OCIE4C	= 3	; Timer/Counter4 Output Compare C Match Interrupt Enable
;.equ	Res	= 4	; Reserved Bit
.equ	ICIE4	= 5	; Timer/Counter4 Input Capture Interrupt Enable
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TIFR4 - Timer/Counter4 Interrupt Flag Register
.equ	TOV4	= 0	; Timer/Counter4 Overflow Flag
.equ	OCF4A	= 1	; Timer/Counter4 Output Compare A Match Flag
.equ	OCF4B	= 2	; Timer/Counter4 Output Compare B Match Flag
.equ	OCF4C	= 3	; Timer/Counter4 Output Compare C Match Flag
;.equ	Res	= 4	; Reserved Bit
.equ	ICF4	= 5	; Timer/Counter4 Input Capture Flag
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TCCR4A - Timer/Counter4 Control Register A
.equ	WGM40	= 0	; Waveform Generation Mode
.equ	WGM41	= 1	; Waveform Generation Mode
.equ	COM4C0	= 2	; Compare Output Mode for Channel C
.equ	COM4C1	= 3	; Compare Output Mode for Channel C
.equ	COM4B0	= 4	; Compare Output Mode for Channel B
.equ	COM4B1	= 5	; Compare Output Mode for Channel B
.equ	COM4A0	= 6	; Compare Output Mode for Channel A
.equ	COM4A1	= 7	; Compare Output Mode for Channel A

; TCCR4B - Timer/Counter4 Control Register B
.equ	CS40	= 0	; Clock Select
.equ	CS41	= 1	; Clock Select
.equ	CS42	= 2	; Clock Select
.equ	WGM42	= 3	; Waveform Generation Mode
.equ	WGM43	= 4	; Waveform Generation Mode
;.equ	Res	= 5	; Reserved Bit
.equ	ICES4	= 6	; Input Capture 4 Edge Select
.equ	ICNC4	= 7	; Input Capture 4 Noise Canceller

; TCCR4C - Timer/Counter4 Control Register C
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
.equ	FOC4C	= 5	; Force Output Compare for Channel C
.equ	FOC4B	= 6	; Force Output Compare for Channel B
.equ	FOC4A	= 7	; Force Output Compare for Channel A


; ***** TIMER_COUNTER_3 **************
; TIMSK3 - Timer/Counter3 Interrupt Mask Register
.equ	TOIE3	= 0	; Timer/Counter3 Overflow Interrupt Enable
.equ	OCIE3A	= 1	; Timer/Counter3 Output Compare A Match Interrupt Enable
.equ	OCIE3B	= 2	; Timer/Counter3 Output Compare B Match Interrupt Enable
.equ	OCIE3C	= 3	; Timer/Counter3 Output Compare C Match Interrupt Enable
;.equ	Res	= 4	; Reserved Bit
.equ	ICIE3	= 5	; Timer/Counter3 Input Capture Interrupt Enable
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TIFR3 - Timer/Counter3 Interrupt Flag Register
.equ	TOV3	= 0	; Timer/Counter3 Overflow Flag
.equ	OCF3A	= 1	; Timer/Counter3 Output Compare A Match Flag
.equ	OCF3B	= 2	; Timer/Counter3 Output Compare B Match Flag
.equ	OCF3C	= 3	; Timer/Counter3 Output Compare C Match Flag
;.equ	Res	= 4	; Reserved Bit
.equ	ICF3	= 5	; Timer/Counter3 Input Capture Flag
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TCCR3A - Timer/Counter3 Control Register A
.equ	WGM30	= 0	; Waveform Generation Mode
.equ	WGM31	= 1	; Waveform Generation Mode
.equ	COM3C0	= 2	; Compare Output Mode for Channel C
.equ	COM3C1	= 3	; Compare Output Mode for Channel C
.equ	COM3B0	= 4	; Compare Output Mode for Channel B
.equ	COM3B1	= 5	; Compare Output Mode for Channel B
.equ	COM3A0	= 6	; Compare Output Mode for Channel A
.equ	COM3A1	= 7	; Compare Output Mode for Channel A

; TCCR3B - Timer/Counter3 Control Register B
.equ	CS30	= 0	; Clock Select
.equ	CS31	= 1	; Clock Select
.equ	CS32	= 2	; Clock Select
.equ	WGM32	= 3	; Waveform Generation Mode
.equ	WGM33	= 4	; Waveform Generation Mode
;.equ	Res	= 5	; Reserved Bit
.equ	ICES3	= 6	; Input Capture 3 Edge Select
.equ	ICNC3	= 7	; Input Capture 3 Noise Canceller

; TCCR3C - Timer/Counter3 Control Register C
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
.equ	FOC3C	= 5	; Force Output Compare for Channel C
.equ	FOC3B	= 6	; Force Output Compare for Channel B
.equ	FOC3A	= 7	; Force Output Compare for Channel A


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter1 Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1C	= 3	; Timer/Counter1 Output Compare C Match Interrupt Enable
;.equ	Res	= 4	; Reserved Bit
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TIFR1 - Timer/Counter1 Interrupt Flag Register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Timer/Counter1 Output Compare A Match Flag
.equ	OCF1B	= 2	; Timer/Counter1 Output Compare B Match Flag
.equ	OCF1C	= 3	; Timer/Counter1 Output Compare C Match Flag
;.equ	Res	= 4	; Reserved Bit
.equ	ICF1	= 5	; Timer/Counter1 Input Capture Flag
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode
.equ	WGM11	= 1	; Waveform Generation Mode
.equ	COM1C0	= 2	; Compare Output Mode for Channel C
.equ	COM1C1	= 3	; Compare Output Mode for Channel C
.equ	COM1B0	= 4	; Compare Output Mode for Channel B
.equ	COM1B1	= 5	; Compare Output Mode for Channel B
.equ	COM1A0	= 6	; Compare Output Mode for Channel A
.equ	COM1A1	= 7	; Compare Output Mode for Channel A

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Clock Select
.equ	CS11	= 1	; Clock Select
.equ	CS12	= 2	; Clock Select
.equ	WGM12	= 3	; Waveform Generation Mode
.equ	WGM13	= 4	; Waveform Generation Mode
;.equ	Res	= 5	; Reserved Bit
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceller

; TCCR1C - Timer/Counter1 Control Register C
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
.equ	FOC1C	= 5	; Force Output Compare for Channel C
.equ	FOC1B	= 6	; Force Output Compare for Channel B
.equ	FOC1A	= 7	; Force Output Compare for Channel A


; ***** TRX24 ************************
; AES_CTRL - AES Control Register
;.equ	Res0	= 0	; Reserved Bit
;.equ	Res1	= 1	; Reserved Bit
.equ	AES_IM	= 2	; AES Interrupt Enable
.equ	AES_DIR	= 3	; Set AES Operation Direction
;.equ	Res	= 4	; Reserved Bit
.equ	AES_MODE	= 5	; Set AES Operation Mode
;.equ	Res	= 6	; Reserved Bit
.equ	AES_REQUEST	= 7	; Request AES Operation.

; AES_STATUS - AES Status Register
.equ	AES_DONE	= 0	; AES Operation Finished with Success
;.equ	Res0	= 1	; Reserved
;.equ	Res1	= 2	; Reserved
;.equ	Res2	= 3	; Reserved
;.equ	Res3	= 4	; Reserved
;.equ	Res4	= 5	; Reserved
.equ	Res5	= 6	; Reserved
.equ	AES_ER	= 7	; AES Operation Finished with Error

; AES_STATE - AES Plain and Cipher Text Buffer Register
.equ	AES_STATE0	= 0	; AES Plain and Cipher Text Buffer
.equ	AES_STATE1	= 1	; AES Plain and Cipher Text Buffer
.equ	AES_STATE2	= 2	; AES Plain and Cipher Text Buffer
.equ	AES_STATE3	= 3	; AES Plain and Cipher Text Buffer
.equ	AES_STATE4	= 4	; AES Plain and Cipher Text Buffer
.equ	AES_STATE5	= 5	; AES Plain and Cipher Text Buffer
.equ	AES_STATE6	= 6	; AES Plain and Cipher Text Buffer
.equ	AES_STATE7	= 7	; AES Plain and Cipher Text Buffer

; AES_KEY - AES Encryption and Decryption Key Buffer Register
.equ	AES_KEY0	= 0	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY1	= 1	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY2	= 2	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY3	= 3	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY4	= 4	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY5	= 5	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY6	= 6	; AES Encryption/Decryption Key Buffer
.equ	AES_KEY7	= 7	; AES Encryption/Decryption Key Buffer

; TRX_STATUS - Transceiver Status Register
.equ	TRX_STATUS0	= 0	; Transceiver Main Status
.equ	TRX_STATUS1	= 1	; Transceiver Main Status
.equ	TRX_STATUS2	= 2	; Transceiver Main Status
.equ	TRX_STATUS3	= 3	; Transceiver Main Status
.equ	TRX_STATUS4	= 4	; Transceiver Main Status
.equ	TST_STATUS	= 5	; Test mode status
.equ	CCA_STATUS	= 6	; CCA Status Result
.equ	CCA_DONE	= 7	; CCA Algorithm Status

; TRX_STATE - Transceiver State Control Register
.equ	TRX_CMD0	= 0	; State Control Command
.equ	TRX_CMD1	= 1	; State Control Command
.equ	TRX_CMD2	= 2	; State Control Command
.equ	TRX_CMD3	= 3	; State Control Command
.equ	TRX_CMD4	= 4	; State Control Command
.equ	TRAC_STATUS0	= 5	; Transaction Status
.equ	TRAC_STATUS1	= 6	; Transaction Status
.equ	TRAC_STATUS2	= 7	; Transaction Status

; TRX_CTRL_0 - Reserved
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
;.equ	Res5	= 5	; Reserved
.equ	Res6	= 6	; Reserved
.equ	Res7	= 7	; Reserved

; TRX_CTRL_1 - Transceiver Control Register 1
;.equ	Res0	= 0	; Reserved
;.equ	Res1	= 1	; Reserved
;.equ	Res2	= 2	; Reserved
;.equ	Res3	= 3	; Reserved
;.equ	Res4	= 4	; Reserved
.equ	TX_AUTO_CRC_ON	= 5	; Enable Automatic CRC Calculation
.equ	IRQ_2_EXT_EN	= 6	; Connect Frame Start IRQ to TC1
.equ	PA_EXT_EN	= 7	; External PA support enable

; PHY_TX_PWR - Transceiver Transmit Power Control Register
.equ	TX_PWR0	= 0	; Transmit Power Setting
.equ	TX_PWR1	= 1	; Transmit Power Setting
.equ	TX_PWR2	= 2	; Transmit Power Setting
.equ	TX_PWR3	= 3	; Transmit Power Setting
.equ	PA_LT0	= 4	; Power Amplifier Lead Time
.equ	PA_LT1	= 5	; Power Amplifier Lead Time
.equ	PA_BUF_LT0	= 6	; Power Amplifier Buffer Lead Time
.equ	PA_BUF_LT1	= 7	; Power Amplifier Buffer Lead Time

; PHY_RSSI - Receiver Signal Strength Indicator Register
.equ	RSSI0	= 0	; Receiver Signal Strength Indicator
.equ	RSSI1	= 1	; Receiver Signal Strength Indicator
.equ	RSSI2	= 2	; Receiver Signal Strength Indicator
.equ	RSSI3	= 3	; Receiver Signal Strength Indicator
.equ	RSSI4	= 4	; Receiver Signal Strength Indicator
.equ	RND_VALUE0	= 5	; Random Value
.equ	RND_VALUE1	= 6	; Random Value
.equ	RX_CRC_VALID	= 7	; Received Frame CRC Status

; PHY_ED_LEVEL - Transceiver Energy Detection Level Register
.equ	ED_LEVEL0	= 0	; Energy Detection Level
.equ	ED_LEVEL1	= 1	; Energy Detection Level
.equ	ED_LEVEL2	= 2	; Energy Detection Level
.equ	ED_LEVEL3	= 3	; Energy Detection Level
.equ	ED_LEVEL4	= 4	; Energy Detection Level
.equ	ED_LEVEL5	= 5	; Energy Detection Level
.equ	ED_LEVEL6	= 6	; Energy Detection Level
.equ	ED_LEVEL7	= 7	; Energy Detection Level

; PHY_CC_CCA - Transceiver Clear Channel Assessment (CCA) Control Register
.equ	CHANNEL0	= 0	; RX/TX Channel Selection
.equ	CHANNEL1	= 1	; RX/TX Channel Selection
.equ	CHANNEL2	= 2	; RX/TX Channel Selection
.equ	CHANNEL3	= 3	; RX/TX Channel Selection
.equ	CHANNEL4	= 4	; RX/TX Channel Selection
.equ	CCA_MODE0	= 5	; Select CCA Measurement Mode
.equ	CCA_MODE1	= 6	; Select CCA Measurement Mode
.equ	CCA_REQUEST	= 7	; Manual CCA Measurement Request

; CCA_THRES - Transceiver CCA Threshold Setting Register
.equ	CCA_ED_THRES0	= 0	; ED Threshold Level for CCA Measurement
.equ	CCA_ED_THRES1	= 1	; ED Threshold Level for CCA Measurement
.equ	CCA_ED_THRES2	= 2	; ED Threshold Level for CCA Measurement
.equ	CCA_ED_THRES3	= 3	; ED Threshold Level for CCA Measurement
.equ	CCA_CS_THRES0	= 4	; CS Threshold Level for CCA Measurement
.equ	CCA_CS_THRES1	= 5	; CS Threshold Level for CCA Measurement
.equ	CCA_CS_THRES2	= 6	; CS Threshold Level for CCA Measurement
.equ	CCA_CS_THRES3	= 7	; CS Threshold Level for CCA Measurement

; RX_CTRL - Transceiver Receive Control Register
.equ	PDT_THRES0	= 0	; Receiver Sensitivity Control
.equ	PDT_THRES1	= 1	; Receiver Sensitivity Control
.equ	PDT_THRES2	= 2	; Receiver Sensitivity Control
.equ	PDT_THRES3	= 3	; Receiver Sensitivity Control

; SFD_VALUE - Start of Frame Delimiter Value Register
.equ	SFD_VALUE0	= 0	; Start of Frame Delimiter Value
.equ	SFD_VALUE1	= 1	; Start of Frame Delimiter Value
.equ	SFD_VALUE2	= 2	; Start of Frame Delimiter Value
.equ	SFD_VALUE3	= 3	; Start of Frame Delimiter Value
.equ	SFD_VALUE4	= 4	; Start of Frame Delimiter Value
.equ	SFD_VALUE5	= 5	; Start of Frame Delimiter Value
.equ	SFD_VALUE6	= 6	; Start of Frame Delimiter Value
.equ	SFD_VALUE7	= 7	; Start of Frame Delimiter Value

; TRX_CTRL_2 - Transceiver Control Register 2
.equ	OQPSK_DATA_RATE0	= 0	; Data Rate Selection
.equ	OQPSK_DATA_RATE1	= 1	; Data Rate Selection
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
;.equ	Res2	= 4	; Reserved
;.equ	Res3	= 5	; Reserved
;.equ	Res4	= 6	; Reserved
.equ	RX_SAFE_MODE	= 7	; RX Safe Mode

; ANT_DIV - Antenna Diversity Control Register
.equ	ANT_CTRL0	= 0	; Static Antenna Diversity Switch Control
.equ	ANT_CTRL1	= 1	; Static Antenna Diversity Switch Control
.equ	ANT_EXT_SW_EN	= 2	; Enable External Antenna Switch Control
.equ	ANT_DIV_EN	= 3	; Enable Antenna Diversity
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
.equ	ANT_SEL	= 7	; Antenna Diversity Antenna Status

; IRQ_MASK - Transceiver Interrupt Enable Register
.equ	PLL_LOCK_EN	= 0	; PLL Lock Interrupt Enable
.equ	PLL_UNLOCK_EN	= 1	; PLL Unlock Interrupt Enable
.equ	RX_START_EN	= 2	; RX_START Interrupt Enable
.equ	RX_END_EN	= 3	; RX_END Interrupt Enable
.equ	CCA_ED_DONE_EN	= 4	; End of ED Measurement Interrupt Enable
.equ	AMI_EN	= 5	; Address Match Interrupt Enable
.equ	TX_END_EN	= 6	; TX_END Interrupt Enable
.equ	AWAKE_EN	= 7	; Awake Interrupt Enable

; IRQ_STATUS - Transceiver Interrupt Status Register
.equ	PLL_LOCK	= 0	; PLL Lock Interrupt Status
.equ	PLL_UNLOCK	= 1	; PLL Unlock Interrupt Status
.equ	RX_START	= 2	; RX_START Interrupt Status
.equ	RX_END	= 3	; RX_END Interrupt Status
.equ	CCA_ED_DONE	= 4	; End of ED Measurement Interrupt Status
.equ	AMI	= 5	; Address Match Interrupt Status
.equ	TX_END	= 6	; TX_END Interrupt Status
.equ	AWAKE	= 7	; Awake Interrupt Status

; VREG_CTRL - Voltage Regulator Control and Status Register
.equ	DVDD_OK	= 2	; DVDD Supply Voltage Valid
.equ	DVREG_EXT	= 3	; Use External DVDD Regulator
.equ	AVDD_OK	= 6	; AVDD Supply Voltage Valid
.equ	AVREG_EXT	= 7	; Use External AVDD Regulator

; BATMON - Battery Monitor Control and Status Register
.equ	BATMON_VTH0	= 0	; Battery Monitor Threshold Voltage
.equ	BATMON_VTH1	= 1	; Battery Monitor Threshold Voltage
.equ	BATMON_VTH2	= 2	; Battery Monitor Threshold Voltage
.equ	BATMON_VTH3	= 3	; Battery Monitor Threshold Voltage
.equ	BATMON_HR	= 4	; Battery Monitor Voltage Range
.equ	BATMON_OK	= 5	; Battery Monitor Status
.equ	BAT_LOW_EN	= 6	; Battery Monitor Interrupt Enable
.equ	BAT_LOW	= 7	; Battery Monitor Interrupt Status

; XOSC_CTRL - Crystal Oscillator Control Register
.equ	XTAL_TRIM0	= 0	; Crystal Oscillator Load Capacitance Trimming
.equ	XTAL_TRIM1	= 1	; Crystal Oscillator Load Capacitance Trimming
.equ	XTAL_TRIM2	= 2	; Crystal Oscillator Load Capacitance Trimming
.equ	XTAL_TRIM3	= 3	; Crystal Oscillator Load Capacitance Trimming
.equ	XTAL_MODE0	= 4	; Crystal Oscillator Operating Mode
.equ	XTAL_MODE1	= 5	; Crystal Oscillator Operating Mode
.equ	XTAL_MODE2	= 6	; Crystal Oscillator Operating Mode
.equ	XTAL_MODE3	= 7	; Crystal Oscillator Operating Mode

; RX_SYN - Transceiver Receiver Sensitivity Control Register
.equ	RX_PDT_LEVEL0	= 0	; Reduce Receiver Sensitivity
.equ	RX_PDT_LEVEL1	= 1	; Reduce Receiver Sensitivity
.equ	RX_PDT_LEVEL2	= 2	; Reduce Receiver Sensitivity
.equ	RX_PDT_LEVEL3	= 3	; Reduce Receiver Sensitivity
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
.equ	RX_PDT_DIS	= 7	; Prevent Frame Reception

; XAH_CTRL_1 - Transceiver Acknowledgment Frame Control Register 1
;.equ	Res	= 0	; Reserved Bit
.equ	AACK_PROM_MODE	= 1	; Enable Promiscuous Mode
.equ	AACK_ACK_TIME	= 2	; Reduce Acknowledgment Time
;.equ	Res	= 3	; Reserved Bit
.equ	AACK_UPLD_RES_FT	= 4	; Process Reserved Frames
.equ	AACK_FLTR_RES_FT	= 5	; Filter Reserved Frames
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; FTN_CTRL - Transceiver Filter Tuning Control Register
.equ	FTN_START	= 7	; Start Calibration Loop of Filter Tuning Network

; PLL_CF - Transceiver Center Frequency Calibration Control Register
.equ	PLL_CF_START	= 7	; Start Center Frequency Calibration

; PLL_DCU - Transceiver Delay Cell Calibration Control Register
.equ	PLL_DCU_START	= 7	; Start Delay Cell Calibration

; PART_NUM - Device Identification Register (Part Number)
.equ	PART_NUM0	= 0	; Part Number
.equ	PART_NUM1	= 1	; Part Number
.equ	PART_NUM2	= 2	; Part Number
.equ	PART_NUM3	= 3	; Part Number
.equ	PART_NUM4	= 4	; Part Number
.equ	PART_NUM5	= 5	; Part Number
.equ	PART_NUM6	= 6	; Part Number
.equ	PART_NUM7	= 7	; Part Number

; VERSION_NUM - Device Identification Register (Version Number)
.equ	VERSION_NUM0	= 0	; Version Number
.equ	VERSION_NUM1	= 1	; Version Number
.equ	VERSION_NUM2	= 2	; Version Number
.equ	VERSION_NUM3	= 3	; Version Number
.equ	VERSION_NUM4	= 4	; Version Number
.equ	VERSION_NUM5	= 5	; Version Number
.equ	VERSION_NUM6	= 6	; Version Number
.equ	VERSION_NUM7	= 7	; Version Number

; MAN_ID_0 - Device Identification Register (Manufacture ID Low Byte)
.equ	MAN_ID_00	= 0	; Manufacturer ID (Low Byte)
.equ	MAN_ID_01	= 1	; Manufacturer ID (Low Byte)
.equ	MAN_ID_02	= 2	; Manufacturer ID (Low Byte)
.equ	MAN_ID_03	= 3	; Manufacturer ID (Low Byte)
.equ	MAN_ID_04	= 4	; Manufacturer ID (Low Byte)
.equ	MAN_ID_05	= 5	; Manufacturer ID (Low Byte)
.equ	MAN_ID_06	= 6	; Manufacturer ID (Low Byte)
.equ	MAN_ID_07	= 7	; Manufacturer ID (Low Byte)

; MAN_ID_1 - Device Identification Register (Manufacture ID High Byte)
.equ	MAN_ID_10	= 0	; Manufacturer ID (High Byte)
.equ	MAN_ID_11	= 1	; Manufacturer ID (High Byte)
.equ	MAN_ID_12	= 2	; Manufacturer ID (High Byte)
.equ	MAN_ID_13	= 3	; Manufacturer ID (High Byte)
.equ	MAN_ID_14	= 4	; Manufacturer ID (High Byte)
.equ	MAN_ID_15	= 5	; Manufacturer ID (High Byte)
.equ	MAN_ID_16	= 6	; Manufacturer ID (High Byte)
.equ	MAN_ID_17	= 7	; Manufacturer ID (High Byte)

; SHORT_ADDR_0 - Transceiver MAC Short Address Register (Low Byte)
.equ	SHORT_ADDR_00	= 0	; MAC Short Address
.equ	SHORT_ADDR_01	= 1	; MAC Short Address
.equ	SHORT_ADDR_02	= 2	; MAC Short Address
.equ	SHORT_ADDR_03	= 3	; MAC Short Address
.equ	SHORT_ADDR_04	= 4	; MAC Short Address
.equ	SHORT_ADDR_05	= 5	; MAC Short Address
.equ	SHORT_ADDR_06	= 6	; MAC Short Address
.equ	SHORT_ADDR_07	= 7	; MAC Short Address

; SHORT_ADDR_1 - Transceiver MAC Short Address Register (High Byte)
.equ	SHORT_ADDR_10	= 0	; MAC Short Address
.equ	SHORT_ADDR_11	= 1	; MAC Short Address
.equ	SHORT_ADDR_12	= 2	; MAC Short Address
.equ	SHORT_ADDR_13	= 3	; MAC Short Address
.equ	SHORT_ADDR_14	= 4	; MAC Short Address
.equ	SHORT_ADDR_15	= 5	; MAC Short Address
.equ	SHORT_ADDR_16	= 6	; MAC Short Address
.equ	SHORT_ADDR_17	= 7	; MAC Short Address

; PAN_ID_0 - Transceiver Personal Area Network ID Register (Low Byte)
.equ	PAN_ID_00	= 0	; MAC Personal Area Network ID
.equ	PAN_ID_01	= 1	; MAC Personal Area Network ID
.equ	PAN_ID_02	= 2	; MAC Personal Area Network ID
.equ	PAN_ID_03	= 3	; MAC Personal Area Network ID
.equ	PAN_ID_04	= 4	; MAC Personal Area Network ID
.equ	PAN_ID_05	= 5	; MAC Personal Area Network ID
.equ	PAN_ID_06	= 6	; MAC Personal Area Network ID
.equ	PAN_ID_07	= 7	; MAC Personal Area Network ID

; PAN_ID_1 - Transceiver Personal Area Network ID Register (High Byte)
.equ	PAN_ID_10	= 0	; MAC Personal Area Network ID
.equ	PAN_ID_11	= 1	; MAC Personal Area Network ID
.equ	PAN_ID_12	= 2	; MAC Personal Area Network ID
.equ	PAN_ID_13	= 3	; MAC Personal Area Network ID
.equ	PAN_ID_14	= 4	; MAC Personal Area Network ID
.equ	PAN_ID_15	= 5	; MAC Personal Area Network ID
.equ	PAN_ID_16	= 6	; MAC Personal Area Network ID
.equ	PAN_ID_17	= 7	; MAC Personal Area Network ID

; IEEE_ADDR_0 - Transceiver MAC IEEE Address Register 0
.equ	IEEE_ADDR_00	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_01	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_02	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_03	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_04	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_05	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_06	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_07	= 7	; MAC IEEE Address

; IEEE_ADDR_1 - Transceiver MAC IEEE Address Register 1
.equ	IEEE_ADDR_10	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_11	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_12	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_13	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_14	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_15	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_16	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_17	= 7	; MAC IEEE Address

; IEEE_ADDR_2 - Transceiver MAC IEEE Address Register 2
.equ	IEEE_ADDR_20	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_21	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_22	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_23	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_24	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_25	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_26	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_27	= 7	; MAC IEEE Address

; IEEE_ADDR_3 - Transceiver MAC IEEE Address Register 3
.equ	IEEE_ADDR_30	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_31	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_32	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_33	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_34	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_35	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_36	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_37	= 7	; MAC IEEE Address

; IEEE_ADDR_4 - Transceiver MAC IEEE Address Register 4
.equ	IEEE_ADDR_40	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_41	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_42	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_43	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_44	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_45	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_46	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_47	= 7	; MAC IEEE Address

; IEEE_ADDR_5 - Transceiver MAC IEEE Address Register 5
.equ	IEEE_ADDR_50	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_51	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_52	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_53	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_54	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_55	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_56	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_57	= 7	; MAC IEEE Address

; IEEE_ADDR_6 - Transceiver MAC IEEE Address Register 6
.equ	IEEE_ADDR_60	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_61	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_62	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_63	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_64	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_65	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_66	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_67	= 7	; MAC IEEE Address

; IEEE_ADDR_7 - Transceiver MAC IEEE Address Register 7
.equ	IEEE_ADDR_70	= 0	; MAC IEEE Address
.equ	IEEE_ADDR_71	= 1	; MAC IEEE Address
.equ	IEEE_ADDR_72	= 2	; MAC IEEE Address
.equ	IEEE_ADDR_73	= 3	; MAC IEEE Address
.equ	IEEE_ADDR_74	= 4	; MAC IEEE Address
.equ	IEEE_ADDR_75	= 5	; MAC IEEE Address
.equ	IEEE_ADDR_76	= 6	; MAC IEEE Address
.equ	IEEE_ADDR_77	= 7	; MAC IEEE Address

; XAH_CTRL_0 - Transceiver Extended Operating Mode Control Register
.equ	SLOTTED_OPERATION	= 0	; Set Slotted Acknowledgment
.equ	MAX_CSMA_RETRIES0	= 1	; Maximum Number of CSMA-CA Procedure Repetition Attempts
.equ	MAX_CSMA_RETRIES1	= 2	; Maximum Number of CSMA-CA Procedure Repetition Attempts
.equ	MAX_CSMA_RETRIES2	= 3	; Maximum Number of CSMA-CA Procedure Repetition Attempts
.equ	MAX_FRAME_RETRIES0	= 4	; Maximum Number of Frame Re-transmission Attempts
.equ	MAX_FRAME_RETRIES1	= 5	; Maximum Number of Frame Re-transmission Attempts
.equ	MAX_FRAME_RETRIES2	= 6	; Maximum Number of Frame Re-transmission Attempts
.equ	MAX_FRAME_RETRIES3	= 7	; Maximum Number of Frame Re-transmission Attempts

; CSMA_SEED_0 - Transceiver CSMA-CA Random Number Generator Seed Register
.equ	CSMA_SEED_00	= 0	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_01	= 1	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_02	= 2	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_03	= 3	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_04	= 4	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_05	= 5	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_06	= 6	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_07	= 7	; Seed Value for CSMA Random Number Generator

; CSMA_SEED_1 - Transceiver Acknowledgment Frame Control Register 2
.equ	CSMA_SEED_10	= 0	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_11	= 1	; Seed Value for CSMA Random Number Generator
.equ	CSMA_SEED_12	= 2	; Seed Value for CSMA Random Number Generator
.equ	AACK_I_AM_COORD	= 3	; Set Personal Area Network Coordinator
.equ	AACK_DIS_ACK	= 4	; Disable Acknowledgment Frame Transmission
.equ	AACK_SET_PD	= 5	; Set Frame Pending Sub-field
.equ	AACK_FVN_MODE0	= 6	; Acknowledgment Frame Filter Mode
.equ	AACK_FVN_MODE1	= 7	; Acknowledgment Frame Filter Mode

; CSMA_BE - Transceiver CSMA-CA Back-off Exponent Control Register
.equ	MIN_BE0	= 0	; Minimum Back-off Exponent
.equ	MIN_BE1	= 1	; Minimum Back-off Exponent
.equ	MIN_BE2	= 2	; Minimum Back-off Exponent
.equ	MIN_BE3	= 3	; Minimum Back-off Exponent
.equ	MAX_BE0	= 4	; Maximum Back-off Exponent
.equ	MAX_BE1	= 5	; Maximum Back-off Exponent
.equ	MAX_BE2	= 6	; Maximum Back-off Exponent
.equ	MAX_BE3	= 7	; Maximum Back-off Exponent

; TST_CTRL_DIGI - Transceiver Digital Test Control Register
.equ	TST_CTRL_DIG0	= 0	; Digital Test Controller Register
.equ	TST_CTRL_DIG1	= 1	; Digital Test Controller Register
.equ	TST_CTRL_DIG2	= 2	; Digital Test Controller Register
.equ	TST_CTRL_DIG3	= 3	; Digital Test Controller Register

; TST_RX_LENGTH - Transceiver Received Frame Length Register
.equ	RX_LENGTH0	= 0	; Received Frame Length
.equ	RX_LENGTH1	= 1	; Received Frame Length
.equ	RX_LENGTH2	= 2	; Received Frame Length
.equ	RX_LENGTH3	= 3	; Received Frame Length
.equ	RX_LENGTH4	= 4	; Received Frame Length
.equ	RX_LENGTH5	= 5	; Received Frame Length
.equ	RX_LENGTH6	= 6	; Received Frame Length
.equ	RX_LENGTH7	= 7	; Received Frame Length

; TRXFBST - Start of frame buffer
.equ	TRXFBST0	= 0	; Frame Buffer Start Byte
.equ	TRXFBST1	= 1	; Frame Buffer Start Byte
.equ	TRXFBST2	= 2	; Frame Buffer Start Byte
.equ	TRXFBST3	= 3	; Frame Buffer Start Byte
.equ	TRXFBST4	= 4	; Frame Buffer Start Byte
.equ	TRXFBST5	= 5	; Frame Buffer Start Byte
.equ	TRXFBST6	= 6	; Frame Buffer Start Byte
.equ	TRXFBST7	= 7	; Frame Buffer Start Byte

; TRXFBEND - End of frame buffer
.equ	TRXFBEND0	= 0	; Frame Buffer End Byte
.equ	TRXFBEND1	= 1	; Frame Buffer End Byte
.equ	TRXFBEND2	= 2	; Frame Buffer End Byte
.equ	TRXFBEND3	= 3	; Frame Buffer End Byte
.equ	TRXFBEND4	= 4	; Frame Buffer End Byte
.equ	TRXFBEND5	= 5	; Frame Buffer End Byte
.equ	TRXFBEND6	= 6	; Frame Buffer End Byte
.equ	TRXFBEND7	= 7	; Frame Buffer End Byte


; ***** SYMCNT ***********************
; SCOCR1HH - Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH0	= 0	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH1	= 1	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH2	= 2	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH3	= 3	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH4	= 4	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH5	= 5	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH6	= 6	; Symbol Counter Output Compare Register 1 HH-Byte
.equ	SCOCR1HH7	= 7	; Symbol Counter Output Compare Register 1 HH-Byte

; SCOCR1HL - Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL0	= 0	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL1	= 1	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL2	= 2	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL3	= 3	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL4	= 4	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL5	= 5	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL6	= 6	; Symbol Counter Output Compare Register 1 HL-Byte
.equ	SCOCR1HL7	= 7	; Symbol Counter Output Compare Register 1 HL-Byte

; SCOCR1LH - Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH0	= 0	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH1	= 1	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH2	= 2	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH3	= 3	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH4	= 4	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH5	= 5	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH6	= 6	; Symbol Counter Output Compare Register 1 LH-Byte
.equ	SCOCR1LH7	= 7	; Symbol Counter Output Compare Register 1 LH-Byte

; SCOCR1LL - Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL0	= 0	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL1	= 1	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL2	= 2	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL3	= 3	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL4	= 4	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL5	= 5	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL6	= 6	; Symbol Counter Output Compare Register 1 LL-Byte
.equ	SCOCR1LL7	= 7	; Symbol Counter Output Compare Register 1 LL-Byte

; SCOCR2HH - Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH0	= 0	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH1	= 1	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH2	= 2	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH3	= 3	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH4	= 4	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH5	= 5	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH6	= 6	; Symbol Counter Output Compare Register 2 HH-Byte
.equ	SCOCR2HH7	= 7	; Symbol Counter Output Compare Register 2 HH-Byte

; SCOCR2HL - Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL0	= 0	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL1	= 1	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL2	= 2	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL3	= 3	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL4	= 4	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL5	= 5	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL6	= 6	; Symbol Counter Output Compare Register 2 HL-Byte
.equ	SCOCR2HL7	= 7	; Symbol Counter Output Compare Register 2 HL-Byte

; SCOCR2LH - Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH0	= 0	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH1	= 1	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH2	= 2	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH3	= 3	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH4	= 4	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH5	= 5	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH6	= 6	; Symbol Counter Output Compare Register 2 LH-Byte
.equ	SCOCR2LH7	= 7	; Symbol Counter Output Compare Register 2 LH-Byte

; SCOCR2LL - Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL0	= 0	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL1	= 1	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL2	= 2	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL3	= 3	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL4	= 4	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL5	= 5	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL6	= 6	; Symbol Counter Output Compare Register 2 LL-Byte
.equ	SCOCR2LL7	= 7	; Symbol Counter Output Compare Register 2 LL-Byte

; SCOCR3HH - Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH0	= 0	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH1	= 1	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH2	= 2	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH3	= 3	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH4	= 4	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH5	= 5	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH6	= 6	; Symbol Counter Output Compare Register 3 HH-Byte
.equ	SCOCR3HH7	= 7	; Symbol Counter Output Compare Register 3 HH-Byte

; SCOCR3HL - Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL0	= 0	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL1	= 1	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL2	= 2	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL3	= 3	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL4	= 4	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL5	= 5	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL6	= 6	; Symbol Counter Output Compare Register 3 HL-Byte
.equ	SCOCR3HL7	= 7	; Symbol Counter Output Compare Register 3 HL-Byte

; SCOCR3LH - Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH0	= 0	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH1	= 1	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH2	= 2	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH3	= 3	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH4	= 4	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH5	= 5	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH6	= 6	; Symbol Counter Output Compare Register 3 LH-Byte
.equ	SCOCR3LH7	= 7	; Symbol Counter Output Compare Register 3 LH-Byte

; SCOCR3LL - Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL0	= 0	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL1	= 1	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL2	= 2	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL3	= 3	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL4	= 4	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL5	= 5	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL6	= 6	; Symbol Counter Output Compare Register 3 LL-Byte
.equ	SCOCR3LL7	= 7	; Symbol Counter Output Compare Register 3 LL-Byte

; SCTSRHH - Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH0	= 0	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH1	= 1	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH2	= 2	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH3	= 3	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH4	= 4	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH5	= 5	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH6	= 6	; Symbol Counter Frame Timestamp Register HH-Byte
.equ	SCTSRHH7	= 7	; Symbol Counter Frame Timestamp Register HH-Byte

; SCTSRHL - Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL0	= 0	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL1	= 1	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL2	= 2	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL3	= 3	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL4	= 4	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL5	= 5	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL6	= 6	; Symbol Counter Frame Timestamp Register HL-Byte
.equ	SCTSRHL7	= 7	; Symbol Counter Frame Timestamp Register HL-Byte

; SCTSRLH - Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH0	= 0	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH1	= 1	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH2	= 2	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH3	= 3	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH4	= 4	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH5	= 5	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH6	= 6	; Symbol Counter Frame Timestamp Register LH-Byte
.equ	SCTSRLH7	= 7	; Symbol Counter Frame Timestamp Register LH-Byte

; SCTSRLL - Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL0	= 0	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL1	= 1	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL2	= 2	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL3	= 3	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL4	= 4	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL5	= 5	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL6	= 6	; Symbol Counter Frame Timestamp Register LL-Byte
.equ	SCTSRLL7	= 7	; Symbol Counter Frame Timestamp Register LL-Byte

; SCBTSRHH - Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH0	= 0	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH1	= 1	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH2	= 2	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH3	= 3	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH4	= 4	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH5	= 5	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH6	= 6	; Symbol Counter Beacon Timestamp Register HH-Byte
.equ	SCBTSRHH7	= 7	; Symbol Counter Beacon Timestamp Register HH-Byte

; SCBTSRHL - Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL0	= 0	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL1	= 1	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL2	= 2	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL3	= 3	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL4	= 4	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL5	= 5	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL6	= 6	; Symbol Counter Beacon Timestamp Register HL-Byte
.equ	SCBTSRHL7	= 7	; Symbol Counter Beacon Timestamp Register HL-Byte

; SCBTSRLH - Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH0	= 0	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH1	= 1	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH2	= 2	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH3	= 3	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH4	= 4	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH5	= 5	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH6	= 6	; Symbol Counter Beacon Timestamp Register LH-Byte
.equ	SCBTSRLH7	= 7	; Symbol Counter Beacon Timestamp Register LH-Byte

; SCBTSRLL - Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL0	= 0	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL1	= 1	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL2	= 2	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL3	= 3	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL4	= 4	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL5	= 5	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL6	= 6	; Symbol Counter Beacon Timestamp Register LL-Byte
.equ	SCBTSRLL7	= 7	; Symbol Counter Beacon Timestamp Register LL-Byte

; SCCNTHH - Symbol Counter Register HH-Byte
.equ	SCCNTHH0	= 0	; Symbol Counter Register HH-Byte
.equ	SCCNTHH1	= 1	; Symbol Counter Register HH-Byte
.equ	SCCNTHH2	= 2	; Symbol Counter Register HH-Byte
.equ	SCCNTHH3	= 3	; Symbol Counter Register HH-Byte
.equ	SCCNTHH4	= 4	; Symbol Counter Register HH-Byte
.equ	SCCNTHH5	= 5	; Symbol Counter Register HH-Byte
.equ	SCCNTHH6	= 6	; Symbol Counter Register HH-Byte
.equ	SCCNTHH7	= 7	; Symbol Counter Register HH-Byte

; SCCNTHL - Symbol Counter Register HL-Byte
.equ	SCCNTHL0	= 0	; Symbol Counter Register HL-Byte
.equ	SCCNTHL1	= 1	; Symbol Counter Register HL-Byte
.equ	SCCNTHL2	= 2	; Symbol Counter Register HL-Byte
.equ	SCCNTHL3	= 3	; Symbol Counter Register HL-Byte
.equ	SCCNTHL4	= 4	; Symbol Counter Register HL-Byte
.equ	SCCNTHL5	= 5	; Symbol Counter Register HL-Byte
.equ	SCCNTHL6	= 6	; Symbol Counter Register HL-Byte
.equ	SCCNTHL7	= 7	; Symbol Counter Register HL-Byte

; SCCNTLH - Symbol Counter Register LH-Byte
.equ	SCCNTLH0	= 0	; Symbol Counter Register LH-Byte
.equ	SCCNTLH1	= 1	; Symbol Counter Register LH-Byte
.equ	SCCNTLH2	= 2	; Symbol Counter Register LH-Byte
.equ	SCCNTLH3	= 3	; Symbol Counter Register LH-Byte
.equ	SCCNTLH4	= 4	; Symbol Counter Register LH-Byte
.equ	SCCNTLH5	= 5	; Symbol Counter Register LH-Byte
.equ	SCCNTLH6	= 6	; Symbol Counter Register LH-Byte
.equ	SCCNTLH7	= 7	; Symbol Counter Register LH-Byte

; SCCNTLL - Symbol Counter Register LL-Byte
.equ	SCCNTLL0	= 0	; Symbol Counter Register LL-Byte
.equ	SCCNTLL1	= 1	; Symbol Counter Register LL-Byte
.equ	SCCNTLL2	= 2	; Symbol Counter Register LL-Byte
.equ	SCCNTLL3	= 3	; Symbol Counter Register LL-Byte
.equ	SCCNTLL4	= 4	; Symbol Counter Register LL-Byte
.equ	SCCNTLL5	= 5	; Symbol Counter Register LL-Byte
.equ	SCCNTLL6	= 6	; Symbol Counter Register LL-Byte
.equ	SCCNTLL7	= 7	; Symbol Counter Register LL-Byte

; SCCR0 - Symbol Counter Control Register 0
.equ	SCCMP1	= 0	; Symbol Counter Compare Unit 1 Mode select
.equ	SCCMP2	= 1	; Symbol Counter Compare Unit 2 Mode select
.equ	SCCMP3	= 2	; Symbol Counter Compare Unit 3 Mode select
.equ	SCTSE	= 3	; Symbol Counter Automatic Timestamping enable
.equ	SCCKSEL	= 4	; Symbol Counter Clock Source select
.equ	SCEN	= 5	; Symbol Counter enable
.equ	SCMBTS	= 6	; Manual Beacon Timestamp
.equ	SCRES	= 7	; Symbol Counter Synchronization

; SCCR1 - Symbol Counter Control Register 1
.equ	SCENBO	= 0	; Backoff Slot Counter enable
;.equ	Res0	= 1	; Reserved Bit
;.equ	Res1	= 2	; Reserved Bit
;.equ	Res2	= 3	; Reserved Bit
;.equ	Res3	= 4	; Reserved Bit
;.equ	Res4	= 5	; Reserved Bit
;.equ	Res5	= 6	; Reserved Bit
;.equ	Res6	= 7	; Reserved Bit

; SCSR - Symbol Counter Status Register
.equ	SCBSY	= 0	; Symbol Counter busy
;.equ	Res0	= 1	; Reserved Bit
;.equ	Res1	= 2	; Reserved Bit
;.equ	Res2	= 3	; Reserved Bit
;.equ	Res3	= 4	; Reserved Bit
;.equ	Res4	= 5	; Reserved Bit
;.equ	Res5	= 6	; Reserved Bit
;.equ	Res6	= 7	; Reserved Bit

; SCIRQS - Symbol Counter Interrupt Status Register
.equ	IRQSCP1	= 0	; Compare Unit 1 Compare Match IRQ
.equ	IRQSCP2	= 1	; Compare Unit 2 Compare Match IRQ
.equ	IRQSCP3	= 2	; Compare Unit 3 Compare Match IRQ
.equ	IRQSOF	= 3	; Symbol Counter Overflow IRQ
.equ	IRQSBO	= 4	; Backoff Slot Counter IRQ
;.equ	Res0	= 5	; Reserved Bit
;.equ	Res1	= 6	; Reserved Bit
;.equ	Res2	= 7	; Reserved Bit

; SCIRQM - Symbol Counter Interrupt Mask Register
.equ	IRQMCP1	= 0	; Symbol Counter Compare Match 1 IRQ enable
.equ	IRQMCP2	= 1	; Symbol Counter Compare Match 2 IRQ enable
.equ	IRQMCP3	= 2	; Symbol Counter Compare Match 3 IRQ enable
.equ	IRQMOF	= 3	; Symbol Counter Overflow IRQ enable
.equ	IRQMBO	= 4	; Backoff Slot Counter IRQ enable
;.equ	Res0	= 5	; Reserved Bit
;.equ	Res1	= 6	; Reserved Bit
;.equ	Res2	= 7	; Reserved Bit


; ***** EEPROM ***********************
; EEARH - EEPROM Address Register High Byte
.equ	EEAR8	= 0	; EEPROM Address
.equ	EEAR9	= 1	; EEPROM Address
.equ	EEAR10	= 2	; EEPROM Address
.equ	EEAR11	= 3	; EEPROM Address
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
;.equ	Res3	= 7	; Reserved

; EEARL - EEPROM Address Register Low Byte
.equ	EEAR0	= 0	; EEPROM Address
.equ	EEAR1	= 1	; EEPROM Address
.equ	EEAR2	= 2	; EEPROM Address
.equ	EEAR3	= 3	; EEPROM Address
.equ	EEAR4	= 4	; EEPROM Address
.equ	EEAR5	= 5	; EEPROM Address
.equ	EEAR6	= 6	; EEPROM Address
.equ	EEAR7	= 7	; EEPROM Address

; EEDR - EEPROM Data Register
.equ	EEDR0	= 0	; EEPROM Data
.equ	EEDR1	= 1	; EEPROM Data
.equ	EEDR2	= 2	; EEPROM Data
.equ	EEDR3	= 3	; EEPROM Data
.equ	EEDR4	= 4	; EEPROM Data
.equ	EEDR5	= 5	; EEPROM Data
.equ	EEDR6	= 6	; EEPROM Data
.equ	EEDR7	= 7	; EEPROM Data

; EECR - EEPROM Control Register
.equ	EERE	= 0	; EEPROM Read Enable
.equ	EEPE	= 1	; EEPROM Programming Enable
.equ	EEMPE	= 2	; EEPROM Master Write Enable
.equ	EERIE	= 3	; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4	; EEPROM Programming Mode
.equ	EEPM1	= 5	; EEPROM Programming Mode
;.equ	Res0	= 6	; Reserved
;.equ	Res1	= 7	; Reserved


; ***** JTAG *************************
; OCDR - On-Chip Debug Register
.equ	OCDR0	= 0	; On-Chip Debug Register Data
.equ	OCDR1	= 1	; On-Chip Debug Register Data
.equ	OCDR2	= 2	; On-Chip Debug Register Data
.equ	OCDR3	= 3	; On-Chip Debug Register Data
.equ	OCDR4	= 4	; On-Chip Debug Register Data
.equ	OCDR5	= 5	; On-Chip Debug Register Data
.equ	OCDR6	= 6	; On-Chip Debug Register Data
.equ	OCDR7	= 7	; On-Chip Debug Register Data
.equ	IDRD	= OCDR7	; For compatibility

; MCUCR - MCU Control Register
.equ	JTD	= 7	; JTAG Interface Disable

; MCUSR - MCU Status Register
.equ	JTRF	= 4	; JTAG Reset Flag


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0	; External Interrupt 0 Sense Control Bit
.equ	ISC01	= 1	; External Interrupt 0 Sense Control Bit
.equ	ISC10	= 2	; External Interrupt 1 Sense Control Bit
.equ	ISC11	= 3	; External Interrupt 1 Sense Control Bit
.equ	ISC20	= 4	; External Interrupt 2 Sense Control Bit
.equ	ISC21	= 5	; External Interrupt 2 Sense Control Bit
.equ	ISC30	= 6	; External Interrupt 3 Sense Control Bit
.equ	ISC31	= 7	; External Interrupt 3 Sense Control Bit

; EICRB - External Interrupt Control Register B
.equ	ISC40	= 0	; External Interrupt 4 Sense Control Bit
.equ	ISC41	= 1	; External Interrupt 4 Sense Control Bit
.equ	ISC50	= 2	; External Interrupt 5 Sense Control Bit
.equ	ISC51	= 3	; External Interrupt 5 Sense Control Bit
.equ	ISC60	= 4	; External Interrupt 6 Sense Control Bit
.equ	ISC61	= 5	; External Interrupt 6 Sense Control Bit
.equ	ISC70	= 6	; External Interrupt 7 Sense Control Bit
.equ	ISC71	= 7	; External Interrupt 7 Sense Control Bit

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request Enable
.equ	INT1	= 1	; External Interrupt Request Enable
.equ	INT2	= 2	; External Interrupt Request Enable
.equ	INT3	= 3	; External Interrupt Request Enable
.equ	INT4	= 4	; External Interrupt Request Enable
.equ	INT5	= 5	; External Interrupt Request Enable
.equ	INT6	= 6	; External Interrupt Request Enable
.equ	INT7	= 7	; External Interrupt Request Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag
.equ	INTF1	= 1	; External Interrupt Flag
.equ	INTF2	= 2	; External Interrupt Flag
.equ	INTF3	= 3	; External Interrupt Flag
.equ	INTF4	= 4	; External Interrupt Flag
.equ	INTF5	= 5	; External Interrupt Flag
.equ	INTF6	= 6	; External Interrupt Flag
.equ	INTF7	= 7	; External Interrupt Flag

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1	; Pin Change Interrupt Enable 1
.equ	PCIE2	= 2	; Pin Change Interrupt Enable 2
;.equ	Res0	= 3	; Reserved Bit
;.equ	Res1	= 4	; Reserved Bit
;.equ	Res2	= 5	; Reserved Bit
;.equ	Res3	= 6	; Reserved Bit
;.equ	Res4	= 7	; Reserved Bit

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1
.equ	PCIF2	= 2	; Pin Change Interrupt Flag 2
;.equ	Res0	= 3	; Reserved Bit
;.equ	Res1	= 4	; Reserved Bit
;.equ	Res2	= 5	; Reserved Bit
;.equ	Res3	= 6	; Reserved Bit
;.equ	Res4	= 7	; Reserved Bit

; PCMSK2 - Pin Change Mask Register 2
.equ	PCINT16	= 0	; Pin Change Enable Mask
.equ	PCINT17	= 1	; Pin Change Enable Mask
.equ	PCINT18	= 2	; Pin Change Enable Mask
.equ	PCINT19	= 3	; Pin Change Enable Mask
.equ	PCINT20	= 4	; Pin Change Enable Mask
.equ	PCINT21	= 5	; Pin Change Enable Mask
.equ	PCINT22	= 6	; Pin Change Enable Mask
.equ	PCINT23	= 7	; Pin Change Enable Mask

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; Pin Change Enable Mask 8
.equ	PCINT9	= 1	; Pin Change Enable Mask
.equ	PCINT10	= 2	; Pin Change Enable Mask
.equ	PCINT11	= 3	; Pin Change Enable Mask
.equ	PCINT12	= 4	; Pin Change Enable Mask
.equ	PCINT13	= 5	; Pin Change Enable Mask
.equ	PCINT14	= 6	; Pin Change Enable Mask
.equ	PCINT15	= 7	; Pin Change Enable Mask

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask
.equ	PCINT1	= 1	; Pin Change Enable Mask
.equ	PCINT2	= 2	; Pin Change Enable Mask
.equ	PCINT3	= 3	; Pin Change Enable Mask
.equ	PCINT4	= 4	; Pin Change Enable Mask
.equ	PCINT5	= 5	; Pin Change Enable Mask
.equ	PCINT6	= 6	; Pin Change Enable Mask
.equ	PCINT7	= 7	; Pin Change Enable Mask


; ***** AD_CONVERTER *****************
; ADMUX - The ADC Multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
.equ	MUX4	= 4	; Analog Channel and Gain Selection Bits
.equ	ADLAR	= 5	; ADC Left Adjust Result
.equ	REFS0	= 6	; Reference Selection Bits
.equ	REFS1	= 7	; Reference Selection Bits

; ADCSRA - The ADC Control and Status Register A
.equ	ADPS0	= 0	; ADC  Prescaler Select Bits
.equ	ADPS1	= 1	; ADC  Prescaler Select Bits
.equ	ADPS2	= 2	; ADC  Prescaler Select Bits
.equ	ADIE	= 3	; ADC Interrupt Enable
.equ	ADIF	= 4	; ADC Interrupt Flag
.equ	ADATE	= 5	; ADC Auto Trigger Enable
.equ	ADSC	= 6	; ADC Start Conversion
.equ	ADEN	= 7	; ADC Enable

; ADCSRB - The ADC Control and Status Register B
.equ	ADTS0	= 0	; ADC Auto Trigger Source
.equ	ADTS1	= 1	; ADC Auto Trigger Source
.equ	ADTS2	= 2	; ADC Auto Trigger Source
.equ	MUX5	= 3	; Analog Channel and Gain Selection Bits
.equ	ACCH	= 4	; Analog Channel Change
.equ	REFOK	= 5	; Reference Voltage OK
;.equ	ACME	= 6	; Analog Comparator Multiplexer Enable
.equ	AVDDOK	= 7	; AVDD Supply Voltage OK

; ADCSRC - The ADC Control and Status Register C
.equ	ADSUT0	= 0	; ADC Start-up Time
.equ	ADSUT1	= 1	; ADC Start-up Time
.equ	ADSUT2	= 2	; ADC Start-up Time
.equ	ADSUT3	= 3	; ADC Start-up Time
.equ	ADSUT4	= 4	; ADC Start-up Time
;.equ	Res0	= 5	; Reserved
.equ	ADTHT0	= 6	; ADC Track-and-Hold Time
.equ	ADTHT1	= 7	; ADC Track-and-Hold Time

; ADCH - ADC Data Register High Byte
.equ	ADCH0	= 0	; ADC Data Register High Byte
.equ	ADCH1	= 1	; ADC Data Register High Byte
.equ	ADCH2	= 2	; ADC Data Register High Byte
.equ	ADCH3	= 3	; ADC Data Register High Byte
.equ	ADCH4	= 4	; ADC Data Register High Byte
.equ	ADCH5	= 5	; ADC Data Register High Byte
.equ	ADCH6	= 6	; ADC Data Register High Byte
.equ	ADCH7	= 7	; ADC Data Register High Byte

; ADCL - ADC Data Register Low Byte
.equ	ADCL0	= 0	; ADC Data Register Low Byte
.equ	ADCL1	= 1	; ADC Data Register Low Byte
.equ	ADCL2	= 2	; ADC Data Register Low Byte
.equ	ADCL3	= 3	; ADC Data Register Low Byte
.equ	ADCL4	= 4	; ADC Data Register Low Byte
.equ	ADCL5	= 5	; ADC Data Register Low Byte
.equ	ADCL6	= 6	; ADC Data Register Low Byte
.equ	ADCL7	= 7	; ADC Data Register Low Byte

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; Disable ADC7:0 Digital Input
.equ	ADC1D	= 1	; Disable ADC7:0 Digital Input
.equ	ADC2D	= 2	; Disable ADC7:0 Digital Input
.equ	ADC3D	= 3	; Disable ADC7:0 Digital Input
.equ	ADC4D	= 4	; Disable ADC7:0 Digital Input
.equ	ADC5D	= 5	; Disable ADC7:0 Digital Input
.equ	ADC6D	= 6	; Disable ADC7:0 Digital Input
.equ	ADC7D	= 7	; Disable ADC7:0 Digital Input

; DIDR2 - Digital Input Disable Register 2
.equ	ADC8D	= 0	; Reserved Bits
.equ	ADC9D	= 1	; Reserved Bits
.equ	ADC10D	= 2	; Reserved Bits
.equ	ADC11D	= 3	; Reserved Bits
.equ	ADC12D	= 4	; Reserved Bits
.equ	ADC13D	= 5	; Reserved Bits
.equ	ADC14D	= 6	; Reserved Bits
.equ	ADC15D	= 7	; Reserved Bits


; ***** BOOT_LOAD ********************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	BLBSET	= 3	; Boot Lock Bit Set
.equ	RWWSRE	= 4	; Read While Write Section Read Enable
.equ	SIGRD	= 5	; Signature Row Read
.equ	RWWSB	= 6	; Read While Write Section Busy
.equ	SPMIE	= 7	; SPM Interrupt Enable


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
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
.equ	PUD	= 4	; Pull-up Disable
;.equ	Res0	= 5	; Reserved
;.equ	Res1	= 6	; Reserved
;.equ	JTD	= 7	; JTAG Interface Disable

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on Reset Flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag
;.equ	JTRF	= 4	; JTAG Reset Flag
;.equ	Res0	= 5	; Reserved
;.equ	Res1	= 6	; Reserved
;.equ	Res2	= 7	; Reserved

; OSCCAL - Oscillator Calibration Value
.equ	CAL0	= 0	; Oscillator Calibration Tuning Value
.equ	CAL1	= 1	; Oscillator Calibration Tuning Value
.equ	CAL2	= 2	; Oscillator Calibration Tuning Value
.equ	CAL3	= 3	; Oscillator Calibration Tuning Value
.equ	CAL4	= 4	; Oscillator Calibration Tuning Value
.equ	CAL5	= 5	; Oscillator Calibration Tuning Value
.equ	CAL6	= 6	; Oscillator Calibration Tuning Value
.equ	CAL7	= 7	; Oscillator Calibration Tuning Value

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bits
.equ	CLKPS1	= 1	; Clock Prescaler Select Bits
.equ	CLKPS2	= 2	; Clock Prescaler Select Bits
.equ	CLKPS3	= 3	; Clock Prescaler Select Bits
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
.equ	CLKPCE	= 7	; Clock Prescaler Change Enable

; SMCR - Sleep Mode Control Register
.equ	SE	= 0	; Sleep Enable
.equ	SM0	= 1	; Sleep Mode Select bit 0
.equ	SM1	= 2	; Sleep Mode Select bit 1
.equ	SM2	= 3	; Sleep Mode Select bit 2
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
;.equ	Res3	= 7	; Reserved

; RAMPZ - Extended Z-pointer Register for ELPM/SPM
.equ	RAMPZ0	= 0	; Extended Z-Pointer Value
.equ	RAMPZ1	= 1	; Extended Z-Pointer Value
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
;.equ	Res2	= 4	; Reserved
;.equ	Res3	= 5	; Reserved
;.equ	Res4	= 6	; Reserved
;.equ	Res5	= 7	; Reserved

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0	; General Purpose I/O Register 2 Value
.equ	GPIOR21	= 1	; General Purpose I/O Register 2 Value
.equ	GPIOR22	= 2	; General Purpose I/O Register 2 Value
.equ	GPIOR23	= 3	; General Purpose I/O Register 2 Value
.equ	GPIOR24	= 4	; General Purpose I/O Register 2 Value
.equ	GPIOR25	= 5	; General Purpose I/O Register 2 Value
.equ	GPIOR26	= 6	; General Purpose I/O Register 2 Value
.equ	GPIOR27	= 7	; General Purpose I/O Register 2 Value

; GPIOR1 - General Purpose IO Register 1
.equ	GPIOR10	= 0	; General Purpose I/O Register 1 Value
.equ	GPIOR11	= 1	; General Purpose I/O Register 1 Value
.equ	GPIOR12	= 2	; General Purpose I/O Register 1 Value
.equ	GPIOR13	= 3	; General Purpose I/O Register 1 Value
.equ	GPIOR14	= 4	; General Purpose I/O Register 1 Value
.equ	GPIOR15	= 5	; General Purpose I/O Register 1 Value
.equ	GPIOR16	= 6	; General Purpose I/O Register 1 Value
.equ	GPIOR17	= 7	; General Purpose I/O Register 1 Value

; GPIOR0 - General Purpose IO Register 0
.equ	GPIOR00	= 0	; General Purpose I/O Register 0 Value
.equ	GPIOR01	= 1	; General Purpose I/O Register 0 Value
.equ	GPIOR02	= 2	; General Purpose I/O Register 0 Value
.equ	GPIOR03	= 3	; General Purpose I/O Register 0 Value
.equ	GPIOR04	= 4	; General Purpose I/O Register 0 Value
.equ	GPIOR05	= 5	; General Purpose I/O Register 0 Value
.equ	GPIOR06	= 6	; General Purpose I/O Register 0 Value
.equ	GPIOR07	= 7	; General Purpose I/O Register 0 Value

; PRR2 - Power Reduction Register 2
.equ	PRRAM0	= 0	; Power Reduction SRAM 0
.equ	PRRAM1	= 1	; Power Reduction SRAM 1
.equ	PRRAM2	= 2	; Power Reduction SRAM 2
.equ	PRRAM3	= 3	; Power Reduction SRAM 3
;.equ	Res0	= 4	; Reserved Bit
;.equ	Res1	= 5	; Reserved Bit
;.equ	Res2	= 6	; Reserved Bit
;.equ	Res3	= 7	; Reserved Bit

; PRR1 - Power Reduction Register 1
.equ	PRUSART1	= 0	; Power Reduction USART1
.equ	PRUSART2	= 1	; Reserved
.equ	PRUSART3	= 2	; Reserved
.equ	PRTIM3	= 3	; Power Reduction Timer/Counter3
.equ	PRTIM4	= 4	; Power Reduction Timer/Counter4
.equ	PRTIM5	= 5	; Power Reduction Timer/Counter5
.equ	PRTRX24	= 6	; Power Reduction Transceiver
;.equ	Res	= 7	; Reserved Bit

; PRR0 - Power Reduction Register0
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRUSART0	= 1	; Power Reduction USART
.equ	PRSPI	= 2	; Power Reduction Serial Peripheral Interface
.equ	PRTIM1	= 3	; Power Reduction Timer/Counter1
.equ	PRPGA	= 4	; Power Reduction PGA
.equ	PRTIM0	= 5	; Power Reduction Timer/Counter0
.equ	PRTIM2	= 6	; Power Reduction Timer/Counter2
.equ	PRTWI	= 7	; Power Reduction TWI


; ***** FLASH ************************
; NEMCR - Flash Extended-Mode Control-Register
.equ	AEAM0	= 4	; Address for Extended Address Mode of Extra Rows
.equ	AEAM1	= 5	; Address for Extended Address Mode of Extra Rows
.equ	ENEAM	= 6	; Enable Extended Address Mode for Extra Rows

; BGCR - Reference Voltage Calibration Register
.equ	BGCAL0	= 0	; Coarse Calibration Bits
.equ	BGCAL1	= 1	; Coarse Calibration Bits
.equ	BGCAL2	= 2	; Coarse Calibration Bits
.equ	BGCAL_FINE0	= 3	; Fine Calibration Bits
.equ	BGCAL_FINE1	= 4	; Fine Calibration Bits
.equ	BGCAL_FINE2	= 5	; Fine Calibration Bits
.equ	BGCAL_FINE3	= 6	; Fine Calibration Bits
;.equ	Res	= 7	; Reserved Bit


; ***** PWRCTRL **********************
; TRXPR - Transceiver Pin Register
.equ	TRXRST	= 0	; Force Transceiver Reset
.equ	SLPTR	= 1	; Multi-purpose Transceiver Control Bit
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
;.equ	Res3	= 7	; Reserved

; DRTRAM0 - Data Retention Configuration Register of SRAM 0
.equ	ENDRT	= 4	; Enable SRAM Data Retention
.equ	DRTSWOK	= 5	; DRT Switch OK
;.equ	Res0	= 6	; Reserved
;.equ	Res1	= 7	; Reserved

; DRTRAM1 - Data Retention Configuration Register of SRAM 1
;.equ	ENDRT	= 4	; Enable SRAM Data Retention
;.equ	DRTSWOK	= 5	; DRT Switch OK
;.equ	Res0	= 6	; Reserved
;.equ	Res1	= 7	; Reserved

; DRTRAM2 - Data Retention Configuration Register of SRAM 2
;.equ	ENDRT	= 4	; Enable SRAM Data Retention
;.equ	DRTSWOK	= 5	; DRT Switch OK
;.equ	Res	= 6	; Reserved Bit

; DRTRAM3 - Data Retention Configuration Register of SRAM 3
;.equ	ENDRT	= 4	; Enable SRAM Data Retention
;.equ	DRTSWOK	= 5	; DRT Switch OK
;.equ	Res0	= 6	; Reserved
;.equ	Res1	= 7	; Reserved

; LLDRL - Low Leakage Voltage Regulator Data Register (Low-Byte)
.equ	LLDRL0	= 0	; Low-Byte Data Register Bits
.equ	LLDRL1	= 1	; Low-Byte Data Register Bits
.equ	LLDRL2	= 2	; Low-Byte Data Register Bits
.equ	LLDRL3	= 3	; Low-Byte Data Register Bits
;.equ	Res0	= 4	; Reserved
;.equ	Res1	= 5	; Reserved
;.equ	Res2	= 6	; Reserved
;.equ	Res3	= 7	; Reserved

; LLDRH - Low Leakage Voltage Regulator Data Register (High-Byte)
.equ	LLDRH0	= 0	; High-Byte Data Register Bits
.equ	LLDRH1	= 1	; High-Byte Data Register Bits
.equ	LLDRH2	= 2	; High-Byte Data Register Bits
.equ	LLDRH3	= 3	; High-Byte Data Register Bits
.equ	LLDRH4	= 4	; High-Byte Data Register Bits
;.equ	Res0	= 5	; Reserved
;.equ	Res1	= 6	; Reserved
;.equ	Res2	= 7	; Reserved

; LLCR - Low Leakage Voltage Regulator Control Register
.equ	LLENCAL	= 0	; Enable Automatic Calibration
.equ	LLSHORT	= 1	; Short Lower Calibration Circuit
.equ	LLTCO	= 2	; Temperature Coefficient of Current Source
.equ	LLCAL	= 3	; Calibration Active
.equ	LLCOMP	= 4	; Comparator Output
.equ	LLDONE	= 5	; Calibration Done
;.equ	Res0	= 6	; Reserved Bit
;.equ	Res1	= 7	; Reserved Bit

; DPDS0 - Port Driver Strength Register 0
.equ	PBDRV0	= 0	; Driver Strength Port B
.equ	PBDRV1	= 1	; Driver Strength Port B
.equ	PDDRV0	= 2	; Driver Strength Port D
.equ	PDDRV1	= 3	; Driver Strength Port D
.equ	PEDRV0	= 4	; Driver Strength Port E
.equ	PEDRV1	= 5	; Driver Strength Port E
.equ	PFDRV0	= 6	; Driver Strength Port F
.equ	PFDRV1	= 7	; Driver Strength Port F

; DPDS1 - Port Driver Strength Register 1
.equ	PGDRV0	= 0	; Driver Strength Port G
.equ	PGDRV1	= 1	; Driver Strength Port G
;.equ	Res0	= 2	; Reserved
;.equ	Res1	= 3	; Reserved
;.equ	Res2	= 4	; Reserved
;.equ	Res3	= 5	; Reserved
;.equ	Res4	= 6	; Reserved
;.equ	Res5	= 7	; Reserved

; MCUCR - MCU Control Register
;.equ	PUD	= 4	; Pull-up Disable


; ***** USART0_SPI *******************
; UCSR0A - USART0 MSPIM Control and Status Register A
;.equ	UDRE0	= 5	; USART Data Register Empty
;.equ	TXC0	= 6	; USART Transmit Complete
;.equ	RXC0	= 7	; USART Receive Complete

; UCSR0B - USART0 MSPIM Control and Status Register B
;.equ	TXEN0	= 3	; Transmitter Enable
;.equ	RXEN0	= 4	; Receiver Enable
;.equ	UDRIE0	= 5	; USART Data Register Empty Interrupt Enable
;.equ	TXCIE0	= 6	; TX Complete Interrupt Enable
;.equ	RXCIE0	= 7	; RX Complete Interrupt Enable

; UCSR0C - USART0 MSPIM Control and Status Register C
;.equ	UCPOL0	= 0	; Clock Polarity
;.equ	UCPHA0	= 1	; Clock Phase
;.equ	UCSZ00	= UCPHA0	; For compatibility
;.equ	UDORD0	= 2	; Data Order
;.equ	UCSZ01	= UDORD0	; For compatibility


; ***** USART1_SPI *******************
; UCSR1A - USART1 MSPIM Control and Status Register A
;.equ	UDRE1	= 5	; USART Data Register Empty
;.equ	TXC1	= 6	; USART Transmit Complete
;.equ	RXC1	= 7	; USART Receive Complete

; UCSR1B - USART1 MSPIM Control and Status Register B
;.equ	TXEN1	= 3	; Transmitter Enable
;.equ	RXEN1	= 4	; Receiver Enable
;.equ	UDRIE1	= 5	; USART Data Register Empty Interrupt Enable
;.equ	TXCIE1	= 6	; TX Complete Interrupt Enable
;.equ	RXCIE1	= 7	; RX Complete Interrupt Enable

; UCSR1C - USART1 MSPIM Control and Status Register C
;.equ	UCPOL1	= 0	; Clock Polarity
;.equ	UCPHA1	= 1	; Clock Phase
;.equ	UCSZ10	= UCPHA1	; For compatibility
;.equ	UDORD1	= 2	; Data Order
;.equ	UCSZ11	= UDORD1	; For compatibility



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
.equ	CKOUT	= 6	; Clock output
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
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown-out Detector trigger level



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0xffff	; Note: Word address
.equ	IOEND	= 0x01ff
.equ	SRAM_START	= 0x0200
.equ	SRAM_SIZE	= 16384
.equ	RAMEND	= 0x41ff
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x0fff
.equ	EEPROMEND	= 0x0fff
.equ	EEADRBITS	= 12
#pragma AVRPART MEMORY PROG_FLASH 131072
#pragma AVRPART MEMORY EEPROM 4096
#pragma AVRPART MEMORY INT_SRAM SIZE 16384
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x200



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0xf000
.equ	NRWW_STOP_ADDR	= 0xffff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0xefff
.equ	PAGESIZE	= 128
.equ	FIRSTBOOTSTART	= 0xfe00
.equ	SECONDBOOTSTART	= 0xfc00
.equ	THIRDBOOTSTART	= 0xf800
.equ	FOURTHBOOTSTART	= 0xf000
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
.equ	PCI0addr	= 0x0012	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x0014	; Pin Change Interrupt Request 1
.equ	PCI2addr	= 0x0016	; Pin Change Interrupt Request 2
.equ	WDTaddr	= 0x0018	; Watchdog Time-out Interrupt
.equ	OC2Aaddr	= 0x001a	; Timer/Counter2 Compare Match A
.equ	OC2Baddr	= 0x001c	; Timer/Counter2 Compare Match B
.equ	OVF2addr	= 0x001e	; Timer/Counter2 Overflow
.equ	ICP1addr	= 0x0020	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x0022	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x0024	; Timer/Counter1 Compare Match B
.equ	OC1Caddr	= 0x0026	; Timer/Counter1 Compare Match C
.equ	OVF1addr	= 0x0028	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x002a	; Timer/Counter0 Compare Match A
.equ	OC0Baddr	= 0x002c	; Timer/Counter0 Compare Match B
.equ	OVF0addr	= 0x002e	; Timer/Counter0 Overflow
.equ	SPIaddr	= 0x0030	; SPI Serial Transfer Complete
.equ	URXC0addr	= 0x0032	; USART0, Rx Complete
.equ	UDRE0addr	= 0x0034	; USART0 Data register Empty
.equ	UTXC0addr	= 0x0036	; USART0, Tx Complete
.equ	ACIaddr	= 0x0038	; Analog Comparator
.equ	ADCCaddr	= 0x003a	; ADC Conversion Complete
.equ	ERDYaddr	= 0x003c	; EEPROM Ready
.equ	ICP3addr	= 0x003e	; Timer/Counter3 Capture Event
.equ	OC3Aaddr	= 0x0040	; Timer/Counter3 Compare Match A
.equ	OC3Baddr	= 0x0042	; Timer/Counter3 Compare Match B
.equ	OC3Caddr	= 0x0044	; Timer/Counter3 Compare Match C
.equ	OVF3addr	= 0x0046	; Timer/Counter3 Overflow
.equ	URXC1addr	= 0x0048	; USART1, Rx Complete
.equ	UDRE1addr	= 0x004a	; USART1 Data register Empty
.equ	UTXC1addr	= 0x004c	; USART1, Tx Complete
.equ	TWIaddr	= 0x004e	; 2-wire Serial Interface
.equ	SPMRaddr	= 0x0050	; Store Program Memory Read
.equ	ICP4addr	= 0x0052	; Timer/Counter4 Capture Event
.equ	OC4Aaddr	= 0x0054	; Timer/Counter4 Compare Match A
.equ	OC4Baddr	= 0x0056	; Timer/Counter4 Compare Match B
.equ	OC4Caddr	= 0x0058	; Timer/Counter4 Compare Match C
.equ	OVF4addr	= 0x005a	; Timer/Counter4 Overflow
.equ	ICP5addr	= 0x005c	; Timer/Counter5 Capture Event
.equ	OC5Aaddr	= 0x005e	; Timer/Counter5 Compare Match A
.equ	OC5Baddr	= 0x0060	; Timer/Counter5 Compare Match B
.equ	OC5Caddr	= 0x0062	; Timer/Counter5 Compare Match C
.equ	OVF5addr	= 0x0064	; Timer/Counter5 Overflow
.equ	URXC2addr	= 0x0066	; USART2, Rx Complete
.equ	UDRE2addr	= 0x0068	; USART2 Data register Empty
.equ	UTXC2addr	= 0x006a	; USART2, Tx Complete
.equ	URXC3addr	= 0x006c	; USART3, Rx Complete
.equ	UDRE3addr	= 0x006e	; USART3 Data register Empty
.equ	UTXC3addr	= 0x0070	; USART3, Tx Complete
.equ	TRX24_PLL_LOCKaddr	= 0x0072	; TRX24 - PLL lock interrupt
.equ	TRX24_PLL_UNLOCKaddr	= 0x0074	; TRX24 - PLL unlock interrupt
.equ	TRX24_RX_STARTaddr	= 0x0076	; TRX24 - Receive start interrupt
.equ	TRX24_RX_ENDaddr	= 0x0078	; TRX24 - RX_END interrupt
.equ	TRX24_CCA_ED_DONEaddr	= 0x007a	; TRX24 - CCA/ED done interrupt
.equ	TRX24_XAH_AMIaddr	= 0x007c	; TRX24 - XAH - AMI
.equ	TRX24_TX_ENDaddr	= 0x007e	; TRX24 - TX_END interrupt
.equ	TRX24_AWAKEaddr	= 0x0080	; TRX24 AWAKE - tranceiver is reaching state TRX_OFF
.equ	SCNT_CMP1addr	= 0x0082	; Symbol counter - compare match 1 interrupt
.equ	SCNT_CMP2addr	= 0x0084	; Symbol counter - compare match 2 interrupt
.equ	SCNT_CMP3addr	= 0x0086	; Symbol counter - compare match 3 interrupt
.equ	SCNT_OVFLaddr	= 0x0088	; Symbol counter - overflow interrupt
.equ	SCNT_BACKOFFaddr	= 0x008a	; Symbol counter - backoff interrupt
.equ	AES_READYaddr	= 0x008c	; AES engine ready interrupt
.equ	BAT_LOWaddr	= 0x008e	; Battery monitor indicates supply voltage below threshold

.equ	INT_VECTORS_SIZE	= 144	; size in words

#endif  /* _M128RFA1DEF_INC_ */

; ***** END OF FILE ******************************************************
