;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-05-12 14:38 ******* Source: ATtiny1634.xml **********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn1634def.inc"
;* Title             : Register/Bit Definitions for the ATtiny1634
;* Date              : 2011-05-12
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny1634
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

#ifndef _TN1634DEF_INC_
#define _TN1634DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny1634
#pragma AVRPART ADMIN PART_NAME ATtiny1634
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x12

#pragma AVRPART CORE CORE_VERSION V2
#pragma AVRPART CORE NEW_INSTRUCTIONS lpm rd,z+


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	TWSCRA	= 0x7f	; MEMORY MAPPED
.equ	TWSCRB	= 0x7e	; MEMORY MAPPED
.equ	TWSSRA	= 0x7d	; MEMORY MAPPED
.equ	TWSA	= 0x7c	; MEMORY MAPPED
.equ	TWSAM	= 0x7b	; MEMORY MAPPED
.equ	TWSD	= 0x7a	; MEMORY MAPPED
.equ	UCSR1A	= 0x79	; MEMORY MAPPED
.equ	UCSR1B	= 0x78	; MEMORY MAPPED
.equ	UCSR1C	= 0x77	; MEMORY MAPPED
.equ	UCSR1D	= 0x76	; MEMORY MAPPED
.equ	UBRR1L	= 0x74	; MEMORY MAPPED
.equ	UBRR1H	= 0x75	; MEMORY MAPPED
.equ	UDR1	= 0x73	; MEMORY MAPPED
.equ	TCCR1A	= 0x72	; MEMORY MAPPED
.equ	TCCR1B	= 0x71	; MEMORY MAPPED
.equ	TCCR1C	= 0x70	; MEMORY MAPPED
.equ	TCNT1L	= 0x6e	; MEMORY MAPPED
.equ	TCNT1H	= 0x6f	; MEMORY MAPPED
.equ	OCR1AL	= 0x6c	; MEMORY MAPPED
.equ	OCR1AH	= 0x6d	; MEMORY MAPPED
.equ	OCR1BL	= 0x2e
.equ	OCR1BH	= 0x2e
.equ	ICR1L	= 0x2e
.equ	ICR1H	= 0x2e
.equ	GTCCR	= 0x67	; MEMORY MAPPED
.equ	OSCCAL1	= 0x66	; MEMORY MAPPED
.equ	OSCTCAL0B	= 0x65	; MEMORY MAPPED
.equ	OSCTCAL0A	= 0x64	; MEMORY MAPPED
.equ	OSCCAL0	= 0x63	; MEMORY MAPPED
.equ	DIDR2	= 0x62	; MEMORY MAPPED
.equ	DIDR1	= 0x61	; MEMORY MAPPED
.equ	DIDR0	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	GIMSK	= 0x3c
.equ	GIFR	= 0x3b
.equ	TIMSK	= 0x3a
.equ	TIFR	= 0x39
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x36
.equ	MCUSR	= 0x35
.equ	PRR	= 0x34
.equ	CLKPR	= 0x33
.equ	CLKSR	= 0x32
.equ	WDTCSR	= 0x30
.equ	CCP	= 0x2f
.equ	USISR	= 0x2d
.equ	USICR	= 0x2c
.equ	USIDR	= 0x2b
.equ	USIBR	= 0x2a
.equ	PCMSK2	= 0x29
.equ	PCMSK1	= 0x28
.equ	PCMSK0	= 0x27
.equ	UCSR0A	= 0x26
.equ	UCSR0B	= 0x25
.equ	UCSR0C	= 0x24
.equ	UCSR0D	= 0x23
.equ	UBRR0L	= 0x21
.equ	UBRR0H	= 0x22
.equ	UDR0	= 0x20
.equ	EEAR	= 0x1e
.equ	EEDR	= 0x1d
.equ	EECR	= 0x1c
.equ	TCCR0A	= 0x1b
.equ	TCCR0B	= 0x1a
.equ	TCNT0	= 0x19
.equ	OCR0A	= 0x18
.equ	OCR0B	= 0x17
.equ	GPIOR2	= 0x16
.equ	GPIOR1	= 0x15
.equ	GPIOR0	= 0x14
.equ	PORTCR	= 0x13
.equ	PUEA	= 0x12
.equ	PORTA	= 0x11
.equ	DDRA	= 0x10
.equ	PINA	= 0x0f
.equ	PUEB	= 0x0e
.equ	PORTB	= 0x0d
.equ	DDRB	= 0x0c
.equ	PINB	= 0x0b
.equ	PUEC	= 0x0a
.equ	PORTC	= 0x09
.equ	DDRC	= 0x08
.equ	PINC	= 0x07
.equ	ACSRA	= 0x06
.equ	ACSRB	= 0x05
.equ	ADMUX	= 0x04
.equ	ADCSRA	= 0x03
.equ	ADCSRB	= 0x02
.equ	ADCH	= 0x01
.equ	ADCL	= 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** TWI **************************
; TWSCRA - TWI Slave Control Register A
.equ	TWSME	= 0	; TWI Smart Mode Enable
.equ	TWPME	= 1	; TWI Promiscuous Mode Enable
.equ	TWSIE	= 2	; TWI Stop Interrupt Enable
.equ	TWEN	= 3	; Two-Wire Interface Enable
.equ	TWASIE	= 4	; TWI Address/Stop Interrupt Enable
.equ	TWDIE	= 5	; TWI Data Interrupt Enable
.equ	TWSHE	= 7	; TWI SDA Hold Time Enable

