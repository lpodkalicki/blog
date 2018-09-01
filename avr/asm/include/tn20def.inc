;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATtiny20.xml ************
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn20def.inc"
;* Title             : Register/Bit Definitions for the ATtiny20
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny20
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

#ifndef _TN20DEF_INC_
#define _TN20DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny20
#pragma AVRPART ADMIN PART_NAME ATtiny20
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x91
.equ	SIGNATURE_002	= 0x0f

#pragma AVRPART CORE CORE_VERSION AVR8L_0


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	CCP	= 0x3c
.equ	RSTFLR	= 0x3b
.equ	MCUCR	= 0x3a
.equ	OSCCAL	= 0x39
.equ	CLKMSR	= 0x37
.equ	CLKPSR	= 0x36
.equ	PRR	= 0x35
.equ	QTCSR	= 0x34
.equ	NVMCMD	= 0x33
.equ	NVMCSR	= 0x32
.equ	WDTCSR	= 0x31
.equ	SPCR	= 0x30
.equ	SPSR	= 0x2f
.equ	SPDR	= 0x2e
.equ	TWSCRA	= 0x2d
.equ	TWSCRB	= 0x2c
.equ	TWSSRA	= 0x2b
.equ	TWSA	= 0x2a
.equ	TWSAM	= 0x29
.equ	TWSD	= 0x28
.equ	GTCCR	= 0x27
.equ	TIMSK	= 0x26
.equ	TIFR	= 0x25
.equ	TCCR1A	= 0x24
.equ	TCCR1B	= 0x23
.equ	TCCR1C	= 0x22
.equ	TCNT1H	= 0x21
.equ	TCNT1L	= 0x20
.equ	OCR1AL	= 0x1e
.equ	OCR1AH	= 0x1f
.equ	OCR1BL	= 0x1c
.equ	OCR1BH	= 0x1d
.equ	ICR1L	= 0x1a
.equ	ICR1H	= 0x1b
.equ	TCCR0A	= 0x19
.equ	TCCR0B	= 0x18
.equ	TCNT0	= 0x17
.equ	OCR0A	= 0x16
.equ	OCR0B	= 0x15
.equ	ACSRA	= 0x14
.equ	ACSRB	= 0x13
.equ	ADCSRA	= 0x12
.equ	ADCSRB	= 0x11
.equ	ADMUX	= 0x10
.equ	ADCH	= 0x0f
.equ	ADCL	= 0x0e
.equ	DIDR0	= 0x0d
.equ	GIMSK	= 0x0c
.equ	GIFR	= 0x0b
.equ	PCMSK1	= 0x0a
.equ	PCMSK0	= 0x09
.equ	PORTCR	= 0x08
.equ	PUEB	= 0x07
.equ	PORTB	= 0x06
.equ	DDRB	= 0x05
.equ	PINB	= 0x04
.equ	PUEA	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

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


; ***** WATCHDOG *********************
; WDTCSR - Watchdog Timer Control and Status Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDP3	= 5	; Watchdog Timer Prescaler Bit 3
.equ	WDIE	= 6	; Watchdog Timer Interrupt Enable
.equ	WDIF	= 7	; Watchdog Timer Interrupt Flag


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
.equ	REFS	= 6	; Reference Selection Bit

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

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; ADC0 Digital input Disable
.equ	ADC1D	= 1	; ADC1 Digital input Disable
.equ	ADC2D	= 2	; ADC2 Digital input Disable
.equ	ADC3D	= 3	; AREF Digital Input Disable
.equ	ADC4D	= 4	; ADC3 Digital input Disable
.equ	ADC5D	= 5	; ADC4 Digital input Disable
.equ	ADC6D	= 6	; ADC5 Digital input Disable
.equ	ADC7D	= 7	; ADC6 Digital input Disable


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


