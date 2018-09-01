;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: AT90PWM81.xml ***********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "pwm81def.inc"
;* Title             : Register/Bit Definitions for the AT90PWM81
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : AT90PWM81
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

#ifndef _PWM81DEF_INC_
#define _PWM81DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device AT90PWM81
#pragma AVRPART ADMIN PART_NAME AT90PWM81
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x93
.equ	SIGNATURE_002	= 0x88

#pragma AVRPART CORE CORE_VERSION V2E


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	MSMCR	= 0x32
.equ	DWDR	= 0x31
.equ	PASDLY2	= 0x71	; MEMORY MAPPED
.equ	BGCCR	= 0x81	; MEMORY MAPPED
.equ	BGCRR	= 0x80	; MEMORY MAPPED
.equ	PCNFE2	= 0x70	; MEMORY MAPPED
.equ	AC3ECON	= 0x7c	; MEMORY MAPPED
.equ	AC2ECON	= 0x7b	; MEMORY MAPPED
.equ	AC1ECON	= 0x7a	; MEMORY MAPPED
.equ	PICR2H	= 0x6d	; MEMORY MAPPED
.equ	PICR2L	= 0x6c	; MEMORY MAPPED
.equ	PFRC2B	= 0x67	; MEMORY MAPPED
.equ	PFRC2A	= 0x66	; MEMORY MAPPED
.equ	PCTL2	= 0x16
.equ	PCNF2	= 0x15
.equ	OCR2RBH	= 0x29
.equ	OCR2RBL	= 0x28
.equ	OCR2SBH	= 0x27
.equ	OCR2SBL	= 0x26
.equ	OCR2RAH	= 0x2f
.equ	OCR2RAL	= 0x2e
.equ	OCR2SAH	= 0x65	; MEMORY MAPPED
.equ	OCR2SAL	= 0x64	; MEMORY MAPPED
.equ	POM2	= 0x6f	; MEMORY MAPPED
.equ	PSOC2	= 0x6e	; MEMORY MAPPED
.equ	PICR0H	= 0x69	; MEMORY MAPPED
.equ	PICR0L	= 0x68	; MEMORY MAPPED
.equ	PFRC0B	= 0x63	; MEMORY MAPPED
.equ	PFRC0A	= 0x62	; MEMORY MAPPED
.equ	PCTL0	= 0x12
.equ	PCNF0	= 0x11
.equ	OCR0RBH	= 0x25
.equ	OCR0RBL	= 0x24
.equ	OCR0SBH	= 0x23
.equ	OCR0SBL	= 0x22
.equ	OCR0RAH	= 0x2b
.equ	OCR0RAL	= 0x2a
.equ	OCR0SAH	= 0x61	; MEMORY MAPPED
.equ	OCR0SAL	= 0x60	; MEMORY MAPPED
.equ	PSOC0	= 0x6a	; MEMORY MAPPED
.equ	AC2CON	= 0x7e	; MEMORY MAPPED
.equ	AC1CON	= 0x7d	; MEMORY MAPPED
.equ	DACH	= 0x39
.equ	DACL	= 0x38
.equ	DACON	= 0x76	; MEMORY MAPPED
.equ	PIM2	= 0x13
.equ	PIFR2	= 0x14
.equ	PIM0	= 0x0f
.equ	PIFR0	= 0x10
.equ	ICR1L	= 0x8c	; MEMORY MAPPED
.equ	ICR1H	= 0x8d	; MEMORY MAPPED
.equ	TCNT1L	= 0x3a
.equ	TCNT1H	= 0x3b
.equ	TCCR1B	= 0x8a	; MEMORY MAPPED
.equ	DIDR1	= 0x78	; MEMORY MAPPED
.equ	DIDR0	= 0x77	; MEMORY MAPPED
.equ	ADMUX	= 0x08
.equ	ADCSRB	= 0x07
.equ	ADCSRA	= 0x06
.equ	ADCH	= 0x2d
.equ	ADCL	= 0x2c
.equ	AC3CON	= 0x7f	; MEMORY MAPPED
.equ	AMP0CSR	= 0x79	; MEMORY MAPPED
.equ	TIMSK1	= 0x01
.equ	EICRA	= 0x89	; MEMORY MAPPED
.equ	OSCCAL	= 0x88	; MEMORY MAPPED
.equ	PRR	= 0x86	; MEMORY MAPPED
.equ	CLKPR	= 0x83	; MEMORY MAPPED
.equ	WDTCSR	= 0x82	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	ACSR	= 0x00
.equ	SPDR	= 0x36
.equ	SPSR	= 0x18
.equ	SPCR	= 0x17
.equ	PLLCSR	= 0x87	; MEMORY MAPPED
.equ	CLKSELR	= 0x85	; MEMORY MAPPED
.equ	CLKCSR	= 0x84	; MEMORY MAPPED
.equ	EEARL	= 0x1e
.equ	EEARH	= 0x1f
.equ	EEDR	= 0x1d
.equ	EECR	= 0x1c
.equ	GPIOR0	= 0x19
.equ	EIMSK	= 0x21
.equ	EIFR	= 0x20
.equ	GPIOR2	= 0x1b
.equ	GPIOR1	= 0x1a
.equ	TIFR1	= 0x02
.equ	PORTE	= 0x0e
.equ	DDRE	= 0x0d
.equ	PINE	= 0x0c
.equ	PORTD	= 0x0b
.equ	DDRD	= 0x0a
.equ	PIND	= 0x09
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
; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0	; External Interrupt Sense Control Bit
.equ	ISC01	= 1	; External Interrupt Sense Control Bit
.equ	ISC10	= 2	; External Interrupt Sense Control Bit
.equ	ISC11	= 3	; External Interrupt Sense Control Bit
.equ	ISC20	= 4	; External Interrupt Sense Control Bit
.equ	ISC21	= 5	; External Interrupt Sense Control Bit

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable
.equ	INT2	= 2	; External Interrupt Request 2 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1
.equ	INTF2	= 2	; External Interrupt Flag 2


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
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
.equ	ADSSEN	= 4	; ADC Single Shot Enable on PSC's Synchronisation Signals
.equ	ADNCDIS	= 6	; ADC Noise Canceller Disable
.equ	ADHSM	= 7	; ADC High Speed Mode

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; ADC0 Digital input Disable
.equ	ADC1D	= 1	; ADC1 Digital input Disable
.equ	ADC2D	= 2	; ADC2 Digital input Disable
.equ	ADC3D	= 3	; ADC3 Digital input Disable
.equ	ADC4D	= 4	; ADC4 Digital input Disable
.equ	ADC5D	= 5	; ADC5 Digital input Disable
.equ	ADC6D	= 6	; ADC7 Digital input Disable
.equ	ADC7D	= 7	; 

