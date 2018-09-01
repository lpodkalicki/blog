;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: AT90USB162.xml **********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "usb162def.inc"
;* Title             : Register/Bit Definitions for the AT90USB162
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : AT90USB162
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

#ifndef _USB162DEF_INC_
#define _USB162DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device AT90USB162
#pragma AVRPART ADMIN PART_NAME AT90USB162
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x82

#pragma AVRPART CORE CORE_VERSION V3


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	CLKSTA	= 0xd2	; MEMORY MAPPED
.equ	CLKSEL1	= 0xd1	; MEMORY MAPPED
.equ	CLKSEL0	= 0xd0	; MEMORY MAPPED
.equ	PLLCSR	= 0x29
.equ	PS2CON	= 0xfa	; MEMORY MAPPED
.equ	UPOE	= 0xfb	; MEMORY MAPPED
.equ	UEINT	= 0xf4	; MEMORY MAPPED
.equ	UEBCLX	= 0xf2	; MEMORY MAPPED
.equ	UEDATX	= 0xf1	; MEMORY MAPPED
.equ	UEIENX	= 0xf0	; MEMORY MAPPED
.equ	UESTA1X	= 0xef	; MEMORY MAPPED
.equ	UESTA0X	= 0xee	; MEMORY MAPPED
.equ	UECFG1X	= 0xed	; MEMORY MAPPED
.equ	UECFG0X	= 0xec	; MEMORY MAPPED
.equ	UECONX	= 0xeb	; MEMORY MAPPED
.equ	UERST	= 0xea	; MEMORY MAPPED
.equ	UENUM	= 0xe9	; MEMORY MAPPED
.equ	UEINTX	= 0xe8	; MEMORY MAPPED
.equ	UDMFN	= 0xe6	; MEMORY MAPPED
.equ	UDFNUMH	= 0xe5	; MEMORY MAPPED
.equ	UDFNUML	= 0xe4	; MEMORY MAPPED
.equ	UDADDR	= 0xe3	; MEMORY MAPPED
.equ	UDIEN	= 0xe2	; MEMORY MAPPED
.equ	UDINT	= 0xe1	; MEMORY MAPPED
.equ	UDCON	= 0xe0	; MEMORY MAPPED
.equ	USBCON	= 0xd8	; MEMORY MAPPED
.equ	REGCR	= 0x63	; MEMORY MAPPED
.equ	UDR1	= 0xce	; MEMORY MAPPED
.equ	UBRR1L	= 0xcc	; MEMORY MAPPED
.equ	UBRR1H	= 0xcd	; MEMORY MAPPED
.equ	UCSR1D	= 0xcb	; MEMORY MAPPED
.equ	UCSR1C	= 0xca	; MEMORY MAPPED
.equ	UCSR1B	= 0xc9	; MEMORY MAPPED
.equ	UCSR1A	= 0xc8	; MEMORY MAPPED
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
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK1	= 0x6c	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRB	= 0x6a	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	OSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR1	= 0x65	; MEMORY MAPPED
.equ	PRR0	= 0x64	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	WDTCKD	= 0x62	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	EIND	= 0x3c
.equ	SPMCSR	= 0x37
.equ	DWDR	= 0x31
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
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
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
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


; ***** EEPROM ***********************
; EEARH - EEPROM Address Register Low Byte
.equ	EEAR8	= 0	; EEPROM Read/Write Access Bit 8
.equ	EEAR9	= 1	; EEPROM Read/Write Access Bit 9
.equ	EEAR10	= 2	; EEPROM Read/Write Access Bit 10
.equ	EEAR11	= 3	; EEPROM Read/Write Access Bit 11

; EEARL - EEPROM Address Register Low Byte
.equ	EEAR0	= 0	; EEPROM Read/Write Access Bit 0
.equ	EEAR1	= 1	; EEPROM Read/Write Access Bit 1
.equ	EEAR2	= 2	; EEPROM Read/Write Access Bit 2
.equ	EEAR3	= 3	; EEPROM Read/Write Access Bit 3
.equ	EEAR4	= 4	; EEPROM Read/Write Access Bit 4
.equ	EEAR5	= 5	; EEPROM Read/Write Access Bit 5
.equ	EEAR6	= 6	; EEPROM Read/Write Access Bit 6
.equ	EEAR7	= 7	; EEPROM Read/Write Access Bit 7

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
.equ	EEMPE	= 2	; EEPROM Master Write Enable
.equ	EERIE	= 3	; EEPROM Ready Interrupt Enable
.equ	EEPM0	= 4	; EEPROM Programming Mode Bit 0
.equ	EEPM1	= 5	; EEPROM Programming Mode Bit 1


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
.equ	PSRSYNC	= 0	; Prescaler Reset Timer/Counter1 and Timer/Counter0
.equ	PSR10	= PSRSYNC	; For compatibility
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter1 Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	OCIE1C	= 3	; Timer/Counter1 Output Compare C Match Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter1 Interrupt Flag register
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
.equ	COM1A0	= 6	; Compare Output Mode 1A, bit 0
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


