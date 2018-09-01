;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: AT86RF401.xml ***********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "AT86RF401def.inc"
;* Title             : Register/Bit Definitions for the AT86RF401
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : AT86RF401
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

#ifndef _AT86RF401DEF_INC_
#define _AT86RF401DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device AT86RF401
#pragma AVRPART ADMIN PART_NAME AT86RF401
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x91
.equ	SIGNATURE_002	= 0x81

#pragma AVRPART CORE CORE_VERSION V2
#pragma AVRPART CORE NEW_INSTRUCTIONS lpm rd,z+
#pragma AVRPART CORE INSTRUCTIONS_NOT_SUPPORTED sleep


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	BL_CONFIG	= 0x35
.equ	B_DET	= 0x34
.equ	AVR_CONFIG	= 0x33
.equ	IO_DATIN	= 0x32
.equ	IO_DATOUT	= 0x31
.equ	IO_ENAB	= 0x30
.equ	WDTCR	= 0x22
.equ	BTCR	= 0x21
.equ	BTCNT	= 0x20
.equ	DEEAR	= 0x1e
.equ	DEEDR	= 0x1d
.equ	DEECR	= 0x1c
.equ	LOCKDET2	= 0x17
.equ	VCOTUNE	= 0x16
.equ	PWR_ATTEN	= 0x14
.equ	TX_CNTL	= 0x12
.equ	LOCKDET1	= 0x10


; ***** BIT DEFINITIONS **************************************************

; ***** RF_CONTROL *******************
; LOCKDET1 - Lock Detector Configuration Register 1
.equ	CS0	= 0	; Cycle Slip Counter bit 0
.equ	CS1	= 1	; Cycle Slip Counter bit 1
.equ	BOD	= 2	; Black Out Disable
.equ	ENKO	= 3	; Enable Key On Bit
.equ	UPOK	= 4	; Unlock Conuter Control

; LOCKDET2 - Lock Detector Configuration register 2
.equ	LC0	= 0	; Lock Count bit 0
.equ	LC1	= 1	; Lock Count bit 1
.equ	LC2	= 2	; Lock Count bit 2
.equ	ULC0	= 3	; Unlock Count bit 0
.equ	ULC1	= 4	; Unlock Count bit 1
.equ	ULC2	= 5	; Unlock Count bit 2
.equ	LAT	= 6	; Lock Always True
.equ	EUD	= 7	; Enable Unlock Detect

; TX_CNTL - Transmit Control Register
.equ	LOC	= 2	; PLL Lock
.equ	TXK	= 4	; Transmitter Key
.equ	TXE	= 5	; Transmitter Enable
.equ	FSK	= 6	; FSK Mode

; PWR_ATTEN - Power Attenuation Control Register
.equ	PCF0	= 0	; Power Control Fine bit 0
.equ	PCF1	= 1	; Power Control Fine bit 1
.equ	PCF2	= 2	; Power Control Fine bit 2
.equ	PCC0	= 3	; Power Control Coarse bit 0
.equ	PCC1	= 4	; Power Control Coarse bit 1
.equ	PCC2	= 5	; Power Control Coarse bit 2

; VCOTUNE - VCO Tuning Register
.equ	VCOTUNE0	= 0	; VCO Tuning Register bit 0
.equ	VCOTUNE1	= 1	; VCO Tuning Register bit 1
.equ	VCOTUNE2	= 2	; VCO Tuning Register bit 2
.equ	VCOTUNE3	= 3	; VCO Tuning Register bit 3
.equ	VCOTUNE4	= 4	; VCO Tuning Register bit 4
.equ	VCOVDET0	= 6	; VCO Voltage Detector bit 0
.equ	VCOVDET1	= 7	; VCO Voltage Detector bit 1


; ***** EEPROM ***********************
; DEEAR - EERPOM Address Register
.equ	BA0	= 0	; EEPROM Byte Address bit 0
.equ	BA1	= 1	; EEPROM Byte Address bit 1
.equ	BA2	= 2	; EEPROM Byte Address bit 2
.equ	PA3	= 3	; EEPROM Page Address bit 3
.equ	PA4	= 4	; EEPROM Page Address bit 4
.equ	PA5	= 5	; EEPROM Page Address bit 5
.equ	PA6	= 6	; EEPROM Page Address bit 6

; DEEDR - EEPROM Data Register
.equ	ED0	= 0	; EEPROM Data Register bit 0
.equ	ED1	= 1	; EEPROM Data Register bit 1
.equ	ED2	= 2	; EEPROM Data Register bit 2
.equ	ED3	= 3	; EEPROM Data Register bit 3
.equ	ED4	= 4	; EEPROM Data Register bit 4
.equ	ED5	= 5	; EEPROM Data Register bit 5
.equ	ED6	= 6	; EEPROM Data Register bit 6
.equ	ED7	= 7	; EEPROM Data Register bit 7

; DEECR - EEPROM Control Register
.equ	EER	= 0	; EEPROM Read Bit
.equ	EEL	= 1	; EEPROM Load Bit
.equ	EEU	= 2	; EEPROM Unlock Bit
.equ	BSY	= 3	; EERPOM Busy Bit