; DIDR1 - Digital Input Disable Register 0
.equ	ADC9D	= 0	; 
.equ	ADC10D	= 1	; 
.equ	AMP0_D	= 2	; 
.equ	ACMP1MD	= 3	; 

; AMP0CSR - 
.equ	AMP0TS0	= 0	; 
.equ	AMP0TS1	= 1	; 
.equ	AMP0GS	= 3	; 
.equ	AMP0G0	= 4	; 
.equ	AMP0G1	= 5	; 
.equ	AMP0IS	= 6	; 
.equ	AMP0EN	= 7	; 


; ***** ANALOG_COMPARATOR ************
; AC3CON - Analog Comparator3 Control Register
.equ	AC3M0	= 0	; Analog Comparator 3 Multiplexer Register
.equ	AC3M1	= 1	; Analog Comparator  3 Multiplexer Regsiter
.equ	AC3M2	= 2	; Analog Comparator 3 Multiplexer Register
.equ	AC3OEA	= 3	; Analog Comparator 3 Alternate Output Enable
.equ	AC3IS0	= 4	; Analog Comparator 3  Interrupt Select Bit
.equ	AC3IS1	= 5	; Analog Comparator 3  Interrupt Select Bit
.equ	AC3IE	= 6	; Analog Comparator 3 Interrupt Enable Bit
.equ	AC3EN	= 7	; Analog Comparator3 Enable Bit

; AC1CON - Analog Comparator 1 Control Register
.equ	AC1M0	= 0	; Analog Comparator 1 Multiplexer Register
.equ	AC1M1	= 1	; Analog Comparator 1 Multiplexer Regsiter
.equ	AC1M2	= 2	; Analog Comparator 1 Multiplexer Register
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