; ***** PLL **************************
; PLLCSR - PLL Status and Control register
.equ	PLOCK	= 0	; PLL Lock Status Bit
.equ	PLLE	= 1	; PLL Enable Bit
.equ	PLLP0	= 2	; PLL prescaler Bit 0
.equ	PLLP1	= 3	; PLL prescaler Bit 1
.equ	PLLP2	= 4	; PLL prescaler Bit 2


; ***** USB_DEVICE *******************
; USBCON - USB General Control Register
.equ	FRZCLK	= 5	; 
.equ	USBE	= 7	; 

; UDCON - 
.equ	DETACH	= 0	; 
.equ	RMWKUP	= 1	; 
.equ	RSTCPU	= 2	; 

; UDINT - 
.equ	SUSPI	= 0	; 
.equ	SOFI	= 2	; 
.equ	EORSTI	= 3	; 
.equ	WAKEUPI	= 4	; 
.equ	EORSMI	= 5	; 
.equ	UPRSMI	= 6	; 

; UDIEN - 
.equ	SUSPE	= 0	; 
.equ	SOFE	= 2	; 
.equ	EORSTE	= 3	; 
.equ	WAKEUPE	= 4	; 
.equ	EORSME	= 5	; 
.equ	UPRSME	= 6	; 

; UDADDR - 
.equ	UADD0	= 0	; 
.equ	UADD1	= 1	; 
.equ	UADD2	= 2	; 
.equ	UADD3	= 3	; 
.equ	UADD4	= 4	; 
.equ	UADD5	= 5	; 
.equ	UADD6	= 6	; 
.equ	ADDEN	= 7	; 

; UDFNUML - 
.equ	FNUM0	= 0	; 
.equ	FNUM1	= 1	; 
.equ	FNUM2	= 2	; 
.equ	FNUM3	= 3	; 
.equ	FNUM4	= 4	; 
.equ	FNUM5	= 5	; 
.equ	FNUM6	= 6	; 
.equ	FNUM7	= 7	; 

; UDFNUMH - 
.equ	FNUM8	= 0	; 
.equ	FNUM9	= 1	; 
.equ	FNUM10	= 2	; 

; UDMFN - 
.equ	FNCERR	= 4	; 

; UEINTX - 
.equ	TXINI	= 0	; 
.equ	STALLEDI	= 1	; 
.equ	RXOUTI	= 2	; 
.equ	RXSTPI	= 3	; 
.equ	NAKOUTI	= 4	; 
.equ	RWAL	= 5	; 
.equ	NAKINI	= 6	; 
.equ	FIFOCON	= 7	; 

; UENUM - 
.equ	EPNUM0	= 0	; 
.equ	EPNUM1	= 1	; 
.equ	EPNUM2	= 2	; 

; UERST - 
.equ	EPRST0	= 0	; 
.equ	EPRST1	= 1	; 
.equ	EPRST2	= 2	; 
.equ	EPRST3	= 3	; 
.equ	EPRST4	= 4	; 

; UECONX - 
.equ	EPEN	= 0	; 
.equ	RSTDT	= 3	; 
.equ	STALLRQC	= 4	; 
.equ	STALLRQ	= 5	; 

; UECFG0X - 
.equ	EPDIR	= 0	; 
.equ	EPTYPE0	= 6	; 
.equ	EPTYPE1	= 7	; 

; UECFG1X - 
.equ	ALLOC	= 1	; 
.equ	EPBK0	= 2	; 
.equ	EPBK1	= 3	; 
.equ	EPSIZE0	= 4	; 
.equ	EPSIZE1	= 5	; 
.equ	EPSIZE2	= 6	; 

; UESTA0X - 
.equ	NBUSYBK0	= 0	; 
.equ	NBUSYBK1	= 1	; 
.equ	DTSEQ0	= 2	; 
.equ	DTSEQ1	= 3	; 
.equ	UNDERFI	= 5	; 
.equ	OVERFI	= 6	; 
.equ	CFGOK	= 7	; 

; UESTA1X - 
.equ	CURRBK0	= 0	; 
.equ	CURRBK1	= 1	; 
.equ	CTRLDIR	= 2	; 

; UEIENX - 
.equ	TXINE	= 0	; 
.equ	STALLEDE	= 1	; 
.equ	RXOUTE	= 2	; 
.equ	RXSTPE	= 3	; 
.equ	NAKOUTE	= 4	; 
.equ	NAKINE	= 6	; 
.equ	FLERRE	= 7	; 