; ***** CPU **************************
; CCP - Configuration Change Protection
.equ	CCP0	= 0	; Configuration Change Protection bit 0
.equ	CCP1	= 1	; Configuration Change Protection bit 1
.equ	CCP2	= 2	; Configuration Change Protection bit 2
.equ	CCP3	= 3	; Configuration Change Protection bit 3
.equ	CCP4	= 4	; Configuration Change Protection bit 4
.equ	CCP5	= 5	; Configuration Change Protection bit 5
.equ	CCP6	= 6	; Configuration Change Protection bit 6
.equ	CCP7	= 7	; Configuration Change Protection bit 7

; SREG - Status Register
.equ	SREG_C	= 0	; Carry Flag
.equ	SREG_Z	= 1	; Zero Flag
.equ	SREG_N	= 2	; Negative Flag
.equ	SREG_V	= 3	; Two's Complement Overflow Flag
.equ	SREG_S	= 4	; Sign Bit
.equ	SREG_H	= 5	; Half Carry Flag
.equ	SREG_T	= 6	; Bit Copy Storage
.equ	SREG_I	= 7	; Global Interrupt Enable

; CLKMSR - Clock Main Settings Register
.equ	CLKMS0	= 0	; Clock Main Select Bit 0
.equ	CLKMS1	= 1	; Clock Main Select Bit 1

; CLKPSR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPS2	= 2	; Clock Prescaler Select Bit 2
.equ	CLKPS3	= 3	; Clock Prescaler Select Bit 3

; OSCCAL - Oscillator Calibration Value
.equ	CAL0	= 0	; Oscillator Calibration Value Bit0
.equ	CAL1	= 1	; Oscillator Calibration Value Bit1
.equ	CAL2	= 2	; Oscillator Calibration Value Bit2
.equ	CAL3	= 3	; Oscillator Calibration Value Bit3
.equ	CAL4	= 4	; Oscillator Calibration Value Bit4
.equ	CAL5	= 5	; Oscillator Calibration Value Bit5
.equ	CAL6	= 6	; Oscillator Calibration Value Bit6
.equ	CAL7	= 7	; Oscillator Calibration Value Bit7

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRTIM0	= 1	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 2	; Power Reduction Timer/Counter1
.equ	PRSPI	= 3	; Power Reduction Serial Peripheral Interface
.equ	PRTWI	= 4	; Power Reduction TWI

; RSTFLR - Reset Flag Register
.equ	PORF	= 0	; Power-on Reset Flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag

; NVMCSR - Non-Volatile Memory Control and Status Register
.equ	NVMBSY	= 7	; Non-Volatile Memory Busy

; NVMCMD - Non-Volatile Memory Command
.equ	NVMCMD0	= 0	; 
.equ	NVMCMD1	= 1	; 
.equ	NVMCMD2	= 2	; 
.equ	NVMCMD3	= 3	; 
.equ	NVMCMD4	= 4	; 
.equ	NVMCMD5	= 5	; 

; MCUCR - MCU Control Register
.equ	SE	= 0	; 
.equ	SM0	= 1	; 
.equ	SM1	= 2	; 
.equ	SM2	= 3	; 
.equ	BODS	= 4	; 
.equ	ISC00	= 6	; 
.equ	ISC01	= 7	; 


; ***** EXTERNAL_INTERRUPT ***********
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
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	PCIF0	= 4	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 5	; Pin Change Interrupt Flag 1

; GIMSK - General Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	PCIE0	= 4	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 5	; Pin Change Interrupt Enable 1


; ***** TIMER_COUNTER_0 **************
; TCCR0A - Timer/Counter 0 Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	WGM01	= 1	; Waveform Generation Mode
.equ	COM0B0	= 4	; Compare Output Mode for Channel B bit 0
.equ	COM0B1	= 5	; Compare Output Mode for Channel B bit 1
.equ	COM0A0	= 6	; Compare Output Mode for Channel A bit 0
.equ	COM0A1	= 7	; Compare Output Mode for Channel A bit 1

; TCCR0B - Timer/Counter 0 Control Register B
.equ	CS00	= 0	; Clock Select
.equ	CS01	= 1	; Clock Select
.equ	CS02	= 2	; Clock Select
.equ	WGM02	= 3	; Waveform Generation Mode
.equ	FOC0B	= 6	; Force Output Compare B
.equ	FOC0A	= 7	; Force Output Compare A