; ACSR - Analog Comparator Status Register
.equ	AC1O	= 1	; Analog Comparator 1 Output Bit
.equ	AC2O	= 2	; Analog Comparator 2 Output Bit
.equ	AC3O	= 3	; Analog Comparator 3 Output Bit
.equ	AC1IF	= 5	; Analog Comparator 1  Interrupt Flag Bit
.equ	AC2IF	= 6	; Analog Comparator 2 Interrupt Flag Bit
.equ	AC3IF	= 7	; Analog Comparator 3 Interrupt Flag Bit

; AC3ECON - 
.equ	AC3H0	= 0	; Analog Comparator Hysteresis Select
.equ	AC3H1	= 1	; Analog Comparator Hysteresis Select
.equ	AC3H2	= 2	; Analog Comparator Hysteresis Select
.equ	AC3OE	= 4	; Analog Comparator Ouput Enable
.equ	AC3OI	= 5	; Analog Comparator Ouput Invert

; AC2ECON - 
.equ	AC2H0	= 0	; Analog Comparator Hysteresis Select
.equ	AC2H1	= 1	; Analog Comparator Hysteresis Select
.equ	AC2H2	= 2	; Analog Comparator Hysteresis Select
.equ	AC2OE	= 4	; Analog Comparator Ouput Enable
.equ	AC2OI	= 5	; Analog Comparator Ouput Invert

; AC1ECON - 
.equ	AC1H0	= 0	; Analog Comparator Hysteresis Select
.equ	AC1H1	= 1	; Analog Comparator Hysteresis Select
.equ	AC1H2	= 2	; Analog Comparator Hysteresis Select
.equ	AC1ICE	= 3	; Analog Comparator Interrupt Capture Enable
.equ	AC1OE	= 4	; Analog Comparator Ouput Enable
.equ	AC1OI	= 5	; Analog Comparator Ouput Invert


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
.equ	CKRC81	= 2	; Frequency Selection of the Calibrated RC Oscillator
.equ	RSTDIS	= 3	; Reset Pin Disable
.equ	PUD	= 4	; Pull-up disable

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
.equ	CAL7	= 7	; Oscillator Calibration Value Bit7

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
.equ	PLLF0	= 2	; 
.equ	PLLF1	= 3	; 
.equ	PLLF2	= 4	; 
.equ	PLLF3	= 5	; 

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRSPI	= 2	; Power Reduction Serial Peripheral Interface
.equ	PRTIM1	= 4	; Power Reduction Timer/Counter1
.equ	PRPSCR	= 5	; Power Reduction PSC0
.equ	PRPSC2	= 7	; Power Reduction PSC2

; CLKCSR - 
.equ	CLKC0	= 0	; Clock Control
.equ	CLKC1	= 1	; Clock Control
.equ	CLKC2	= 2	; Clock Control
.equ	CLKC3	= 3	; Clock Control
.equ	CLKRDY	= 4	; Clock Ready Flag
.equ	CLKCCE	= 7	; Clock Control Change Enable

; CLKSELR - 
.equ	CKSEL0	= 0	; Clock Source Select
.equ	CKSEL1	= 1	; Clock Source Select
.equ	CKSEL2	= 2	; Clock Source Select
.equ	CKSEL3	= 3	; Clock Source Select
.equ	CSUT0	= 4	; Clock Start up Time
.equ	CSUT1	= 5	; Clock Start up Time
.equ	COUT	= 6	; Clock OUT

; BGCCR - BandGap Current Calibration Register
.equ	BGCC0	= 0	; 
.equ	BGCC1	= 1	; 
.equ	BGCC2	= 2	; 
.equ	BGCC3	= 3	; 

; BGCRR - BandGap Resistor Calibration Register
.equ	BGCR0	= 0	; 
.equ	BGCR1	= 1	; 
.equ	BGCR2	= 2	; 
.equ	BGCR3	= 3	; 


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
.equ	EEPM0	= 4	; EEPROM Programming Mode
.equ	EEPM1	= 5	; EEPROM Programming Mode
.equ	EEPAGE	= 6	; EEPROM Page Access
.equ	NVMBSY	= 7	; None Volatile Busy Memory Busy


; ***** PSC0 *************************
; PICR0H - PSC 0 Input Capture Register High
.equ	PICR08	= 0	; 
.equ	PICR09	= 1	; 
.equ	PICR010	= 2	; 
.equ	PICR011	= 3	; 
.equ	PCST0	= 7	; PSC 0 Capture Software Trigger Bit

