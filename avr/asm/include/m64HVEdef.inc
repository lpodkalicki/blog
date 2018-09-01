;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATmega64HVE.xml *********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m64HVEdef.inc"
;* Title             : Register/Bit Definitions for the ATmega64HVE
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega64HVE
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

#ifndef _M64HVEDEF_INC_
#define _M64HVEDEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATmega64HVE
#pragma AVRPART ADMIN PART_NAME ATmega64HVE
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x96
.equ	SIGNATURE_002	= 0x10

#pragma AVRPART CORE CORE_VERSION V2E
#pragma AVRPART CORE EXTENSIONS MEXT 1


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	VADAC3	= 0xf6	; MEMORY MAPPED
.equ	VADAC2	= 0xf5	; MEMORY MAPPED
.equ	VADAC1	= 0xf4	; MEMORY MAPPED
.equ	VADAC0	= 0xf3	; MEMORY MAPPED
.equ	VADICL	= 0xf1	; MEMORY MAPPED
.equ	VADICH	= 0xf2	; MEMORY MAPPED
.equ	CADAC3	= 0xf0	; MEMORY MAPPED
.equ	CADAC2	= 0xef	; MEMORY MAPPED
.equ	CADAC1	= 0xee	; MEMORY MAPPED
.equ	CADAC0	= 0xed	; MEMORY MAPPED
.equ	CADICL	= 0xeb	; MEMORY MAPPED
.equ	CADICH	= 0xec	; MEMORY MAPPED
.equ	CADRCLH	= 0xea	; MEMORY MAPPED
.equ	CADRCLL	= 0xe9	; MEMORY MAPPED
.equ	ADIMR	= 0xe8	; MEMORY MAPPED
.equ	ADIFR	= 0xe7	; MEMORY MAPPED
.equ	ADCRE	= 0xe6	; MEMORY MAPPED
.equ	ADCRD	= 0xe5	; MEMORY MAPPED
.equ	ADCRC	= 0xe4	; MEMORY MAPPED
.equ	ADCRB	= 0xe3	; MEMORY MAPPED
.equ	ADCRA	= 0xe2	; MEMORY MAPPED
.equ	ADSCSRB	= 0xe1	; MEMORY MAPPED
.equ	ADSCSRA	= 0xe0	; MEMORY MAPPED
.equ	PBOV	= 0xdc	; MEMORY MAPPED
.equ	PLLCSR	= 0xd8	; MEMORY MAPPED
.equ	BGLR	= 0xd4	; MEMORY MAPPED
.equ	BGCRA	= 0xd3	; MEMORY MAPPED
.equ	BGCRB	= 0xd2	; MEMORY MAPPED
.equ	BGCSRA	= 0xd1	; MEMORY MAPPED
.equ	LINDAT	= 0xca	; MEMORY MAPPED
.equ	LINSEL	= 0xc9	; MEMORY MAPPED
.equ	LINIDR	= 0xc8	; MEMORY MAPPED
.equ	LINDLR	= 0xc7	; MEMORY MAPPED
.equ	LINBRRH	= 0xc6	; MEMORY MAPPED
.equ	LINBRRL	= 0xc5	; MEMORY MAPPED
.equ	LINBTR	= 0xc4	; MEMORY MAPPED
.equ	LINERR	= 0xc3	; MEMORY MAPPED
.equ	LINENIR	= 0xc2	; MEMORY MAPPED
.equ	LINSIR	= 0xc1	; MEMORY MAPPED
.equ	LINCR	= 0xc0	; MEMORY MAPPED
.equ	OCR1B	= 0x89	; MEMORY MAPPED
.equ	OCR1A	= 0x88	; MEMORY MAPPED
.equ	TCNT1L	= 0x84	; MEMORY MAPPED
.equ	TCNT1H	= 0x85	; MEMORY MAPPED
.equ	TCCR1C	= 0x82	; MEMORY MAPPED
.equ	TCCR1B	= 0x81	; MEMORY MAPPED
.equ	TCCR1A	= 0x80	; MEMORY MAPPED
.equ	DIDR0	= 0x7e	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK1	= 0x6c	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	SOSCCALB	= 0x67	; MEMORY MAPPED
.equ	SOSCCALA	= 0x66	; MEMORY MAPPED
.equ	PRR0	= 0x64	; MEMORY MAPPED
.equ	WDTCLR	= 0x63	; MEMORY MAPPED
.equ	WUTCSR	= 0x62	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	OCDR	= 0x31
.equ	TCCR0C	= 0x2f
.equ	SPDR	= 0x2e
.equ	SPSR	= 0x2d
.equ	SPCR	= 0x2c
.equ	GPIOR2	= 0x2b
.equ	GPIOR1	= 0x2a
.equ	OCR0B	= 0x29
.equ	OCR0A	= 0x28
.equ	TCNT0L	= 0x26
.equ	TCNT0H	= 0x27
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
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
.equ	PORTB	= 0x05
.equ	DDRB	= 0x04
.equ	PINB	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

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
.equ	EEPE	= 1	; EEPROM Write Enable
.equ	EEWE	= EEPE	; For compatibility
.equ	EEMPE	= 2	; EEPROM Master Write Enable
.equ	EEMWE	= EEMPE	; For compatibility
.equ	EERIE	= 3	; EEProm Ready Interrupt Enable
.equ	EEPM0	= 4	; 
.equ	EEPM1	= 5	; 