; UEDATX - 
.equ	DAT0	= 0	; 
.equ	DAT1	= 1	; 
.equ	DAT2	= 2	; 
.equ	DAT3	= 3	; 
.equ	DAT4	= 4	; 
.equ	DAT5	= 5	; 
.equ	DAT6	= 6	; 
.equ	DAT7	= 7	; 

; UEBCLX - 
.equ	BYCT0	= 0	; 
.equ	BYCT1	= 1	; 
.equ	BYCT2	= 2	; 
.equ	BYCT3	= 3	; 
.equ	BYCT4	= 4	; 
.equ	BYCT5	= 5	; 
.equ	BYCT6	= 6	; 
.equ	BYCT7	= 7	; 

; UEINT - 
.equ	EPINT0	= 0	; 
.equ	EPINT1	= 1	; 
.equ	EPINT2	= 2	; 
.equ	EPINT3	= 3	; 
.equ	EPINT4	= 4	; 

; REGCR - Regulator Control Register
.equ	REGDIS	= 0	; 


; ***** PS2 **************************
; UPOE - 
.equ	DMI	= 0	; 
.equ	DPI	= 1	; 
.equ	DATAI	= 2	; 
.equ	SCKI	= 3	; 
.equ	UPDRV0	= 4	; 
.equ	UPDRV1	= 5	; 
.equ	UPWE0	= 6	; 
.equ	UPWE1	= 7	; 

; PS2CON - PS2 Pad Enable register
.equ	PS2EN	= 0	; Enable


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
.equ	USBRF	= 5	; USB reset flag

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

; EIND - Extended Indirect Register
.equ	EIND0	= 0	; Bit 0

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

; PRR1 - Power Reduction Register1
.equ	PRUSART1	= 0	; Power Reduction USART1
.equ	PRUSB	= 7	; Power Reduction USB

; PRR0 - Power Reduction Register0
.equ	PRSPI	= 2	; Power Reduction Serial Peripheral Interface
.equ	PRTIM1	= 3	; Power Reduction Timer/Counter1
.equ	PRTIM0	= 5	; Power Reduction Timer/Counter0

; CLKSTA - 
.equ	EXTON	= 0	; 
.equ	RCON	= 1	; 

; CLKSEL1 - 
.equ	EXCKSEL0	= 0	; 
.equ	EXCKSEL1	= 1	; 
.equ	EXCKSEL2	= 2	; 
.equ	EXCKSEL3	= 3	; 
.equ	RCCKSEL0	= 4	; 
.equ	RCCKSEL1	= 5	; 
.equ	RCCKSEL2	= 6	; 
.equ	RCCKSEL3	= 7	; 

; CLKSEL0 - 
.equ	CLKS	= 0	; 
.equ	EXTE	= 2	; 
.equ	RCE	= 3	; 
.equ	EXSUT0	= 4	; 
.equ	EXSUT1	= 5	; 
.equ	RCSUT0	= 6	; 
.equ	RCSUT1	= 7	; 

; DWDR - debugWire communication register
.equ	DWDR0	= 0	; 
.equ	DWDR1	= 1	; 
.equ	DWDR2	= 2	; 
.equ	DWDR3	= 3	; 
.equ	DWDR4	= 4	; 
.equ	DWDR5	= 5	; 
.equ	DWDR6	= 6	; 
.equ	DWDR7	= 7	; 


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
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable
.equ	INT2	= 2	; External Interrupt Request 2 Enable
.equ	INT3	= 3	; External Interrupt Request 3 Enable
.equ	INT4	= 4	; External Interrupt Request 4 Enable
.equ	INT5	= 5	; External Interrupt Request 5 Enable
.equ	INT6	= 6	; External Interrupt Request 6 Enable
.equ	INT7	= 7	; External Interrupt Request 7 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1
.equ	INTF2	= 2	; External Interrupt Flag 2
.equ	INTF3	= 3	; External Interrupt Flag 3
.equ	INTF4	= 4	; External Interrupt Flag 4
.equ	INTF5	= 5	; External Interrupt Flag 5
.equ	INTF6	= 6	; External Interrupt Flag 6
.equ	INTF7	= 7	; External Interrupt Flag 7

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0
.equ	PCIE1	= 1	; Pin Change Interrupt Enable 1

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3
.equ	PCINT4	= 4	; Pin Change Enable Mask 4
.equ	PCINT5	= 5	; Pin Change Enable Mask 5
.equ	PCINT6	= 6	; Pin Change Enable Mask 6
.equ	PCINT7	= 7	; Pin Change Enable Mask 7

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; 
.equ	PCINT9	= 1	; 
.equ	PCINT10	= 2	; 
.equ	PCINT11	= 3	; 
.equ	PCINT12	= 4	; 


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
.equ	UCSZ11	= 2	; Character Size
.equ	USBS1	= 3	; Stop Bit Select
.equ	UPM10	= 4	; Parity Mode Bit 0
.equ	UPM11	= 5	; Parity Mode Bit 1
.equ	UMSEL10	= 6	; USART Mode Select
.equ	UMSEL11	= 7	; USART Mode Select