; PICR0L - PSC 0 Input Capture Register Low
.equ	PICR00	= 0	; 
.equ	PICR01	= 1	; 
.equ	PICR02	= 2	; 
.equ	PICR03	= 3	; 
.equ	PICR04	= 4	; 
.equ	PICR05	= 5	; 
.equ	PICR06	= 6	; 
.equ	PICR07	= 7	; 

; PFRC0B - PSC 0 Input B Control
.equ	PRFM0B0	= 0	; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B1	= 1	; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B2	= 2	; PSC 0 Retrigger and Fault Mode for Part B
.equ	PRFM0B3	= 3	; PSC 0 Retrigger and Fault Mode for Part B
.equ	PFLTE0B	= 4	; PSC 0 Filter Enable on Input Part B
.equ	PELEV0B	= 5	; PSC 0 Edge Level Selector on Input Part B
.equ	PISEL0B	= 6	; PSC 0 Input Select for Part B
.equ	PCAE0B	= 7	; PSC 0 Capture Enable Input Part B

; PFRC0A - PSC 0 Input A Control
.equ	PRFM0A0	= 0	; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A1	= 1	; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A2	= 2	; PSC 0 Retrigger and Fault Mode for Part A
.equ	PRFM0A3	= 3	; PSC 0 Retrigger and Fault Mode for Part A
.equ	PFLTE0A	= 4	; PSC 0 Filter Enable on Input Part A
.equ	PELEV0A	= 5	; PSC 0 Edge Level Selector on Input Part A
.equ	PISEL0A	= 6	; PSC 0 Input Select for Part A
.equ	PCAE0A	= 7	; PSC 0 Capture Enable Input Part A

; PCTL0 - PSC 0 Control Register
.equ	PRUN0	= 0	; PSC 0 Run
.equ	PCCYC0	= 1	; PSC0 Complete Cycle
.equ	PBFM00	= 2	; PSC 0 Balance Flank Width Modulation
.equ	PAOC0A	= 3	; PSC 0 Asynchronous Output Control A
.equ	PAOC0B	= 4	; PSC 0 Asynchronous Output Control B
.equ	PBFM01	= 5	; PSC 0 Balance Flank Width Modulation
.equ	PPRE00	= 6	; PSC 0 Prescaler Select 0
.equ	PPRE01	= 7	; PSC 0 Prescaler Select 1

; PCNF0 - PSC 0 Configuration Register
.equ	PCLKSEL0	= 1	; PSC 0 Input Clock Select
.equ	POP0	= 2	; PSC 0 Output Polarity
.equ	PMODE00	= 3	; PSC 0 Mode
.equ	PMODE01	= 4	; PSC 0 Mode
.equ	PLOCK0	= 5	; PSC 0 Lock
.equ	PALOCK0	= 6	; PSC 0 Autolock
.equ	PFIFTY0	= 7	; PSC 0 Fifty

; OCR0RBH - Output Compare RB Register High
.equ	OCR0RB_8	= 0	; 
.equ	OCR0RB_9	= 1	; 
.equ	OCR0RB_00	= 2	; 
.equ	OCR0RB_01	= 3	; 
.equ	OCR0RB_02	= 4	; 
.equ	OCR0RB_03	= 5	; 
.equ	OCR0RB_04	= 6	; 
.equ	OCR0RB_05	= 7	; 

; OCR0RBL - Output Compare RB Register Low
.equ	OCR0RB_0	= 0	; 
.equ	OCR0RB_1	= 1	; 
.equ	OCR0RB_2	= 2	; 
.equ	OCR0RB_3	= 3	; 
.equ	OCR0RB_4	= 4	; 
.equ	OCR0RB_5	= 5	; 
.equ	OCR0RB_6	= 6	; 
.equ	OCR0RB_7	= 7	; 

; OCR0SBH - Output Compare SB Register High
.equ	OCR0SB_8	= 0	; 
.equ	OCR0SB_9	= 1	; 
.equ	OCR0SB_00	= 2	; 
.equ	OCR0SB_01	= 3	; 

; OCR0SBL - Output Compare SB Register Low
.equ	OCR0SB_0	= 0	; 
.equ	OCR0SB_1	= 1	; 
.equ	OCR0SB_2	= 2	; 
.equ	OCR0SB_3	= 3	; 
.equ	OCR0SB_4	= 4	; 
.equ	OCR0SB_5	= 5	; 
.equ	OCR0SB_6	= 6	; 
.equ	OCR0SB_7	= 7	; 

