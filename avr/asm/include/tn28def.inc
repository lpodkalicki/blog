;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:04 ******* Source: ATtiny28.xml ************
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn28def.inc"
;* Title             : Register/Bit Definitions for the ATtiny28
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny28
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

#ifndef _TN28DEF_INC_
#define _TN28DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny28
#pragma AVRPART ADMIN PART_NAME ATtiny28
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x91
.equ	SIGNATURE_002	= 0x07

#pragma AVRPART CORE CORE_VERSION V0E


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SREG	= 0x3f
.equ	PORTA	= 0x1b
.equ	PACR	= 0x1a
.equ	PINA	= 0x19
.equ	PINB	= 0x16
.equ	PORTD	= 0x12
.equ	DDRD	= 0x11
.equ	PIND	= 0x10
.equ	ACSR	= 0x08
.equ	MCUCS	= 0x07
.equ	ICR	= 0x06
.equ	IFR	= 0x05
.equ	TCCR0	= 0x04
.equ	TCNT0	= 0x03
.equ	MODCR	= 0x02
.equ	WDTCR	= 0x01
.equ	OSCCAL	= 0x00


; ***** BIT DEFINITIONS **************************************************

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

; ICR - Interrupt Control Register
.equ	ISC00	= 0	; Interrupt Sense Control 0 bit 0
.equ	ISC01	= 1	; Interrupt Sense Control 0 bit 1
.equ	ICS10	= 2	; Interrupt Sense Control 1 bit 0
.equ	ICS11	= 3	; Interrupt Sense Control 1 bit 1

; MCUCS - MCU Control and Status Register
.equ	PORF	= 0	; Power-On Reset Flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag
.equ	SM	= 4	; Sleep Mode
.equ	SE	= 5	; Sleep Enable
.equ	PLUPB	= 7	; Pull-up Enable Port B

; OSCCAL - Status Register
.equ	CAL0	= 0	; Oscillator Calibration Value Bit 0
.equ	CAL1	= 1	; Oscillator Calibration Value Bit 1
.equ	CAL2	= 2	; Oscillator Calibration Value Bit 2
.equ	CAL3	= 3	; Oscillator Calibration Value Bit 3
.equ	CAL4	= 4	; Oscillator Calibration Value Bit 4
.equ	CAL5	= 5	; Oscillator Calibration Value Bit 5
.equ	CAL6	= 6	; Oscillator Calibration Value Bit 6
.equ	CAL7	= 7	; Oscillator Calibration Value Bit 7


; ***** ANALOG_COMPARATOR ************
; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Comparator Output
.equ	ACD	= 7	; Analog Comparator Disable


; ***** TIMER_COUNTER_0 **************
; ICR - Interrupt Control Register
.equ	TOIE0	= 4	; Timer/Counter0 Overflow Interrupt Enable

; IFR - Interrupt Flag register
.equ	TOV0	= 4	; Timer/Counter0 Overflow Flag

; TCCR0 - Timer/Counter0 Control Register
.equ	CS00	= 0	; Clock Select0 bit 0
.equ	CS01	= 1	; Clock Select0 bit 1
.equ	CS02	= 2	; Clock Select0 bit 2
.equ	OOM00	= 3	; Overflow Output Mode, Bit 0
.equ	OOM01	= 4	; Overflow Output Mode, Bit 1
.equ	FOV0	= 7	; Force Overflow

; TCNT0 - Timer Counter 0
.equ	TCNT00	= 0	; Timer Counter 0 bit 0
.equ	TCNT01	= 1	; Timer Counter 0 bit 1
.equ	TCNT02	= 2	; Timer Counter 0 bit 2
.equ	TCNT03	= 3	; Timer Counter 0 bit 3
.equ	TCNT04	= 4	; Timer Counter 0 bit 4
.equ	TCNT05	= 5	; Timer Counter 0 bit 5
.equ	TCNT06	= 6	; Timer Counter 0 bit 6
.equ	TCNT07	= 7	; Timer Counter 0 bit 7


; ***** WATCHDOG *********************
; WDTCR - Watchdog Timer Control Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDTOE	= 4	; RW
.equ	WDDE	= WDTOE	; For compatibility


; ***** EXTERNAL_INTERRUPT ***********
; ICR - Interrupt Control Register
.equ	LLIE	= 5	; Low-level Input Interrupt Enable
.equ	INT0	= 6	; External Interrupt Request 0 Enable
.equ	INT1	= 7	; External Interrupt Request 1 Enable

; IFR - Interrupt Flag register
.equ	INTF0	= 6	; External Interrupt Flag 0
.equ	INTF1	= 7	; External Interrupt Flag 1


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

; PACR - Port A Control Register
.equ	DDA0	= 0	; Data Direction Port A, bit 0
.equ	DDA1	= 1	; Data Direction Port A, bit 1
.equ	PA2HC	= 2	; PORTA2 High Current Enable
.equ	DDA3	= 3	; Data Direction Port A, bit 3

; PINA - Port A Input Pins
.equ	PINA0	= 0	; Input Pins, Port A bit 0
.equ	PINA1	= 1	; Input Pins, Port A bit 1
.equ	PINA3	= 3	; Input Pins, Port A bit 3


; ***** PORTB ************************
; PINB - Port B Input Pins
.equ	PINB0	= 0	; Port B Input Pins bit 0
.equ	PINB1	= 1	; Port B Input Pins bit 1
.equ	PINB2	= 2	; Port B Input Pins bit 2
.equ	PINB3	= 3	; Port B Input Pins bit 3
.equ	PINB4	= 4	; Port B Input Pins bit 4
.equ	PINB5	= 5	; Port B Input Pins bit 5
.equ	PINB6	= 6	; Port B Input Pins bit 6
.equ	PINB7	= 7	; Port B Input Pins bit 7


; ***** MODULATOR ********************
; MODCR - Modulation Control Register
.equ	MCONF0	= 0	; Modulation Configuration Bit 0
.equ	MCONF1	= 1	; Modulation Configuration Bit 1
.equ	MCONF2	= 2	; Modulation Configuration Bit 2
.equ	ONTIM0	= 3	; Modulation On-time Bit 0
.equ	ONTIM1	= 4	; Modulation On-time Bit 1
.equ	ONTIM2	= 5	; Modulation On-time Bit 2
.equ	OTIM3	= 6	; Modulation On-time Bit 3
.equ	ONTIM4	= 7	; Modulation On-time Bit 4



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lockbit
.equ	LB2	= 1	; Lockbit


; ***** FUSES ************************************************************
; LOW fuse bits



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
.equ	SRAM_SIZE	= 0
.equ	RAMEND	= 0x0000
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x0000
.equ	EEPROMEND	= 0x0000
#pragma AVRPART MEMORY PROG_FLASH 2048
#pragma AVRPART MEMORY EEPROM 0
#pragma AVRPART MEMORY INT_SRAM SIZE 0
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x0





; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0001	; External Interrupt 0
.equ	INT1addr	= 0x0002	; External Interrupt 1
.equ	LLINTaddr	= 0x0003	; Low-level Input on Port B
.equ	OVF0addr	= 0x0004	; Timer/Counter0 Overflow
.equ	ACIaddr	= 0x0005	; Analog Comparator

.equ	INT_VECTORS_SIZE	= 6	; size in words

#pragma AVRPART CORE INSTRUCTIONS_NOT_SUPPORTED break

#endif  /* _TN28DEF_INC_ */

; ***** END OF FILE ******************************************************