; ***** TIMER_COUNTER_1 **************
; TCCR1A - Timer/Counter 1 Control Register A
.equ	WGM10	= 0	; Waveform Generation Mode
.equ	ICS1	= 3	; Input Capture Select
.equ	ICES1	= 4	; Input Capture Edge Select
.equ	ICNC1	= 5	; Input Capture Noise Canceler
.equ	ICEN1	= 6	; Input Capture Mode Enable
.equ	TCW1	= 7	; Timer/Counter Width

; TCCR1B - Timer/Counter1 Control Register B
.equ	CS10	= 0	; Clock Select1 bit 0
.equ	CS11	= 1	; Clock Select1 bit 1
.equ	CS12	= 2	; Clock Select1 bit 2

; OCR1A - Output Compare Register 1A
.equ	OCR1A0	= 0	; 
.equ	OCR1A1	= 1	; 
.equ	OCR1A2	= 2	; 
.equ	OCR1A3	= 3	; 
.equ	OCR1A4	= 4	; 
.equ	OCR1A5	= 5	; 
.equ	OCR1A6	= 6	; 
.equ	OCR1A7	= 7	; 

; OCR1B - Output Compare Register B
.equ	OCR1B0	= 0	; 
.equ	OCR1B1	= 1	; 
.equ	OCR1B2	= 2	; 
.equ	OCR1B3	= 3	; 
.equ	OCR1B4	= 4	; 
.equ	OCR1B5	= 5	; 
.equ	OCR1B6	= 6	; 
.equ	OCR1B7	= 7	; 

; TIMSK1 - Timer/Counter Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output Compare A Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output Compare B Interrupt Enable
.equ	ICIE1	= 3	; Timer/Counter n Input Capture Interrupt Enable

; TIFR1 - Timer/Counter Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Timer/Counter1 Output Compare Flag A
.equ	OCF1B	= 2	; Timer/Counter1 Output Compare Flag B
.equ	ICF1	= 3	; Timer/Counter 1 Input Capture Flag

; GTCCR - General Timer/Counter Control Register
.equ	PSRSYNC	= 0	; Prescaler Reset
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


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

; PBOV - Port B Override
.equ	PBOE0	= 0	; Port B Override Enable 0
.equ	PBOE3	= 3	; Port B Override Enable 3
.equ	PBOVCE	= 7	; Port B Override Change Enable


; ***** TIMER_COUNTER_0 **************
; TCCR0A - Timer/Counter 0 Control Register A
.equ	WGM00	= 0	; Waveform Generation Mode
.equ	ICS0	= 3	; Input Capture Select
.equ	ICES0	= 4	; Input Capture Edge Select
.equ	ICNC0	= 5	; Input Capture Noise Canceler
.equ	ICEN0	= 6	; Input Capture Mode Enable
.equ	TCW0	= 7	; Timer/Counter Width