; TWSCRB - TWI Slave Control Register B
.equ	TWCMD0	= 0	; 
.equ	TWCMD1	= 1	; 
.equ	TWAA	= 2	; TWI Acknowledge Action

; TWSSRA - TWI Slave Status Register A
.equ	TWAS	= 0	; TWI Address or Stop
.equ	TWDIR	= 1	; TWI Read/Write Direction
.equ	TWBE	= 2	; TWI Bus Error
.equ	TWC	= 3	; TWI Collision
.equ	TWRA	= 4	; TWI Receive Acknowledge
.equ	TWCH	= 5	; TWI Clock Hold
.equ	TWASIF	= 6	; TWI Address/Stop Interrupt Flag
.equ	TWDIF	= 7	; TWI Data Interrupt Flag.

; TWSA - TWI Slave Address Register
.equ	TWSA0	= 0	; TWI slave address bit
.equ	TWSA1	= 1	; TWI slave address bit
.equ	TWSA2	= 2	; TWI slave address bit
.equ	TWSA3	= 3	; TWI slave address bit
.equ	TWSA4	= 4	; TWI slave address bit
.equ	TWSA5	= 5	; TWI slave address bit
.equ	TWSA6	= 6	; TWI slave address bit
.equ	TWSA7	= 7	; TWI slave address bit

; TWSD - TWI Slave Data Register
.equ	TWSD0	= 0	; TWI slave data bit
.equ	TWSD1	= 1	; TWI slave data bit
.equ	TWSD2	= 2	; TWI slave data bit
.equ	TWSD3	= 3	; TWI slave data bit
.equ	TWSD4	= 4	; TWI slave data bit
.equ	TWSD5	= 5	; TWI slave data bit
.equ	TWSD6	= 6	; TWI slave data bit
.equ	TWSD7	= 7	; TWI slave data bit

; TWSAM - TWI Slave Address Mask Register
.equ	TWAE	= 0	; TWI Address Enable
.equ	TWSAM1	= 1	; TWI Address Mask Bit 1
.equ	TWSAM2	= 2	; TWI Address Mask Bit 2
.equ	TWSAM3	= 3	; TWI Address Mask Bit 3
.equ	TWSAM4	= 4	; TWI Address Mask Bit 4
.equ	TWSAM5	= 5	; TWI Address Mask Bit 5
.equ	TWSAM6	= 6	; TWI Address Mask Bit 6
.equ	TWSAM7	= 7	; TWI Address Mask Bit 7


; ***** PORTB ************************
; PORTCR - Port Control Register
.equ	BBMB	= 1	; Break-Before-Make Mode Enable

; PUEB - Pull-up Enable Control Register
.equ	PUEB0	= 0	; 
.equ	PUEB1	= 1	; 
.equ	PUEB2	= 2	; 
.equ	PUEB3	= 3	; 

; PORTB - Input Pins, Port B
.equ	PORTB0	= 0	; 
.equ	PB0	= 0	; For compatibility
.equ	PORTB1	= 1	; 
.equ	PB1	= 1	; For compatibility
.equ	PORTB2	= 2	; 
.equ	PB2	= 2	; For compatibility
.equ	PORTB3	= 3	; 
.equ	PB3	= 3	; For compatibility

; DDRB - Data Direction Register, Port B
.equ	DDB0	= 0	; 
.equ	DDB1	= 1	; 
.equ	DDB2	= 2	; 
.equ	DDB3	= 3	; 

; PINB - Port B Data register
.equ	PINB0	= 0	; 
.equ	PINB1	= 1	; 
.equ	PINB2	= 2	; 
.equ	PINB3	= 3	; 


; ***** PORTC ************************
; PORTCR - Port Control Register
.equ	BBMC	= 2	; Break-Before-Make Mode Enable

; PUEC - Pull-up Enable Control Register
.equ	PUEC0	= 0	; 
.equ	PUEC1	= 1	; 
.equ	PUEC2	= 2	; 
.equ	PUEC3	= 3	; 
.equ	PUEC4	= 4	; 
.equ	PUEC5	= 5	; 