; OCR0RAH - Output Compare RA Register High
.equ	OCR0RA_8	= 0	; 
.equ	OCR0RA_9	= 1	; 
.equ	OCR0RA_00	= 2	; 
.equ	OCR0RA_01	= 3	; 

; OCR0RAL - Output Compare RA Register Low
.equ	OCR0RA_0	= 0	; 
.equ	OCR0RA_1	= 1	; 
.equ	OCR0RA_2	= 2	; 
.equ	OCR0RA_3	= 3	; 
.equ	OCR0RA_4	= 4	; 
.equ	OCR0RA_5	= 5	; 
.equ	OCR0RA_6	= 6	; 
.equ	OCR0RA_7	= 7	; 

; OCR0SAH - Output Compare SA Register High
.equ	OCR0SA_8	= 0	; 
.equ	OCR0SA_9	= 1	; 
.equ	OCR0SA_00	= 2	; 
.equ	OCR0SA_01	= 3	; 

; OCR0SAL - Output Compare SA Register Low
.equ	OCR0SA_0	= 0	; 
.equ	OCR0SA_1	= 1	; 
.equ	OCR0SA_2	= 2	; 
.equ	OCR0SA_3	= 3	; 
.equ	OCR0SA_4	= 4	; 
.equ	OCR0SA_5	= 5	; 
.equ	OCR0SA_6	= 6	; 
.equ	OCR0SA_7	= 7	; 

; PSOC0 - PSC0 Synchro and Output Configuration
.equ	POEN0A	= 0	; PSCOUT00 Output Enable
.equ	POEN0B	= 2	; PSCOUT01 Output Enable
.equ	PSYNC00	= 4	; Synchronisation out for ADC selection
.equ	PSYNC01	= 5	; Synchronisation out for ADC selection
.equ	PISEL0B1	= 6	; PSC Input Select
.equ	PISEL0A1	= 7	; PSC Input Select

; PIM0 - PSC0 Interrupt Mask Register
.equ	PEOPE0	= 0	; End of Cycle Interrupt Enable
.equ	PEOEPE0	= 1	; End of Enhanced Cycle Enable
.equ	PEVE0A	= 3	; External Event A Interrupt Enable
.equ	PEVE0B	= 4	; External Event B Interrupt Enable

; PIFR0 - PSC0 Interrupt Flag Register
.equ	PEOP0	= 0	; End of PSC0 Interrupt
.equ	PRN00	= 1	; Ramp Number
.equ	PRN01	= 2	; Ramp Number
.equ	PEV0A	= 3	; External Event A Interrupt
.equ	PEV0B	= 4	; External Event B Interrupt
.equ	POAC0A	= 6	; PSC 0 Output A Activity
.equ	POAC0B	= 7	; PSC 0 Output A Activity


; ***** PSC2 *************************
; PICR2H - PSC 2 Input Capture Register High
.equ	PICR28	= 0	; 
.equ	PICR29	= 1	; 
.equ	PICR210	= 2	; 
.equ	PICR211	= 3	; 
.equ	PCST2	= 7	; PSC 2 Capture Software Trigger Bit

; PICR2L - PSC 2 Input Capture Register Low
.equ	PICR20	= 0	; 
.equ	PICR21	= 1	; 
.equ	PICR22	= 2	; 
.equ	PICR23	= 3	; 
.equ	PICR24	= 4	; 
.equ	PICR25	= 5	; 
.equ	PICR26	= 6	; 
.equ	PICR27	= 7	; 

; PFRC2B - PSC 2 Input B Control
.equ	PRFM2B0	= 0	; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B1	= 1	; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B2	= 2	; PSC 2 Retrigger and Fault Mode for Part B
.equ	PRFM2B3	= 3	; PSC 2 Retrigger and Fault Mode for Part B
.equ	PFLTE2B	= 4	; PSC 2 Filter Enable on Input Part B
.equ	PELEV2B	= 5	; PSC 2 Edge Level Selector on Input Part B
.equ	PISEL2B	= 6	; PSC 2 Input Select for Part B
.equ	PCAE2B	= 7	; PSC 2 Capture Enable Input Part B