; TCCR0B - Timer/Counter0 Control Register B
.equ	CS00	= 0	; Clock Select0 bit 0
.equ	CS01	= 1	; Clock Select0 bit 1
.equ	CS02	= 2	; Clock Select0 bit 2

; OCR0A - Output Compare Register 0A
.equ	OCR0A0	= 0	; 
.equ	OCR0A1	= 1	; 
.equ	OCR0A2	= 2	; 
.equ	OCR0A3	= 3	; 
.equ	OCR0A4	= 4	; 
.equ	OCR0A5	= 5	; 
.equ	OCR0A6	= 6	; 
.equ	OCR0A7	= 7	; 

; OCR0B - Output Compare Register B
.equ	OCR0B0	= 0	; 
.equ	OCR0B1	= 1	; 
.equ	OCR0B2	= 2	; 
.equ	OCR0B3	= 3	; 
.equ	OCR0B4	= 4	; 
.equ	OCR0B5	= 5	; 
.equ	OCR0B6	= 6	; 
.equ	OCR0B7	= 7	; 

; TIMSK0 - Timer/Counter Interrupt Mask Register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare A Interrupt Enable
.equ	OCIE0B	= 2	; Timer/Counter0 Output Compare B Interrupt Enable
.equ	ICIE0	= 3	; Timer/Counter n Input Capture Interrupt Enable

; TIFR0 - Timer/Counter Interrupt Flag register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Timer/Counter0 Output Compare Flag A
.equ	OCF0B	= 2	; Timer/Counter0 Output Compare Flag B
.equ	ICF0	= 3	; Timer/Counter 0 Input Capture Flag

; GTCCR - General Timer/Counter Control Register
;.equ	PSRSYNC	= 0	; Prescaler Reset
;.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** BOOT_LOAD ********************
; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	LBSET	= 3	; Lock Bit Set
.equ	RWWSRE	= 4	; Read-While-Write Section Read Enable
.equ	SIGRD	= 5	; Signature Row Read
.equ	RWWSB	= 6	; Read-While-Write Section Busy
.equ	SPMIE	= 7	; SPM Interrupt Enable


; ***** AD_CONVERTER *****************
; ADSCSRA - ADC Synchronization Control and Status Register
.equ	SCMD0	= 0	; Synchronization Command
.equ	SCMD1	= 1	; Synchronization Command
.equ	SBSY	= 2	; Synchronization Busy

; ADSCSRB - ADC Synchronization Control and Status Register
.equ	CADICRB	= 0	; CADIC Data Read Out Busy
.equ	CADACRB	= 1	; CADAC Data Read Out Busy
.equ	CADICPS	= 2	; C-ADC Instantaneous Conversion Polarity Status
.equ	VADICRB	= 4	; VADIC Data Read Out Busy
.equ	VADACRB	= 5	; VADAC Data Read Out Busy
.equ	VADICPS	= 6	; V-ADC Instantaneous Conversion Polarity Status

; ADCRA - ADC Control Register A
.equ	CKSEL	= 0	; Sampling Clock Select
.equ	ADCMS0	= 1	; C-ADC Chopper Mode Select
.equ	ADCMS1	= 2	; C-ADC Chopper Mode Select
.equ	ADPSEL	= 3	; ADC Polarity Select

; ADCRB - ADC Control Register B
.equ	ADADES0	= 0	; Accumulated Decimation Ratio Select
.equ	ADADES1	= 1	; Accumulated Decimation Ratio Select
.equ	ADADES2	= 2	; Accumulated Decimation Ratio Select
.equ	ADIDES0	= 3	; Instantaneous Decimation Ratio Select
.equ	ADIDES1	= 4	; Instantaneous Decimation Ratio Select

; ADCRC - ADC Control Register B
.equ	CADRCT0	= 0	; C-ADC Regular Current Count Threshold
.equ	CADRCT1	= 1	; C-ADC Regular Current Count Threshold
.equ	CADRCT2	= 2	; C-ADC Regular Current Count Threshold
.equ	CADRCT3	= 3	; C-ADC Regular Current Count Threshold
.equ	CADRCM0	= 4	; C-ADC Regular Current Comparator Mode
.equ	CADRCM1	= 5	; C-ADC Regular Current Comparator Mode
.equ	CADEN	= 7	; C-ADC Enable