; UCSR1D - USART Control and Status Register D
.equ	RTSEN	= 0	; RTS Enable
.equ	CTSEN	= 1	; CTS Enable


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

; WDTCKD - Watchdog Timer Clock Divider
.equ	WCLKD0	= 0	; Watchdog Timer Clock Divider 0
.equ	WCLKD1	= 1	; Watchdog Timer Clock Divider 1
.equ	WDEWIE	= 2	; Watchdog Early Warning Interrupt Enable
.equ	WDEWIF	= 3	; Watchdog Early Warning Interrupt Flag


; ***** ANALOG_COMPARATOR ************
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


; ***** PORTC ************************
; PORTC - Port C Data Register
.equ	PORTC0	= 0	; Port C Data Register bit 0
.equ	PC0	= 0	; For compatibility
.equ	PORTC1	= 1	; Port C Data Register bit 1
.equ	PC1	= 1	; For compatibility
.equ	PORTC2	= 2	; Port C Data Register bit 2
.equ	PC2	= 2	; For compatibility
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
.equ	DDC4	= 4	; Port C Data Direction Register bit 4
.equ	DDC5	= 5	; Port C Data Direction Register bit 5
.equ	DDC6	= 6	; Port C Data Direction Register bit 6
.equ	DDC7	= 7	; Port C Data Direction Register bit 7

; PINC - Port C Input Pins
.equ	PINC0	= 0	; Port C Input Pins bit 0
.equ	PINC1	= 1	; Port C Input Pins bit 1
.equ	PINC2	= 2	; Port C Input Pins bit 2
.equ	PINC4	= 4	; Port C Input Pins bit 4
.equ	PINC5	= 5	; Port C Input Pins bit 5
.equ	PINC6	= 6	; Port C Input Pins bit 6
.equ	PINC7	= 7	; Port C Input Pins bit 7



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
.equ	CKOUT	= 6	; Oscillator options
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BOOTRST	= 0	; Select Reset Vector
.equ	BOOTSZ0	= 1	; Select Boot Size
.equ	BOOTSZ1	= 2	; Select Boot Size
.equ	EESAVE	= 3	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 4	; Watchdog timer always on
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	RSTDISBL	= 6	; External Reset Disable
.equ	DWEN	= 7	; dwbugWIRE Enable

; EXTENDED fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown-out Detector trigger level
.equ	HWBE	= 3	; Hardware Boot Enable



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
.equ	SRAM_SIZE	= 512
.equ	RAMEND	= 0x02ff
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x01ff
.equ	EEPROMEND	= 0x01ff
.equ	EEADRBITS	= 9
#pragma AVRPART MEMORY PROG_FLASH 16384
#pragma AVRPART MEMORY EEPROM 512
#pragma AVRPART MEMORY INT_SRAM SIZE 512
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
.equ	USB_GENaddr	= 0x0016	; USB General Interrupt Request
.equ	USB_COMaddr	= 0x0018	; USB Endpoint/Pipe Interrupt Communication Request
.equ	WDTaddr	= 0x001a	; Watchdog Time-out Interrupt
.equ	ICP1addr	= 0x001c	; Timer/Counter2 Capture Event
.equ	OC1Aaddr	= 0x001e	; Timer/Counter2 Compare Match B
.equ	OC1Baddr	= 0x0020	; Timer/Counter2 Compare Match B
.equ	OC1Caddr	= 0x0022	; Timer/Counter2 Compare Match C
.equ	OVF1addr	= 0x0024	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x0026	; Timer/Counter0 Compare Match A
.equ	OC0Baddr	= 0x0028	; Timer/Counter0 Compare Match B
.equ	OVF0addr	= 0x002a	; Timer/Counter0 Overflow
.equ	SPIaddr	= 0x002c	; SPI Serial Transfer Complete
.equ	URXC1addr	= 0x002e	; USART1, Rx Complete
.equ	UDRE1addr	= 0x0030	; USART1 Data register Empty
.equ	UTXC1addr	= 0x0032	; USART1, Tx Complete
.equ	ACIaddr	= 0x0034	; Analog Comparator
.equ	ERDYaddr	= 0x0036	; EEPROM Ready
.equ	SPMRaddr	= 0x0038	; Store Program Memory Read

.equ	INT_VECTORS_SIZE	= 58	; size in words

#endif  /* _USB162DEF_INC_ */

; ***** END OF FILE ******************************************************
