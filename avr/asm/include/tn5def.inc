;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:04 ******* Source: ATtiny5.xml *************
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn5def.inc"
;* Title             : Register/Bit Definitions for the ATtiny5
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny5
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

#ifndef _TN5DEF_INC_
#define _TN5DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny5
#pragma AVRPART ADMIN PART_NAME ATtiny5
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x8f
.equ	SIGNATURE_002	= 0x09

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
.equ	SMCR	= 0x3a
.equ	OSCCAL	= 0x39
.equ	CLKMSR	= 0x37
.equ	CLKPSR	= 0x36
.equ	PRR	= 0x35
.equ	VLMCSR	= 0x34
.equ	NVMCMD	= 0x33
.equ	NVMCSR	= 0x32
.equ	WDTCSR	= 0x31
.equ	GTCCR	= 0x2f
.equ	TCCR0A	= 0x2e
.equ	TCCR0B	= 0x2d
.equ	TCCR0C	= 0x2c
.equ	TIMSK0	= 0x2b
.equ	TIFR0	= 0x2a
.equ	TCNT0L	= 0x28
.equ	TCNT0H	= 0x29
.equ	OCR0AL	= 0x26
.equ	OCR0AH	= 0x27
.equ	OCR0BL	= 0x24
.equ	OCR0BH	= 0x25
.equ	ICR0L	= 0x22
.equ	ICR0H	= 0x23
.equ	ACSR	= 0x1f
.equ	ADCSRA	= 0x1d
.equ	ADCSRB	= 0x1c
.equ	ADMUX	= 0x1b
.equ	ADCL	= 0x19
.equ	DIDR0	= 0x17
.equ	EICRA	= 0x15
.equ	EIFR	= 0x14
.equ	EIMSK	= 0x13
.equ	PCICR	= 0x12
.equ	PCIFR	= 0x11
.equ	PCMSK	= 0x10
.equ	PORTCR	= 0x0c
.equ	PUEB	= 0x03
.equ	PORTB	= 0x02
.equ	DDRB	= 0x01
.equ	PINB	= 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel Selection Bits
.equ	MUX1	= 1	; Analog Channel Selection Bits

; ADCSRA - The ADC Control and Status register A
.equ	ADPS0	= 0	; ADC  Prescaler Select Bits
.equ	ADPS1	= 1	; ADC  Prescaler Select Bits
.equ	ADPS2	= 2	; ADC  Prescaler Select Bits
.equ	ADIE	= 3	; ADC Interrupt Enable
.equ	ADIF	= 4	; ADC Interrupt Flag
.equ	ADATE	= 5	; ADC  Auto Trigger Enable
.equ	ADSC	= 6	; ADC Start Conversion
.equ	ADEN	= 7	; ADC Enable

; ADCSRB - The ADC Control and Status register B
.equ	ADTS0	= 0	; ADC Auto Trigger Source bit 0
.equ	ADTS1	= 1	; ADC Auto Trigger Source bit 1
.equ	ADTS2	= 2	; ADC Auto Trigger Source bit 2

; ADCL - ADC Data Register
.equ	ADC0	= 0	; ADC Data Register Bit 0
.equ	ADC1	= 1	; ADC Data Register Bit 1
.equ	ADC2	= 2	; ADC Data Register Bit 2
.equ	ADC3	= 3	; ADC Data Register Bit 3
.equ	ADC4	= 4	; ADC Data Register Bit 4
.equ	ADC5	= 5	; ADC Data Register Bit 5
.equ	ADC6	= 6	; ADC Data Register Bit 6
.equ	ADC7	= 7	; ADC Data Register Bit 7

; DIDR0 - Digital Input Disable Register
.equ	ADC0D	= 0	; 
.equ	ADC1D	= 1	; 
.equ	ADC2D	= 2	; 
.equ	ADC3D	= 3	; 


; ***** ANALOG_COMPARATOR ************
; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIC	= 2	; Analog Comparator Input Capture  Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACD	= 7	; Analog Comparator Disable

; DIDR0 - 
.equ	AIN0D	= 0	; AIN0 Digital Input Disable
.equ	AIN1D	= 1	; AIN1 Digital Input Disable


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

; SMCR - Sleep Mode Control Register
.equ	SE	= 0	; Sleep Enable
.equ	SM0	= 1	; Sleep Mode Select Bit 0
.equ	SM1	= 2	; Sleep Mode Select Bit 1
.equ	SM2	= 3	; Sleep Mode Select Bit 2