; ADCRD - ADC Control Register D
.equ	CADDSEL	= 0	; C-ADC Diagnostics Channel Select
.equ	CADPDM0	= 1	; C-ADC Pin Diagnostics Mode
.equ	CADPDM1	= 2	; C-ADC Pin Diagnostics Mode
.equ	CADG0	= 3	; C-ADC Gain
.equ	CADG1	= 4	; C-ADC Gain
.equ	CADG2	= 5	; C-ADC Gain

; ADCRE - ADC Control Register E
.equ	VADMUX0	= 0	; V-ADC Channel Select
.equ	VADMUX1	= 1	; V-ADC Channel Select
.equ	VADMUX2	= 2	; V-ADC Channel Select
.equ	VADPDM0	= 3	; V-ADC Pin Diagnostics Mode
.equ	VADPDM1	= 4	; V-ADC Pin Diagnostics Mode
.equ	VADREFS	= 5	; V-ADC Reference Select
.equ	VADEN	= 7	; V-ADC Enable

; ADIFR - ADC Interrupt Flag Register
.equ	CADICIF	= 0	; C-ADC Instantaneous Current Interrupt Flag
.equ	CADACIF	= 1	; C-ADC Accumulated Current Interrupt Flag
.equ	CADRCIF	= 2	; C-ADC Regulator Current Interrupt Flag
.equ	VADICIF	= 4	; V-DAC Instantaneous Voltage Interrupt Flag
.equ	VADACIF	= 5	; V-ADC Accumulated Voltage Interrupt Flag

; ADIMR - ADC Interrupt Mask Register
.equ	CADICIE	= 0	; C-ADC Instantaneous Current Interrupt Enable
.equ	CADACIE	= 1	; C-ADC Accumulated Current Interrupt Enable
.equ	CADRCIE	= 2	; C-ADC Regulator Current Interrupt Enable
.equ	VADICIE	= 4	; V-DAC Instantaneous Voltage Interrupt Enable
.equ	VADACIE	= 5	; V-ADC Accumulated Voltage Interrupt Enable

; CADRCLH - CC-ADC Regulator Current Comparator Threshold Level
.equ	CADRCL8	= 0	; 
.equ	CADRCL9	= 1	; 
.equ	CADRCL10	= 2	; 
.equ	CADRCL11	= 3	; 
.equ	CADRCL12	= 4	; 
.equ	CADRCL13	= 5	; 
.equ	CADRCL14	= 6	; 
.equ	CADRCL15	= 7	; 

; CADRCLL - CC-ADC Regulator Current Comparator Threshold Level
.equ	CADRCL0	= 0	; 
.equ	CADRCL1	= 1	; 
.equ	CADRCL2	= 2	; 
.equ	CADRCL3	= 3	; 
.equ	CADRCL4	= 4	; 
.equ	CADRCL5	= 5	; 
.equ	CADRCL6	= 6	; 
.equ	CADRCL7	= 7	; 

; VADAC3 - V-ADC Accumulated Conversion Result
.equ	VADAC24	= 0	; 
.equ	VADAC25	= 1	; 
.equ	VADAC26	= 2	; 
.equ	VADAC27	= 3	; 
.equ	VADAC28	= 4	; 
.equ	VADAC29	= 5	; 
.equ	VADAC30	= 6	; 
.equ	VADAC31	= 7	; 

; VADAC2 - V-ADC Accumulated Conversion Result
.equ	VADAC16	= 0	; 
.equ	VADAC17	= 1	; 
.equ	VADAC18	= 2	; 
.equ	VADAC19	= 3	; 
.equ	VADAC20	= 4	; 
.equ	VADAC21	= 5	; 
.equ	VADAC22	= 6	; 
.equ	VADAC23	= 7	; 

; VADAC1 - V-ADC Accumulated Conversion Result
.equ	VADAC08	= 0	; 
.equ	VADAC09	= 1	; 
.equ	VADAC10	= 2	; 
.equ	VADAC11	= 3	; 
.equ	VADAC12	= 4	; 
.equ	VADAC13	= 5	; 
.equ	VADAC14	= 6	; 
.equ	VADAC15	= 7	; 