; PORTC - Port C Data Register
.equ	PORTC0	= 0	; 
.equ	PC0	= 0	; For compatibility
.equ	PORTC1	= 1	; 
.equ	PC1	= 1	; For compatibility
.equ	PORTC2	= 2	; 
.equ	PC2	= 2	; For compatibility
.equ	PORTC3	= 3	; 
.equ	PC3	= 3	; For compatibility
.equ	PORTC4	= 4	; 
.equ	PC4	= 4	; For compatibility
.equ	PORTC5	= 5	; 
.equ	PC5	= 5	; For compatibility

; DDRC - Data Direction Register, Port C
.equ	DDC0	= 0	; 
.equ	DDC1	= 1	; 
.equ	DDC2	= 2	; 
.equ	DDC3	= 3	; 
.equ	DDC4	= 4	; 
.equ	DDC5	= 5	; 

; PINC - Port C Input Pins
.equ	PINC0	= 0	; 
.equ	PINC1	= 1	; 
.equ	PINC2	= 2	; 
.equ	PINC3	= 3	; 
.equ	PINC4	= 4	; 
.equ	PINC5	= 5	; 


; ***** PORTA ************************
; PORTCR - Port Control Register
.equ	BBMA	= 0	; Break-Before-Make Mode Enable

; PUEA - Pull-up Enable Control Register
.equ	PUEA0	= 0	; 
.equ	PUEA1	= 1	; 
.equ	PUEA2	= 2	; 
.equ	PUEA3	= 3	; 
.equ	PUEA4	= 4	; 
.equ	PUEA5	= 5	; 
.equ	PUEA6	= 6	; 
.equ	PUEA7	= 7	; 

; PORTA - Port A Data Register
.equ	PORTA0	= 0	; 
.equ	PA0	= 0	; For compatibility
.equ	PORTA1	= 1	; 
.equ	PA1	= 1	; For compatibility
.equ	PORTA2	= 2	; 
.equ	PA2	= 2	; For compatibility
.equ	PORTA3	= 3	; 
.equ	PA3	= 3	; For compatibility
.equ	PORTA4	= 4	; 
.equ	PA4	= 4	; For compatibility
.equ	PORTA5	= 5	; 
.equ	PA5	= 5	; For compatibility
.equ	PORTA6	= 6	; 
.equ	PA6	= 6	; For compatibility
.equ	PORTA7	= 7	; 
.equ	PA7	= 7	; For compatibility

; DDRA - Data Direction Register, Port A
.equ	DDA0	= 0	; 
.equ	DDA1	= 1	; 
.equ	DDA2	= 2	; 
.equ	DDA3	= 3	; 
.equ	DDA4	= 4	; 
.equ	DDA5	= 5	; 
.equ	DDA6	= 6	; 
.equ	DDA7	= 7	; 

; PINA - Port A Input Pins
.equ	PINA0	= 0	; 
.equ	PINA1	= 1	; 
.equ	PINA2	= 2	; 
.equ	PINA3	= 3	; 
.equ	PINA4	= 4	; 
.equ	PINA5	= 5	; 
.equ	PINA6	= 6	; 
.equ	PINA7	= 7	; 


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
.equ	REFS0	= 6	; Reference Selection Bit
.equ	REFS1	= 7	; Reference Selection Bit

; ADCSRA - The ADC Control and Status register
.equ	ADPS0	= 0	; ADC Prescaler Select Bits
.equ	ADPS1	= 1	; ADC Prescaler Select Bits
.equ	ADPS2	= 2	; ADC Prescaler Select Bits
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
.equ	ADLAR	= 3	; 

; DIDR2 - Digital Input Disable Register 2
.equ	ADC9D	= 0	; ADC9 Digital input Disable
.equ	ADC10D	= 1	; ADC10 Digital input Disable
.equ	ADC11D	= 2	; ADC11 Digital input Disable

; DIDR1 - Digital Input Disable Register 1
.equ	ADC5D	= 0	; ADC5 Digital input Disable
.equ	ADC6D	= 1	; ADC6 Digital input Disable
.equ	ADC7D	= 2	; ADC7 Digital input Disable
.equ	ADC8D	= 3	; ADC8 Digital Input Disable

; DIDR0 - Digital Input Disable Register 0
.equ	AREFD	= 0	; AREF Digital input Disable
.equ	AIN0D	= 1	; AIN0 Digital input Disable
.equ	AIN1D	= 2	; AIN1 Digital input Disable
.equ	ADC0D	= 3	; ADC0 Digital Input Disable
.equ	ADC1D	= 4	; ADC1 Digital input Disable
.equ	ADC2D	= 5	; ADC2 Digital input Disable
.equ	ADC3D	= 6	; ADC3 Digital input Disable
.equ	ADC4D	= 7	; ADC4 Digital input Disable


; ***** ANALOG_COMPARATOR ************
; ACSRA - Analog Comparator Control And Status Register A
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIC	= 2	; Analog Comparator Input Capture Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACBG	= 6	; Analog Comparator Bandgap Select
.equ	ACD	= 7	; Analog Comparator Disable