; TIMSK - Timer Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter Output Compare Match B Interrupt Enable
.equ	TOIE1	= 3	; Overflow Interrupt Enable
.equ	OCIE1A	= 4	; Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 5	; Output Compare B Match Interrupt Enable
.equ	ICIE1	= 7	; Input Capture Interrupt Enable

; TIFR - Overflow Interrupt Enable
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Output Compare Flag 0 A
.equ	OCF0B	= 2	; Output Compare Flag 0 B
.equ	TOV1	= 3	; Timer Overflow Flag
.equ	OCF1A	= 4	; Timer Output Compare Flag 1A
.equ	OCF1B	= 5	; Timer Output Compare Flag 1B
.equ	ICF1	= 7	; Input Capture Flag

; GTCCR - General Timer/Counter Control Register
.equ	PSR	= 0	; Prescaler Reset
.equ	TSM	= 7	; Timer Synchronization Mode

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
.equ	OCR0_0	= 0	; 
.equ	OCR0_1	= 1	; 
.equ	OCR0_2	= 2	; 
.equ	OCR0_3	= 3	; 
.equ	OCR0_4	= 4	; 
.equ	OCR0_5	= 5	; 
.equ	OCR0_6	= 6	; 
.equ	OCR0_7	= 7	; 

; OCR0B - Timer/Counter0 Output Compare Register
.equ	OCR0B_0	= 0	; 
.equ	OCR0B_1	= 1	; 
.equ	OCR0B_2	= 2	; 
.equ	OCR0B_3	= 3	; 
.equ	OCR0B_4	= 4	; 
.equ	OCR0B_5	= 5	; 
.equ	OCR0B_6	= 6	; 
.equ	OCR0B_7	= 7	; 


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


; ***** TIMER_COUNTER_1 **************
; TCCR1A - Timer/Counter1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode Bit 0
.equ	PWM10	= WGM10	; For compatibility
.equ	WGM11	= 1	; Waveform Generation Mode Bit 1
.equ	PWM11	= WGM11	; For compatibility
.equ	COM1B0	= 4	; Compare Output Mode 1B, bit 0
.equ	COM1B1	= 5	; Compare Output Mode 1B, bit 1
.equ	COM1A0	= 6	; Compare Ouput Mode 1A, bit 0
.equ	COM1A1	= 7	; Compare Output Mode 1A, bit 1

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Clock Select bit 0
.equ	CS11	= 1	; Clock Select 1 bit 1
.equ	CS12	= 2	; Clock Select1 bit 2
.equ	WGM12	= 3	; Waveform Generation Mode
.equ	CTC10	= WGM12	; For compatibility
.equ	WGM13	= 4	; Waveform Generation Mode
.equ	CTC11	= WGM13	; For compatibility
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6	; Force Output Compare for channel B
.equ	FOC1A	= 7	; Force Output Compare for channel A

; TCNT1H - Timer/Counter1 High
.equ	TCNT1_8	= 0	; 
.equ	TCNT1_9	= 1	; 
.equ	TCNT1_10	= 2	; 
.equ	TCNT1_11	= 3	; 
.equ	TCNT1_12	= 4	; 
.equ	TCNT1_13	= 5	; 
.equ	TCNT1_14	= 6	; 
.equ	TCNT1_15	= 7	; 

; TCNT1L - Timer/Counter1 Low
.equ	TCNT1_0	= 0	; 
.equ	TCNT1_1	= 1	; 
.equ	TCNT1_2	= 2	; 
.equ	TCNT1_3	= 3	; 
.equ	TCNT1_4	= 4	; 
.equ	TCNT1_5	= 5	; 
.equ	TCNT1_6	= 6	; 
.equ	TCNT1_7	= 7	; 