; VADAC0 - V-ADC Accumulated Conversion Result
.equ	VADAC00	= 0	; 
.equ	VADAC01	= 1	; 
.equ	VADAC02	= 2	; 
.equ	VADAC03	= 3	; 
.equ	VADAC04	= 4	; 
.equ	VADAC05	= 5	; 
.equ	VADAC06	= 6	; 
.equ	VADAC07	= 7	; 

; CADAC3 - C-ADC Accumulated Conversion Result
.equ	CADAC24	= 0	; 
.equ	CADAC25	= 1	; 
.equ	CADAC26	= 2	; 
.equ	CADAC27	= 3	; 
.equ	CADAC28	= 4	; 
.equ	CADAC29	= 5	; 
.equ	CADAC30	= 6	; 
.equ	CADAC31	= 7	; 

; CADAC2 - C-ADC Accumulated Conversion Result
.equ	CADAC16	= 0	; 
.equ	CADAC17	= 1	; 
.equ	CADAC18	= 2	; 
.equ	CADAC19	= 3	; 
.equ	CADAC20	= 4	; 
.equ	CADAC21	= 5	; 
.equ	CADAC22	= 6	; 
.equ	CADAC23	= 7	; 

; CADAC1 - C-ADC Accumulated Conversion Result
.equ	CADAC08	= 0	; 
.equ	CADAC09	= 1	; 
.equ	CADAC10	= 2	; 
.equ	CADAC11	= 3	; 
.equ	CADAC12	= 4	; 
.equ	CADAC13	= 5	; 
.equ	CADAC14	= 6	; 
.equ	CADAC15	= 7	; 

; CADAC0 - C-ADC Accumulated Conversion Result
.equ	CADAC00	= 0	; 
.equ	CADAC01	= 1	; 
.equ	CADAC02	= 2	; 
.equ	CADAC03	= 3	; 
.equ	CADAC04	= 4	; 
.equ	CADAC05	= 5	; 
.equ	CADAC06	= 6	; 
.equ	CADAC07	= 7	; 


; ***** PORTA ************************
; PORTA - Port A Data Register
.equ	PORTA0	= 0	; Port A Data Register bit 0
.equ	PA0	= 0	; For compatibility
.equ	PORTA1	= 1	; Port A Data Register bit 1
.equ	PA1	= 1	; For compatibility

; DDRA - Port A Data Direction Register
.equ	DDA0	= 0	; Data Direction Register, Port A, bit 0
.equ	DDA1	= 1	; Data Direction Register, Port A, bit 1

; PINA - Port A Input Pins
.equ	PINA0	= 0	; Input Pins, Port A bit 0
.equ	PINA1	= 1	; Input Pins, Port A bit 1


; ***** BANDGAP **********************
; BGCSRA - Bandgap Control and Status Register A
.equ	BGSC0	= 0	; Band Gap Sample Configuration
.equ	BGSC1	= 1	; Band Gap Sample Configuration
.equ	BGSC2	= 2	; Band Gap Sample Configuration

; BGCRA - Band Gap Calibration Register A
.equ	BGCN0	= 0	; Band Gap Calibration Nominal
.equ	BGCN1	= 1	; Band Gap Calibration Nominal
.equ	BGCN2	= 2	; Band Gap Calibration Nominal
.equ	BGCN3	= 3	; Band Gap Calibration Nominal
.equ	BGCN4	= 4	; Band Gap Calibration Nominal
.equ	BGCN5	= 5	; Band Gap Calibration Nominal
.equ	BGCN6	= 6	; Band Gap Calibration Nominal
.equ	BGCN7	= 7	; Band Gap Calibration Nominal

; BGCRB - Band Gap Calibration Register B
.equ	BGCL0	= 0	; Band Gap Calibration Linear
.equ	BGCL1	= 1	; Band Gap Calibration Linear
.equ	BGCL2	= 2	; Band Gap Calibration Linear
.equ	BGCL3	= 3	; Band Gap Calibration Linear
.equ	BGCL4	= 4	; Band Gap Calibration Linear
.equ	BGCL5	= 5	; Band Gap Calibration Linear
.equ	BGCL6	= 6	; Band Gap Calibration Linear
.equ	BGCL7	= 7	; Band Gap Calibration Linear