; ACSRB - Analog Comparator Control And Status Register B
.equ	ACME	= 2	; Analog Comparator Multiplexer Enable
.equ	HLEV	= 6	; Hysteresis Level
.equ	HSEL	= 7	; Hysteresis Select


; ***** EEPROM ***********************
; EEAR - EEPROM Read/Write Access
.equ	EEARL	= EEAR	; For compatibility
.equ	EEAR0	= 0	; EEPROM Read/Write Access bit 0
.equ	EEAR1	= 1	; EEPROM Read/Write Access bit 1
.equ	EEAR2	= 2	; EEPROM Read/Write Access bit 2
.equ	EEAR3	= 3	; EEPROM Read/Write Access bit 3
.equ	EEAR4	= 4	; EEPROM Read/Write Access bit 4
.equ	EEAR5	= 5	; EEPROM Read/Write Access bit 5
.equ	EEAR6	= 6	; EEPROM Read/Write Access bit 6
.equ	EEAR7	= 7	; EEPROM Read/Write Access bit 7

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
.equ	EEPE	= 1	; EEPROM Write Enable
.equ	EEWE	= EEPE	; For compatibility
.equ	EEMPE	= 2	; EEPROM Master Write Enable
.equ	EEMWE	= EEMPE	; For compatibility
.equ	EERIE	= 3	; EEProm Ready Interrupt Enable
.equ	EEPM0	= 4	; EEPROM Programming Mode Bit 0
.equ	EEPM1	= 5	; EEPROM Programming Mode Bit 1


; ***** TIMER_COUNTER_1 **************
; TIMSK - Timer/Counter Interrupt Mask Register
.equ	ICIE1	= 3	; Timer/Counter1 Input Capture Interrupt Enable
.equ	TICIE	= ICIE1	; For compatibility
.equ	OCIE1B	= 5	; Timer/Counter1 Output CompareB Match Interrupt Enable
.equ	OCIE1A	= 6	; Timer/Counter1 Output CompareA Match Interrupt Enable
.equ	TOIE1	= 7	; Timer/Counter1 Overflow Interrupt Enable

; TIFR - Timer/Counter Interrupt Flag register
.equ	ICF1	= 3	; Input Capture Flag 1
.equ	OCF1B	= 5	; Output Compare Flag 1B
.equ	OCF1A	= 6	; Output Compare Flag 1A
.equ	TOV1	= 7	; Timer/Counter1 Overflow Flag

; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Pulse Width Modulator Select Bit 0
.equ	PWM10	= WGM10	; For compatibility
.equ	WGM11	= 1	; Pulse Width Modulator Select Bit 1
.equ	PWM11	= WGM11	; For compatibility
.equ	COM1B0	= 4	; Comparet Ouput Mode 1B, bit 0
.equ	COM1B1	= 5	; Compare Output Mode 1B, bit 1
.equ	COM1A0	= 6	; Comparet Ouput Mode 1A, bit 0
.equ	COM1A1	= 7	; Compare Output Mode 1A, bit 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Clock Select bit 0
.equ	CS11	= 1	; Clock Select 1 bit 1
.equ	CS12	= 2	; Clock Select1 bit 2
.equ	WGM12	= 3	; Waveform Generation Mode Bit 2
.equ	CTC1	= WGM12	; For compatibility
.equ	WGM13	= 4	; Waveform Generation Mode Bit 3
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6	; Force Output Compare for Channel B
.equ	FOC1A	= 7	; Force Output Compare for Channel A


; ***** TIMER_COUNTER_0 **************
; TIMSK - Timer/Counter Interrupt Mask Register
.equ	OCIE0A	= 0	; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	TOIE0	= 1	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter0 Output Compare Match B Interrupt Enable

; TIFR - Timer/Counter Interrupt Flag register
.equ	OCF0A	= 0	; Timer/Counter0 Output Compare Flag 0A
.equ	TOV0	= 1	; Timer/Counter0 Overflow Flag
.equ	OCF0B	= 2	; Timer/Counter0 Output Compare Flag 0B

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0_0	= 0	; 
.equ	OCR0_1	= 1	; 
.equ	OCR0_2	= 2	; 
.equ	OCR0_3	= 3	; 
.equ	OCR0_4	= 4	; 
.equ	OCR0_5	= 5	; 
.equ	OCR0_6	= 6	; 
.equ	OCR0_7	= 7	; 

; OCR0A - Timer/Counter0 Output Compare Register
.equ	OCR0A_0	= 0	; 
.equ	OCR0A_1	= 1	; 
.equ	OCR0A_2	= 2	; 
.equ	OCR0A_3	= 3	; 
.equ	OCR0A_4	= 4	; 
.equ	OCR0A_5	= 5	; 
.equ	OCR0A_6	= 6	; 
.equ	OCR0A_7	= 7	; 