; PFRC2A - PSC 2 Input B Control
.equ	PRFM2A0	= 0	; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A1	= 1	; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A2	= 2	; PSC 2 Retrigger and Fault Mode for Part A
.equ	PRFM2A3	= 3	; PSC 2 Retrigger and Fault Mode for Part A
.equ	PFLTE2A	= 4	; PSC 2 Filter Enable on Input Part A
.equ	PELEV2A	= 5	; PSC 2 Edge Level Selector on Input Part A
.equ	PISEL2A	= 6	; PSC 2 Input Select for Part A
.equ	PCAE2A	= 7	; PSC 2 Capture Enable Input Part A

; PCTL2 - PSC 2 Control Register
.equ	PRUN2	= 0	; PSC 2 Run
.equ	PCCYC2	= 1	; PSC2 Complete Cycle
.equ	PARUN2	= 2	; PSC2 Auto Run
.equ	PAOC2A	= 3	; PSC 2 Asynchronous Output Control A
.equ	PAOC2B	= 4	; PSC 2 Asynchronous Output Control B
.equ	PBFM2	= 5	; Balance Flank Width Modulation
.equ	PPRE20	= 6	; PSC 2 Prescaler Select 0
.equ	PPRE21	= 7	; PSC 2 Prescaler Select 1

; PCNF2 - PSC 2 Configuration Register
.equ	POME2	= 0	; PSC 2 Output Matrix Enable
.equ	PCLKSEL2	= 1	; PSC 2 Input Clock Select
.equ	POP2	= 2	; PSC 2 Output Polarity
.equ	PMODE20	= 3	; PSC 2 Mode
.equ	PMODE21	= 4	; PSC 2 Mode
.equ	PLOCK2	= 5	; PSC 2 Lock
.equ	PALOCK2	= 6	; PSC 2 Autolock
.equ	PFIFTY2	= 7	; PSC 2 Fifty

; OCR2RBH - Output Compare RB Register High
.equ	OCR2RB_8	= 0	; 
.equ	OCR2RB_9	= 1	; 
.equ	OCR2RB_10	= 2	; 
.equ	OCR2RB_11	= 3	; 
.equ	OCR2RB_12	= 4	; 
.equ	OCR2RB_13	= 5	; 
.equ	OCR2RB_14	= 6	; 
.equ	OCR2RB_15	= 7	; 

; OCR2RBL - Output Compare RB Register Low
.equ	OCR2RB_0	= 0	; 
.equ	OCR2RB_1	= 1	; 
.equ	OCR2RB_2	= 2	; 
.equ	OCR2RB_3	= 3	; 
.equ	OCR2RB_4	= 4	; 
.equ	OCR2RB_5	= 5	; 
.equ	OCR2RB_6	= 6	; 
.equ	OCR2RB_7	= 7	; 

; OCR2SBH - Output Compare SB Register High
.equ	OCR2SB_8	= 0	; 
.equ	OCR2SB_9	= 1	; 
.equ	OCR2SB_10	= 2	; 
.equ	OCR2SB_11	= 3	; 

; OCR2SBL - Output Compare SB Register Low
.equ	OCR2SB_0	= 0	; 
.equ	OCR2SB_1	= 1	; 
.equ	OCR2SB_2	= 2	; 
.equ	OCR2SB_3	= 3	; 
.equ	OCR2SB_4	= 4	; 
.equ	OCR2SB_5	= 5	; 
.equ	OCR2SB_6	= 6	; 
.equ	OCR2SB_7	= 7	; 

; OCR2RAH - Output Compare RA Register High
.equ	OCR2RA_8	= 0	; 
.equ	OCR2RA_9	= 1	; 
.equ	OCR2RA_10	= 2	; 
.equ	OCR2RA_11	= 3	; 

; OCR2RAL - Output Compare RA Register Low
.equ	OCR2RA_0	= 0	; 
.equ	OCR2RA_1	= 1	; 
.equ	OCR2RA_2	= 2	; 
.equ	OCR2RA_3	= 3	; 
.equ	OCR2RA_4	= 4	; 
.equ	OCR2RA_5	= 5	; 
.equ	OCR2RA_6	= 6	; 
.equ	OCR2RA_7	= 7	; 

; OCR2SAH - Output Compare SA Register High
.equ	OCR2SA_8	= 0	; 
.equ	OCR2SA_9	= 1	; 
.equ	OCR2SA_10	= 2	; 
.equ	OCR2SA_11	= 3	; 