; BGLR - Band Gap Lock Register
.equ	BGPL	= 0	; Band Gap Lock
.equ	BGPLE	= 1	; Band Gap Lock Enable


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
.equ	CKOE	= 5	; Clock Output Enable

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BODRF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag
.equ	OCDRF	= 4	; OCD Reset Flag

; SOSCCALA - Slow Oscillator Calibration Register A
.equ	SCALA0	= 0	; Oscillator Calibration Value Bit0
.equ	SCALA1	= 1	; Oscillator Calibration Value Bit1
.equ	SCALA2	= 2	; Oscillator Calibration Value Bit2
.equ	SCALA3	= 3	; Oscillator Calibration Value Bit3
.equ	SCALA4	= 4	; Oscillator Calibration Value Bit4
.equ	SCALA5	= 5	; Oscillator Calibration Value Bit5
.equ	SCALA6	= 6	; Oscillator Calibration Value Bit6
.equ	SCALA7	= 7	; Oscillator Calibration Value Bit7

; SOSCCALB - Oscillator Calibration Register B
.equ	SCALB0	= 0	; Oscillator Calibration Value Bit0
.equ	SCALB1	= 1	; Oscillator Calibration Value Bit1
.equ	SCALB2	= 2	; Oscillator Calibration Value Bit2
.equ	SCALB3	= 3	; Oscillator Calibration Value Bit3
.equ	SCALB4	= 4	; Oscillator Calibration Value Bit4
.equ	SCALB5	= 5	; Oscillator Calibration Value Bit5
.equ	SCALB6	= 6	; Oscillator Calibration Value Bit6
.equ	SCALB7	= 7	; Oscillator Calibration Value Bit7

; PLLCSR - PLL Control and Status Register
.equ	PLLCIE	= 0	; PLL Lock Change Interrupt Enable
.equ	PLLCIF	= 1	; PLL Lock Change Interrupt Flag
.equ	LOCK	= 4	; PLL Lock
.equ	SWEN	= 5	; PLL Software Enable

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

; DIDR0 - Digital Input Disable Register
.equ	PA0DID	= 0	; When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.
.equ	PA1DID	= 1	; When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled.

; PRR0 - Power Reduction Register 0
.equ	PRTIM0	= 0	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 1	; Power Reduction Timer/Counter1
.equ	PRSPI	= 2	; Power reduction SPI
.equ	PRLIN	= 3	; Power Reduction LIN UART Interface

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPCE	= 7	; Clock Prescaler Change Enable


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0	; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; External Interrupt Sense Control 0 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1	; Pin Change Interrupt Enable 1

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 1
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1

; PCMSK1 - Pin Change Enable Mask Register 1
.equ	PCINT2	= 0	; Pin Change Enable Mask 2
.equ	PCINT3	= 1	; Pin Change Enable Mask 3
.equ	PCINT4	= 2	; Pin Change Enable Mask 4
.equ	PCINT5	= 3	; Pin Change Enable Mask 5
.equ	PCINT6	= 4	; Pin Change Enable Mask 6
.equ	PCINT7	= 5	; Pin Change Enable Mask 7
.equ	PCINT8	= 6	; Pin Change Enable Mask 8
.equ	PCINT9	= 7	; Pin Change Enable Mask 9

; PCMSK0 - Pin Change Enable Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1


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

; WDTCLR - Watchdog Timer Configuration Lock Register
.equ	WDCLE	= 0	; Watchdog Timer Comfiguration Lock Enable
.equ	WDCL0	= 1	; Watchdog Timer Comfiguration Lock bit 0
.equ	WDCL1	= 2	; Watchdog Timer Comfiguration Lock bit 1