; TCCR0A - Timer/Counter  Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	WGM01	= 1	; Waveform Generation Mode
.equ	COM0B0	= 4	; Compare Match Output B Mode
.equ	COM0B1	= 5	; Compare Match Output B Mode
.equ	COM0A0	= 6	; Compare Match Output A Mode
.equ	COM0A1	= 7	; Compare Match Output A Mode

; TCNT0 - Timer/Counter0
.equ	TCNT0_0	= 0	; 
.equ	TCNT0_1	= 1	; 
.equ	TCNT0_2	= 2	; 
.equ	TCNT0_3	= 3	; 
.equ	TCNT0_4	= 4	; 
.equ	TCNT0_5	= 5	; 
.equ	TCNT0_6	= 6	; 
.equ	TCNT0_7	= 7	; 

; TCCR0B - Timer/Counter Control Register B
.equ	TCCR0	= TCCR0B	; For compatibility
.equ	CS00	= 0	; Clock Select
.equ	CS01	= 1	; Clock Select
.equ	CS02	= 2	; Clock Select
.equ	WGM02	= 3	; 
.equ	FOC0B	= 6	; Force Output Compare B
.equ	FOC0A	= 7	; Force Output Compare B


; ***** EXTERNAL_INTERRUPT ***********
; PCMSK2 - Pin Change Mask Register 1
.equ	PCINT12	= 0	; Pin Change Enable Mask 12
.equ	PCINT13	= 1	; Pin Change Enable Mask 13
.equ	PCINT14	= 2	; Pin Change Enable Mask 14
.equ	PCINT15	= 3	; Pin Change Enable Mask 15
.equ	PCINT16	= 4	; Pin Change Enable Mask 16
.equ	PCINT17	= 5	; Pin Change Enable Mask 17

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; Pin Change Enable Mask 8
.equ	PCINT9	= 1	; Pin Change Enable Mask 9
.equ	PCINT10	= 2	; Pin Change Enable Mask 10
.equ	PCINT11	= 3	; Pin Change Enable Mask 11

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3
.equ	PCINT4	= 4	; Pin Change Enable Mask 4
.equ	PCINT5	= 5	; Pin Change Enable Mask 5
.equ	PCINT6	= 6	; Pin Change Enable Mask 6
.equ	PCINT7	= 7	; Pin Change Enable Mask 7

; GIFR - General Interrupt Flag Register
.equ	PCIF0	= 3	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 4	; Pin Change Interrupt Flag 1
.equ	PCIF2	= 5	; Pin Change Interrupt Flag 2
.equ	INTF0	= 6	; External Interrupt Flag 0

; GIMSK - General Interrupt Mask Register
.equ	PCIE0	= 3	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 4	; Pin Change Interrupt Enable 1
.equ	PCIE2	= 5	; Pin Change Interrupt Enable 2
.equ	INT0	= 6	; External Interrupt Request 0 Enable


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
.equ	ISC00	= 0	; Interrupt Sense Control 0 bit 0
.equ	ISC01	= 1	; Interrupt Sense Control 0 bit 1
.equ	SE	= 4	; Sleep Enable
.equ	SM0	= 5	; Sleep Mode Select Bit 0
.equ	SM1	= 6	; Sleep Mode Select Bit 1

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag

; OSCCAL0 - Oscillator Calibration Value
.equ	CAL00	= 0	; Oscillator Calibration Value Bit0
.equ	CAL01	= 1	; Oscillator Calibration Value Bit1
.equ	CAL02	= 2	; Oscillator Calibration Value Bit2
.equ	CAL03	= 3	; Oscillator Calibration Value Bit3
.equ	CAL04	= 4	; Oscillator Calibration Value Bit4
.equ	CAL05	= 5	; Oscillator Calibration Value Bit5
.equ	CAL06	= 6	; Oscillator Calibration Value Bit6
.equ	CAL07	= 7	; Oscillator Calibration Value Bit7

; OSCCAL1 - 
.equ	CAL10	= 0	; 
.equ	CAL11	= 1	; 

; OSCTCAL0A - 
.equ	TCAL0A0	= 0	; 
.equ	TCAL0A1	= 1	; 
.equ	TCAL0A2	= 2	; 
.equ	TCAL0A3	= 3	; 
.equ	TCAL0A4	= 4	; 
.equ	TCAL0A5	= 5	; 
.equ	TCAL0A6	= 6	; 
.equ	TCAL0A7	= 7	; 

; OSCTCAL0B - 
.equ	TCAL0B0	= 0	; 
.equ	TCAL0B1	= 1	; 
.equ	TCAL0B2	= 2	; 
.equ	TCAL0B3	= 3	; 
.equ	TCAL0B4	= 4	; 
.equ	TCAL0B5	= 5	; 
.equ	TCAL0B6	= 6	; 
.equ	TCAL0B7	= 7	; 