; ***** WATCHDOG *********************
; WDTCR - Watchdog Timer Control Register
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDTOE	= 4	; RW
.equ	WDDE	= WDTOE	; For compatibility


; ***** TIMER_COUNTER_0 **************
; BTCNT - Timer Count register
.equ	C0	= 0	; Timer Count Register bit 7
.equ	C1	= 1	; Timer Count Register bit 7
.equ	C2	= 2	; Timer Count Register bit 7
.equ	C3	= 3	; Timer Count Register bit 7
.equ	C4	= 4	; Timer Count Register bit 7
.equ	C5	= 5	; Timer Count Register bit 7
.equ	C6	= 6	; Timer Count Register bit 7
.equ	C7	= 7	; Timer Count Register bit 7

; BTCR - Bit Timer Counter Control Register
.equ	F0	= 0	; Flag 0
.equ	DATA	= 1	; Data Bit
.equ	F2	= 2	; Flag 2
.equ	IE	= 3	; Interrupt Enable
.equ	M0	= 4	; Bit Timer Mode bit 0
.equ	M1	= 5	; Bit Timer Mode bit 1
.equ	C8	= 6	; Timer Count Register bit 8
.equ	C9	= 7	; Timer Count Register bit 9


; ***** PORT *************************
; IO_ENAB - I/O Enable Register
.equ	IOE0	= 0	; I/O Enable bit 0
.equ	IOE1	= 1	; I/O Enable bit 1
.equ	IOE2	= 2	; I/O Enable bit 2
.equ	IOE3	= 3	; I/O Enable bit 3
.equ	IOE4	= 4	; I/O Enable bit 4
.equ	IOE5	= 5	; I/O Enable bit 5

; IO_DATOUT - I/O Data Out Register
.equ	IOO0	= 0	; I/O Data Out Register bit 0
.equ	IOO1	= 1	; I/O Data Out Register bit 1
.equ	IOO2	= 2	; I/O Data Out Register bit 2
.equ	IOO3	= 3	; I/O Data Out Register bit 3
.equ	IOO4	= 4	; I/O Data Out Register bit 4
.equ	IOO5	= 5	; I/O Data Out Register bit 5

; IO_DATIN - I/O Data In register
.equ	IOI0	= 0	; I/O Data In Register bit 0
.equ	IOI1	= 1	; I/O Data In Register bit 1
.equ	IOI2	= 2	; I/O Data In Register bit 2
.equ	IOI3	= 3	; I/O Data In Register bit 3
.equ	IOI4	= 4	; I/O Data In Register bit 4
.equ	IOI5	= 5	; I/O Data In Register bit 5


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

; AVR_CONFIG - AVR Configuration Register
.equ	BBM	= 0	; Button Boot Mode
.equ	SLEEP	= 1	; Sleep Bit
.equ	BLI	= 2	; Battery Low Indicator
.equ	BD	= 3	; Battery Dead
.equ	TM	= 4	; Test Mode
.equ	ACS0	= 5	; AVR System Clock Select bit 0
.equ	ACS1	= 6	; AVR System Clock Select bit 1

; B_DET - Button Detect Register
.equ	BD0	= 0	; Button Detect bit 0
.equ	BD1	= 1	; Button Detect bit 1
.equ	BD2	= 2	; Button Detect bit 2
.equ	BD3	= 3	; Button Detect bit 3
.equ	BD4	= 4	; Button Detect bit 4
.equ	BD5	= 5	; Button Detect bit 5

; BL_CONFIG - Battery Low Configuration Register
.equ	BL0	= 0	; Battery Low Detection Level bit 0
.equ	BL1	= 1	; Battery Low Detection Level bit 1
.equ	BL2	= 2	; Battery Low Detection Level bit 2
.equ	BL3	= 3	; Battery Low Detection Level bit 3
.equ	BL4	= 4	; Battery Low Detection Level bit 4
.equ	BL5	= 5	; Battery Low Detection Level bit 5
.equ	BLV	= 6	; Battery Low Valid
.equ	BL	= 7	; Battery Low



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
.equ	SRAM_START	= 0x0060
.equ	SRAM_SIZE	= 128
.equ	RAMEND	= 0x00df
.equ	XRAMEND	= 0x0000
.equ	E2END	= 0x007f
.equ	EEPROMEND	= 0x007f
.equ	EEADRBITS	= 7
#pragma AVRPART MEMORY PROG_FLASH 2048
#pragma AVRPART MEMORY EEPROM 128
#pragma AVRPART MEMORY INT_SRAM SIZE 128
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x60





; ***** INTERRUPT VECTORS ************************************************
.equ	TXDONEaddr	= 0x0002	; Transmission Done, Bit Timer Flag 2 Interrupt
.equ	TXEMPTYaddr	= 0x0004	; Transmit Buffer Empty, Bit Itmer Flag 0 Interrupt

.equ	INT_VECTORS_SIZE	= 6	; size in words

#pragma AVRPART CORE INSTRUCTIONS_NOT_SUPPORTED break

#endif  /* _AT86RF401DEF_INC_ */

; ***** END OF FILE ******************************************************