; OCR2SAL - Output Compare SA Register Low
.equ	OCR2SA_0	= 0	; 
.equ	OCR2SA_1	= 1	; 
.equ	OCR2SA_2	= 2	; 
.equ	OCR2SA_3	= 3	; 
.equ	OCR2SA_4	= 4	; 
.equ	OCR2SA_5	= 5	; 
.equ	OCR2SA_6	= 6	; 
.equ	OCR2SA_7	= 7	; 

; POM2 - PSC 2 Output Matrix
.equ	POMV2A0	= 0	; Output Matrix Output A Ramp 0
.equ	POMV2A1	= 1	; Output Matrix Output A Ramp 1
.equ	POMV2A2	= 2	; Output Matrix Output A Ramp 2
.equ	POMV2A3	= 3	; Output Matrix Output A Ramp 3
.equ	POMV2B0	= 4	; Output Matrix Output B Ramp 0
.equ	POMV2B1	= 5	; Output Matrix Output B Ramp 2
.equ	POMV2B2	= 6	; Output Matrix Output B Ramp 2
.equ	POMV2B3	= 7	; Output Matrix Output B Ramp 3

; PSOC2 - PSC2 Synchro and Output Configuration
.equ	POEN2A	= 0	; PSCOUT20 Output Enable
.equ	POEN2C	= 1	; PSCOUT22 Output Enable
.equ	POEN2B	= 2	; PSCOUT21 Output Enable
.equ	POEN2D	= 3	; PSCOUT23 Output Enable
.equ	PSYNC20	= 4	; Synchronization Out for ADC Selection
.equ	PSYNC21	= 5	; Synchronization Out for ADC Selection
.equ	POS22	= 6	; PSC 2 Output 22 Select
.equ	POS23	= 7	; PSC 2 Output 23 Select

; PIM2 - PSC2 Interrupt Mask Register
.equ	PEOPE2	= 0	; End of Cycle Interrupt Enable
.equ	PEOEPE2	= 1	; End of Enhanced Cycle Interrupt Enable
.equ	PEVE2A	= 3	; External Event A Interrupt Enable
.equ	PEVE2B	= 4	; External Event B Interrupt Enable
.equ	PSEIE2	= 5	; PSC 2 Synchro Error Interrupt Enable

; PIFR2 - PSC2 Interrupt Flag Register
.equ	PEOP2	= 0	; End of PSC2 Interrupt
.equ	PRN20	= 1	; Ramp Number
.equ	PRN21	= 2	; Ramp Number
.equ	PEV2A	= 3	; External Event A Interrupt
.equ	PEV2B	= 4	; External Event B Interrupt
.equ	PSEI2	= 5	; PSC 2 Synchro Error Interrupt
.equ	POAC2A	= 6	; PSC 2 Output A Activity
.equ	POAC2B	= 7	; PSC 2 Output A Activity

; PASDLY2 - Analog Synchronization Delay Register
.equ	PASDLY2_0	= 0	; 
.equ	PASDLY2_1	= 1	; 
.equ	PASDLY2_2	= 2	; 
.equ	PASDLY2_3	= 3	; 
.equ	PASDLY2_4	= 4	; 
.equ	PASDLY2_5	= 5	; 
.equ	PASDLY2_6	= 6	; 
.equ	PASDLY2_7	= 7	; 

; PCNFE2 - PSC 2 Enhanced Configuration Register
.equ	PISEL2B1	= 0	; 
.equ	PISEL2A1	= 1	; 
.equ	PELEV2B1	= 2	; 
.equ	PELEV2A1	= 3	; 
.equ	PBFM21	= 4	; 
.equ	PASDLK20	= 5	; 
.equ	PASDLK21	= 6	; 
.equ	PASDLK22	= 7	; 


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	ICF1	= 5	; Input Capture Flag 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Prescaler source of Timer/Counter 1
.equ	CS11	= 1	; Prescaler source of Timer/Counter 1
.equ	CS12	= 2	; Prescaler source of Timer/Counter 1
.equ	WGM13	= 4	; Waveform Generation Mode
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler


; ***** BOOT_LOAD ********************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	BLBSET	= 3	; Boot Lock Bit Set
.equ	RWWSRE	= 4	; Read While Write section read enable
.equ	SIGRD	= 5	; Signature Row Read
.equ	RWWSB	= 6	; Read While Write Section Busy
.equ	SPMIE	= 7	; SPM Interrupt Enable



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lock bit
.equ	LB2	= 1	; Lock bit
.equ	BLB01	= 2	; Boot Lock bit
.equ	BLB02	= 3	; Boot Lock bit
.equ	BLB11	= 4	; Boot lock bit
.equ	BLB12	= 5	; Boot lock bit