; GPIOR2 - General Purpose I/O Register 2
.equ	GPIOR20	= 0	; 
.equ	GPIOR21	= 1	; 
.equ	GPIOR22	= 2	; 
.equ	GPIOR23	= 3	; 
.equ	GPIOR24	= 4	; 
.equ	GPIOR25	= 5	; 
.equ	GPIOR26	= 6	; 
.equ	GPIOR27	= 7	; 

; GPIOR1 - General Purpose I/O Register 1
.equ	GPIOR10	= 0	; 
.equ	GPIOR11	= 1	; 
.equ	GPIOR12	= 2	; 
.equ	GPIOR13	= 3	; 
.equ	GPIOR14	= 4	; 
.equ	GPIOR15	= 5	; 
.equ	GPIOR16	= 6	; 
.equ	GPIOR17	= 7	; 

; GPIOR0 - General Purpose I/O Register 0
.equ	GPIOR00	= 0	; 
.equ	GPIOR01	= 1	; 
.equ	GPIOR02	= 2	; 
.equ	GPIOR03	= 3	; 
.equ	GPIOR04	= 4	; 
.equ	GPIOR05	= 5	; 
.equ	GPIOR06	= 6	; 
.equ	GPIOR07	= 7	; 

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRUSART0	= 1	; Power Reduction USART 0
.equ	PRUSART1	= 2	; Power Reduction USART 1
.equ	PRUSI	= 3	; Power Reduction USI
.equ	PRTIM0	= 4	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 5	; Power Reduction Timer/Counter1
.equ	PRTWI	= 6	; Power Reduction TWI

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPS2	= 2	; Clock Prescaler Select Bit 2
.equ	CLKPS3	= 3	; Clock Prescaler Select Bit 3

; CLKSR - Clock Setting Register
.equ	CKSEL0	= 0	; Clock Select Bit 0
.equ	CKSEL1	= 1	; Clock Select Bit 1
.equ	CKSEL2	= 2	; Clock Select Bit 2
.equ	CKSEL3	= 3	; Clock Select Bit 3
.equ	SUT	= 4	; Start-up Time
.equ	CKOUT_IO	= 5	; Clock Output (active low)
.equ	CSTR	= 6	; Clock Switch Trigger
.equ	OSCRDY	= 7	; Oscillator Ready

; CCP - Configuration Change Protection
.equ	CCP0	= 0	; Configuration Change Protection bit 0
.equ	CCP1	= 1	; Configuration Change Protection bit 1
.equ	CCP2	= 2	; Configuration Change Protection bit 2
.equ	CCP3	= 3	; Configuration Change Protection bit 3
.equ	CCP4	= 4	; Configuration Change Protection bit 4
.equ	CCP5	= 5	; Configuration Change Protection bit 5
.equ	CCP6	= 6	; Configuration Change Protection bit 6
.equ	CCP7	= 7	; Configuration Change Protection bit 7


; ***** USI **************************
; USIBR - USI Buffer Register
.equ	USIBR0	= 0	; USI Buffer Register bit 0
.equ	USIBR1	= 1	; USI Buffer Register bit 1
.equ	USIBR2	= 2	; USI Buffer Register bit 2
.equ	USIBR3	= 3	; USI Buffer Register bit 3
.equ	USIBR4	= 4	; USI Buffer Register bit 4
.equ	USIBR5	= 5	; USI Buffer Register bit 5
.equ	USIBR6	= 6	; USI Buffer Register bit 6
.equ	USIBR7	= 7	; USI Buffer Register bit 7

; USIDR - USI Data Register
.equ	USIDR0	= 0	; USI Data Register bit 0
.equ	USIDR1	= 1	; USI Data Register bit 1
.equ	USIDR2	= 2	; USI Data Register bit 2
.equ	USIDR3	= 3	; USI Data Register bit 3
.equ	USIDR4	= 4	; USI Data Register bit 4
.equ	USIDR5	= 5	; USI Data Register bit 5
.equ	USIDR6	= 6	; USI Data Register bit 6
.equ	USIDR7	= 7	; USI Data Register bit 7

; USISR - USI Status Register
.equ	USICNT0	= 0	; USI Counter Value Bit 0
.equ	USICNT1	= 1	; USI Counter Value Bit 1
.equ	USICNT2	= 2	; USI Counter Value Bit 2
.equ	USICNT3	= 3	; USI Counter Value Bit 3
.equ	USIDC	= 4	; Data Output Collision
.equ	USIPF	= 5	; Stop Condition Flag
.equ	USIOIF	= 6	; Counter Overflow Interrupt Flag
.equ	USISIF	= 7	; Start Condition Interrupt Flag

; USICR - USI Control Register
.equ	USITC	= 0	; Toggle Clock Port Pin
.equ	USICLK	= 1	; Clock Strobe
.equ	USICS0	= 2	; USI Clock Source Select Bit 0
.equ	USICS1	= 3	; USI Clock Source Select Bit 1
.equ	USIWM0	= 4	; USI Wire Mode Bit 0
.equ	USIWM1	= 5	; USI Wire Mode Bit 1
.equ	USIOIE	= 6	; Counter Overflow Interrupt Enable
.equ	USISIE	= 7	; Start Condition Interrupt Enable