; TIMSK - Timer Interrupt Mask Register
;.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
;.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable
;.equ	OCIE0B	= 2	; Timer/Counter Output Compare Match B Interrupt Enable
;.equ	TOIE1	= 3	; Overflow Interrupt Enable
;.equ	OCIE1A	= 4	; Output Compare A Match Interrupt Enable
;.equ	OCIE1B	= 5	; Output Compare B Match Interrupt Enable
;.equ	ICIE1	= 7	; Input Capture Interrupt Enable

; TIFR - Overflow Interrupt Enable
;.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
;.equ	OCF0A	= 1	; Output Compare Flag 0 A
;.equ	OCF0B	= 2	; Output Compare Flag 0 B
;.equ	TOV1	= 3	; Timer Overflow Flag
;.equ	OCF1A	= 4	; Timer Output Compare Flag 1A
;.equ	OCF1B	= 5	; Timer Output Compare Flag 1B
;.equ	ICF1	= 7	; Input Capture Flag

; GTCCR - General Timer/Counter Control Register
;.equ	PSR	= 0	; Prescaler Reset
;.equ	TSM	= 7	; Timer Synchronization Mode


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



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lockbit
.equ	LB2	= 1	; Lockbit


; ***** FUSES ************************************************************
; BYTE0 fuse bits
.equ	RSTDISBL	= 0	; Disable external reset
.equ	WDTON	= 1	; Watch dog timer always on
.equ	CKOUT	= 2	; Output external clock
.equ	BODLEVEL0	= 4	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 5	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 6	; Brown-out Detector trigger level



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x03ff	; Note: Word address
.equ	IOEND	= 0x003f
.equ	SRAM_START	= 0x0040
.equ	SRAM_SIZE	= 128
.equ	RAMEND	= 0x00bf
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x0000
.equ	EEPROMEND	= 0x0000

; ***** MEMORY MAPPED NVM ************************************************
.equ	MAPPED_FLASH_START	= 0x4000
.equ	MAPPED_LOCKBITS_0	= 0x3f00
.equ	MAPPED_CONFIG_0	= 0x3f40
.equ	MAPPED_CALIB_0	= 0x3f80
.equ	MAPPED_SIGN_0	= 0x3fc0
.equ	MAPPED_SIGN_1	= 0x3fc1
.equ	MAPPED_SIGN_2	= 0x3fc2
.equ	MAPPED_FLASH_SIZE	= 0x0800
.equ	MAPPED_FLASH_END	= 0x47ff
#pragma AVRPART MEMORY PROG_FLASH 2048
#pragma AVRPART MEMORY EEPROM 0
#pragma AVRPART MEMORY INT_SRAM SIZE 128
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x40



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	PAGESIZE	= 32



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0001	; External Interrupt Request 0
.equ	PCI0addr	= 0x0002	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x0003	; Pin Change Interrupt Request 1
.equ	WDTaddr	= 0x0004	; Watchdog Time-out
.equ	ICP1addr	= 0x0005	; Timer/Counter1 Input Capture
.equ	OC1Aaddr	= 0x0006	; Timer/Counter1 Compare Match A
.equ	OC1Baddr	= 0x0007	; Timer/Counter1 Compare Match B
.equ	OVF1addr	= 0x0008	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x0009	; Timer/Counter0 Compare Match A
.equ	OC0Baddr	= 0x000a	; Timer/Counter0 Compare Match B
.equ	OVF0addr	= 0x000b	; Timer/Counter0 Overflow
.equ	ACIaddr	= 0x000c	; Analog Comparator
.equ	ADCCaddr	= 0x000d	; Conversion Complete
.equ	TWIaddr	= 0x000e	; Two-Wire Interface
.equ	SPIaddr	= 0x000f	; Serial Peripheral Interface
.equ	QTRIPaddr	= 0x0010	; Touch Sensing

.equ	INT_VECTORS_SIZE	= 17	; size in words

#pragma AVRPART CORE INSTRUCTIONS_NOT_SUPPORTED break

#endif  /* _TN20DEF_INC_ */

; ***** END OF FILE ******************************************************