; ***** WAKEUP_TIMER *****************
; WUTCSR - Wake-up Timer Control and Status Register
.equ	WUTP0	= 0	; Wake-up Timer Prescaler Bit 0
.equ	WUTP1	= 1	; Wake-up Timer Prescaler Bit 1
.equ	WUTP2	= 2	; Wake-up Timer Prescaler Bit 2
.equ	WUTE	= 3	; Wake-up Timer Enable
.equ	WUTR	= 4	; Wake-up Timer Reset
.equ	WUTIE	= 6	; Wake-up Timer Interrupt Enable
.equ	WUTIF	= 7	; Wake-up Timer Interrupt Flag



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lock bit
.equ	LB2	= 1	; Lock bit
.equ	BLB01	= 2	; Boot Lock bit
.equ	BLB02	= 3	; Boot Lock bit
.equ	BLB11	= 4	; Boot lock bit
.equ	BLB12	= 5	; Boot lock bit


; ***** FUSES ************************************************************
; LOW fuse bits
.equ	OSCSEL0	= 0	; Oscillator Select
.equ	SUT0	= 1	; Select start-up time
.equ	SUT1	= 2	; Select start-up time
.equ	CKDIV8	= 3	; Divide clock by 8
.equ	BODEN	= 4	; Enable BOD
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	EESAVE	= 6	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 7	; Watchdog Timer Always On

; HIGH fuse bits
.equ	BOOTRST	= 0	; Select Reset Vector
.equ	BOOTSZ0	= 1	; Select Boot Size
.equ	BOOTSZ1	= 2	; Select Boot Size
.equ	DWEN	= 3	; Enable debugWire



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
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x03ff
.equ	EEPROMEND	= 0x03ff
.equ	EEADRBITS	= 10
#pragma AVRPART MEMORY PROG_FLASH 65536
#pragma AVRPART MEMORY EEPROM 1024
#pragma AVRPART MEMORY INT_SRAM SIZE 4096
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x100



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	NRWW_START_ADDR	= 0x7000
.equ	NRWW_STOP_ADDR	= 0x7fff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x6fff
.equ	PAGESIZE	= 64
.equ	FIRSTBOOTSTART	= 0x7e00
.equ	SECONDBOOTSTART	= 0x7c00
.equ	THIRDBOOTSTART	= 0x7800
.equ	FOURTHBOOTSTART	= 0x7000
.equ	SMALLBOOTSTART	= FIRSTBOOTSTART
.equ	LARGEBOOTSTART	= FOURTHBOOTSTART



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0002	; External Interrupt 0
.equ	PCI0addr	= 0x0004	; Pin Change Interrupt 0
.equ	PCI1addr	= 0x0006	; Pin Change Interrupt 1
.equ	WDTaddr	= 0x0008	; Watchdog Timeout Interrupt
.equ	WUTaddr	= 0x000a	; Wakeup Timer Overflow
.equ	ICP1addr	= 0x000c	; Timer 1 Input capture
.equ	OC1Aaddr	= 0x000e	; Timer 1 Compare Match A
.equ	OC1Baddr	= 0x0010	; Timer 1 Compare Match B
.equ	OVF1addr	= 0x0012	; Timer 1 overflow
.equ	ICP0addr	= 0x0014	; Timer 0 Input Capture
.equ	OC0Aaddr	= 0x0016	; Timer 0 Comapre Match A
.equ	OC0Baddr	= 0x0018	; Timer 0 Compare Match B
.equ	OVF0addr	= 0x001a	; Timer 0 Overflow
.equ	LIN_STATUSaddr	= 0x001c	; LIN Status Interrupt
.equ	LIN_ERRORaddr	= 0x001e	; LIN Error Interrupt
.equ	SPIaddr	= 0x0020	; SPI Serial transfer complete
.equ	VADCaddr	= 0x0022	; Voltage ADC Instantaneous Conversion Complete
.equ	VADC_ACCaddr	= 0x0024	; Voltage ADC Accumulated Conversion Complete
.equ	CADICaddr	= 0x0026	; C-ADC Instantaneous Conversion Complete
.equ	CADRCaddr	= 0x0028	; C-ADC Regular Current
.equ	CADACaddr	= 0x002a	; C-ADC Accumulated Conversion Complete
.equ	ERDYaddr	= 0x002c	; EEPROM Ready
.equ	SPMRaddr	= 0x002e	; SPM Ready
.equ	PLLaddr	= 0x0030	; PLL Lock Change Interrupt

.equ	INT_VECTORS_SIZE	= 50	; size in words

#endif  /* _M64HVEDEF_INC_ */

; ***** END OF FILE ******************************************************