; ***** USART0 ***********************
; UDR0 - USART I/O Data Register
.equ	UDR0_0	= 0	; USART I/O Data Register bit 0
.equ	UDR0_1	= 1	; USART I/O Data Register bit 1
.equ	UDR0_2	= 2	; USART I/O Data Register bit 2
.equ	UDR0_3	= 3	; USART I/O Data Register bit 3
.equ	UDR0_4	= 4	; USART I/O Data Register bit 4
.equ	UDR0_5	= 5	; USART I/O Data Register bit 5
.equ	UDR0_6	= 6	; USART I/O Data Register bit 6
.equ	UDR0_7	= 7	; USART I/O Data Register bit 7

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
.equ	TXEN0	= 3	; Transmitter Enable
.equ	RXEN0	= 4	; Receiver Enable
.equ	UDRIE0	= 5	; USART Data register Empty Interrupt Enable
.equ	TXCIE0	= 6	; TX Complete Interrupt Enable
.equ	RXCIE0	= 7	; RX Complete Interrupt Enable

; UCSR0C - USART Control and Status Register C
.equ	UCPOL0	= 0	; Clock Polarity
.equ	UCSZ00	= 1	; Character Size
.equ	UCPHA0	= UCSZ00	; For compatibility
.equ	UCSZ01	= 2	; Character Size
.equ	UDORD0	= UCSZ01	; For compatibility
.equ	USBS0	= 3	; Stop Bit Select
.equ	UPM00	= 4	; Parity Mode Bit 0
.equ	UPM01	= 5	; Parity Mode Bit 1
.equ	UMSEL00	= 6	; USART Mode Select
.equ	UMSEL0	= UMSEL00	; For compatibility
.equ	UMSEL01	= 7	; USART Mode Select
.equ	UMSEL1	= UMSEL01	; For compatibility

; UCSR0D - USART Control and Status Register D
.equ	SFDE0	= 5	; USART RX Start Frame Detection Enable
.equ	RXS0	= 6	; USART RX Start Flag
.equ	RXS	= RXS0	; For compatibility
.equ	RXSIE0	= 7	; USART RX Start Interrupt Enable
.equ	RXSIE	= RXSIE0	; For compatibility

; UBRR0H - USART Baud Rate Register High Byte
.equ	UBRR8	= 0	; USART Baud Rate Register bit 8
.equ	UBRR9	= 1	; USART Baud Rate Register bit 9
.equ	UBRR10	= 2	; USART Baud Rate Register bit 10
.equ	UBRR11	= 3	; USART Baud Rate Register bit 11

; UBRR0L - USART Baud Rate Register Low Byte
.equ	_UBRR0	= 0	; USART Baud Rate Register bit 0
.equ	_UBRR1	= 1	; USART Baud Rate Register bit 1
.equ	UBRR2	= 2	; USART Baud Rate Register bit 2
.equ	UBRR3	= 3	; USART Baud Rate Register bit 3
.equ	UBRR4	= 4	; USART Baud Rate Register bit 4
.equ	UBRR5	= 5	; USART Baud Rate Register bit 5
.equ	UBRR6	= 6	; USART Baud Rate Register bit 6
.equ	UBRR7	= 7	; USART Baud Rate Register bit 7


; ***** USART1 ***********************
; UDR1 - USART I/O Data Register
.equ	UDR1_0	= 0	; USART I/O Data Register bit 0
.equ	UDR1_1	= 1	; USART I/O Data Register bit 1
.equ	UDR1_2	= 2	; USART I/O Data Register bit 2
.equ	UDR1_3	= 3	; USART I/O Data Register bit 3
.equ	UDR1_4	= 4	; USART I/O Data Register bit 4
.equ	UDR1_5	= 5	; USART I/O Data Register bit 5
.equ	UDR1_6	= 6	; USART I/O Data Register bit 6
.equ	UDR1_7	= 7	; USART I/O Data Register bit 7

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
.equ	UCPHA1	= UCSZ10	; For compatibility
.equ	UCSZ11	= 2	; Character Size
.equ	UDORD1	= UCSZ11	; For compatibility
.equ	USBS1	= 3	; Stop Bit Select
.equ	UPM10	= 4	; Parity Mode Bit 0
.equ	UPM11	= 5	; Parity Mode Bit 1
.equ	UMSEL10	= 6	; USART Mode Select
.equ	UMSEL11	= 7	; USART Mode Select

; UCSR1D - USART Control and Status Register D
.equ	SFDE1	= 5	; USART RX Start Frame Detection Enable
.equ	RXS1	= 6	; USART RX Start Flag
;.equ	RXS	= RXS1	; For compatibility
.equ	RXSIE1	= 7	; USART RX Start Interrupt Enable
;.equ	RXSIE	= RXSIE1	; For compatibility