; ***** FUSES ************************************************************
; LOW fuse bits
;.equ	CKSEL0	= 0	; Select Clock Source
;.equ	CKSEL1	= 1	; Select Clock Source
;.equ	CKSEL2	= 2	; Select Clock Source
;.equ	CKSEL3	= 3	; Select Clock Source
.equ	SUT0	= 4	; Select start-up time
.equ	SUT1	= 5	; Select start-up time
.equ	CKOUT	= 6	; Clock Output
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BOOTRST	= 0	; Select Reset Vector
.equ	BOOTSZ0	= 1	; Select Boot Size
.equ	BOOTSZ1	= 2	; Select Boot Size
.equ	EESAVE	= 3	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 4	; Watchdog timer always on
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	DWEN	= 6	; debugWIRE Enable
.equ	RSTDISBL	= 7	; External Reset Disable

; EXTENDED fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown out detector trigger level
.equ	PSCINRB	= 3	; PSC2 & PSC0 Input Reset Behavior
.equ	PSCRV	= 4	; PSCOUT Reset Value
.equ	PSC0RB	= 5	; PSC0 Reset Behaviour
.equ	PSC2RBA	= 6	; PSC2 Rest Behavior for out OUT22 & 23
.equ	PSC2RB	= 7	; PSC2 Reset Behaviour



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x0fff	; Note: Word address
.equ	IOEND	= 0x00ff
.equ	SRAM_START	= 0x0100
.equ	SRAM_SIZE	= 256
.equ	RAMEND	= 0x01ff
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x01ff
.equ	EEPROMEND	= 0x01ff
.equ	EEADRBITS	= 9
#pragma AVRPART MEMORY PROG_FLASH 8192
#pragma AVRPART MEMORY EEPROM 512
#pragma AVRPART MEMORY INT_SRAM SIZE 256
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0xc00
.equ	NRWW_STOP_ADDR	= 0xfff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0xbff
.equ	PAGESIZE	= 32
.equ	FIRSTBOOTSTART	= 0xf80
.equ	SECONDBOOTSTART	= 0xf00
.equ	THIRDBOOTSTART	= 0xe00
.equ	FOURTHBOOTSTART	= 0xc00
.equ	SMALLBOOTSTART	= FIRSTBOOTSTART
.equ	LARGEBOOTSTART	= FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
.equ	PSC2_CAPTaddr	= 0x0001	; PSC2 Capture Event
.equ	PSC2_ECaddr	= 0x0002	; PSC2 End Cycle
.equ	PSC2_EECaddr	= 0x0003	; PSC2 End Of Enhanced Cycle
.equ	PSC0_CAPTaddr	= 0x0004	; PSC0 Capture Event
.equ	PSC0_ECaddr	= 0x0005	; PSC0 End Cycle
.equ	PSC0_EECaddr	= 0x0006	; PSC0 End Of Enhanced Cycle
.equ	ACI1addr	= 0x0007	; Analog Comparator 1
.equ	ACI2addr	= 0x0008	; Analog Comparator 2
.equ	ACI3addr	= 0x0009	; Analog Comparator 3
.equ	INT0addr	= 0x000a	; External Interrupt Request 0
.equ	ICP1addr	= 0x000b	; Timer/Counter1 Capture Event
.equ	OVF1addr	= 0x000c	; Timer/Counter1 Overflow
.equ	ADCCaddr	= 0x000d	; ADC Conversion Complete
.equ	INT1addr	= 0x000e	; External Interrupt Request 1
.equ	SPIaddr	= 0x000f	; SPI Serial Transfer Complet
.equ	INT2addr	= 0x0010	; External Interrupt Request 2
.equ	WDTaddr	= 0x0011	; Watchdog Timeout Interrupt
.equ	ERDYaddr	= 0x0012	; EEPROM Ready
.equ	SPMRaddr	= 0x0013	; Store Program Memory Read

.equ	INT_VECTORS_SIZE	= 20	; size in words

#endif  /* _PWM81DEF_INC_ */

; ***** END OF FILE ******************************************************