; PRR - Power Reduction Register
.equ	PRTIM0	= 0	; Power Reduction Timer/Counter0
.equ	PRADC	= 1	; Power Reduction ADC

; VLMCSR - Vcc Level Monitoring Control and Status Register
.equ	VLM0	= 0	; Trigger Level of Voltage Level Monitor bit 0
.equ	VLM1	= 1	; Trigger Level of Voltage Level Monitor bit 1
.equ	VLM2	= 2	; Trigger Level of Voltage Level Monitor bit 2
.equ	VLMIE	= 6	; VLM Interrupt Enable
.equ	VLMF	= 7	; VLM Flag

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


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register A
.equ	ISC00	= 0	; Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; Interrupt Sense Control 0 Bit 1

; EIMSK - External Interrupt Mask register
.equ	INT0	= 0	; External Interrupt Request 0 Enable

; EIFR - External Interrupt Flag register
.equ	INTF0	= 0	; External Interrupt Flag 0

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable 0

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0

; PCMSK - Pin Change Mask Register
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3


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
.equ	WGM03	= 4	; Waveform Generation Mode
.equ	ICES0	= 6	; Input Capture Edge Select
.equ	ICNC0	= 7	; Input Capture Noise Canceler

; TCCR0C - Timer/Counter 0 Control Register C
.equ	FOC0B	= 6	; Force Output Compare for Channel B
.equ	FOC0A	= 7	; Force Output Compare for Channel A

; TIMSK0 - Timer Interrupt Mask Register 0
.equ	TOIE0	= 0	; Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Output Compare A Match Interrupt Enable
.equ	OCIE0B	= 2	; Output Compare B Match Interrupt Enable
.equ	ICIE0	= 5	; Input Capture Interrupt Enable

; TIFR0 - Overflow Interrupt Enable
.equ	TOV0	= 0	; Timer Overflow Flag
.equ	OCF0A	= 1	; Timer Output Compare Flag 0A
.equ	OCF0B	= 2	; Timer Output Compare Flag 0B
.equ	ICF0	= 5	; Input Capture Flag

; GTCCR - General Timer/Counter Control Register
.equ	PSR	= 0	; Prescaler Reset
.equ	TSM	= 7	; Timer Synchronization Mode


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
; BYTE0 fuse bits
.equ	RSTDISBL	= 0	; Disable external reset
.equ	WDTON	= 1	; Watch dog timer always on
.equ	CKOUT	= 2	; Output external clock



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30



; ***** DATA MEMORY DECLARATIONS *****************************************
.equ	FLASHEND	= 0x00ff	; Note: Word address
.equ	IOEND	= 0x003f
.equ	SRAM_START	= 0x0040
.equ	SRAM_SIZE	= 32
.equ	RAMEND	= 0x005f
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
.equ	MAPPED_FLASH_SIZE	= 0x0200
.equ	MAPPED_FLASH_END	= 0x41ff
#pragma AVRPART MEMORY PROG_FLASH 512
#pragma AVRPART MEMORY EEPROM 0
#pragma AVRPART MEMORY INT_SRAM SIZE 32
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x40



; ***** BOOTLOADER DECLARATIONS ******************************************
.equ	PAGESIZE	= 16



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0001	; External Interrupt Request 0
.equ	PCI0addr	= 0x0002	; Pin Change Interrupt Request 0
.equ	ICP0addr	= 0x0003	; Timer/Counter0 Input Capture
.equ	OVF0addr	= 0x0004	; Timer/Counter0 Overflow
.equ	OC0Aaddr	= 0x0005	; Timer/Counter Compare Match A
.equ	OC0Baddr	= 0x0006	; Timer/Counter Compare Match B
.equ	ACIaddr	= 0x0007	; Analog Comparator
.equ	WDTaddr	= 0x0008	; Watchdog Time-out
.equ	VLMaddr	= 0x0009	; Vcc Voltage Level Monitor
.equ	ADCCaddr	= 0x000a	; ADC Conversion Complete

.equ	INT_VECTORS_SIZE	= 11	; size in words

#pragma AVRPART CORE INSTRUCTIONS_NOT_SUPPORTED break

#endif  /* _TN5DEF_INC_ */

; ***** END OF FILE ******************************************************