; UBRR1H - USART Baud Rate Register High Byte
.equ	UBRR_8	= 0	; USART Baud Rate Register bit 8
.equ	UBRR_9	= 1	; USART Baud Rate Register bit 9
.equ	UBRR_10	= 2	; USART Baud Rate Register bit 10
.equ	UBRR_11	= 3	; USART Baud Rate Register bit 11

; UBRR1L - USART Baud Rate Register Low Byte
.equ	UBRR_0	= 0	; USART Baud Rate Register bit 0
.equ	UBRR_1	= 1	; USART Baud Rate Register bit 1
.equ	UBRR_2	= 2	; USART Baud Rate Register bit 2
.equ	UBRR_3	= 3	; USART Baud Rate Register bit 3
.equ	UBRR_4	= 4	; USART Baud Rate Register bit 4
.equ	UBRR_5	= 5	; USART Baud Rate Register bit 5
.equ	UBRR_6	= 6	; USART Baud Rate Register bit 6
.equ	UBRR_7	= 7	; USART Baud Rate Register bit 7


; ***** WATCHDOG *********************
; WDTCSR - Watchdog Timer Control and Status Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDP3	= 5	; Watchdog Timer Prescaler Bit 3
.equ	WDIE	= 6	; Watchdog Timer Interrupt Enable
.equ	WDIF	= 7	; Watchdog Timer Interrupt Flag



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lockbit
.equ	LB2	= 1	; Lockbit


; ***** FUSES ************************************************************
; LOW fuse bits
;.equ	CKSEL0	= 0	; Select Clock Source
;.equ	CKSEL1	= 1	; Select Clock Source
;.equ	CKSEL2	= 2	; Select Clock Source
;.equ	CKSEL3	= 3	; Select Clock Source
;.equ	SUT	= 4	; Select start-up time
.equ	CKOUT	= 6	; Clock output
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown-out Detector trigger level
.equ	EESAVE	= 3	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 4	; Watchdog Timer Always On
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	DWEN	= 6	; debugWIRE Enable
.equ	RSTDISBL	= 7	; External reset disable

; EXTENDED fuse bits
.equ	SELFPRGEN	= 0	; Self Programming Enable
.equ	BODACT0	= 1	; Brown-out detector mode
.equ	BODACT1	= 2	; Brown-out detector mode
.equ	BODPD0	= 3	; Brown-out detector mode
.equ	BODPD1	= 4	; Brown-out detector mode



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
.equ	E2END	= 0x00ff
.equ	EEPROMEND	= 0x00ff
.equ	EEADRBITS	= 8
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY EEPROM 256
#pragma AVRPART MEMORY INT_SRAM SIZE 1024
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0x0
.equ	NRWW_STOP_ADDR	= 0x1fff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x0
.equ	PAGESIZE	= 16



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0002	; External Interrupt Request 0
.equ	PCI0addr	= 0x0004	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x0006	; Pin Change Interrupt Request 1
.equ	PCI2addr	= 0x0008	; Pin Change Interrupt Request 2
.equ	WDTaddr	= 0x000a	; Watchdog Time-out Interrupt
.equ	ICP1addr	= 0x000c	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x000e	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x0010	; Timer/Counter1 Compare Match B
.equ	OVF1addr	= 0x0012	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x0014	; TimerCounter0 Compare Match A
.equ	OC0Baddr	= 0x0016	; TimerCounter0 Compare Match B
.equ	OVF0addr	= 0x0018	; Timer/Couner0 Overflow
.equ	ACIaddr	= 0x001a	; Analog Comparator
.equ	ADCCaddr	= 0x001c	; ADC Conversion Complete
.equ	USART0__STARTaddr	= 0x001e	; USART0, Start
.equ	URXC0addr	= 0x0020	; USART0, Rx Complete
.equ	UDRE0addr	= 0x0022	; USART0 Data Register Empty
.equ	UTXC0addr	= 0x0024	; USART0, Tx Complete
.equ	USART1__STARTaddr	= 0x0026	; USART1, Start
.equ	URXC1addr	= 0x0028	; USART1, Rx Complete
.equ	UDRE1addr	= 0x002a	; USART1 Data Register Empty
.equ	UTXC1addr	= 0x002c	; USART1, Tx Complete
.equ	USI_STARTaddr	= 0x002e	; USI Start Condition
.equ	USI_OVFaddr	= 0x0030	; USI Overflow
.equ	TWIaddr	= 0x0032	; Two-wire Serial Interface
.equ	ERDYaddr	= 0x0034	; EEPROM Ready
.equ	QTRIPaddr	= 0x0036	; Touch Sensing

.equ	INT_VECTORS_SIZE	= 56	; size in words

#endif  /* _TN1634DEF_INC_ */

; ***** END OF FILE ******************************************************
