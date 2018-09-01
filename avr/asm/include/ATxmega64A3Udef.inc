

;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : ATxmega64A3Udef.inc
;* Title             : Register/Bit Definitions for the ATxmega64A3U
;* Date              : Jan 01 2008
;* Version           : 1.00
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATxmega64A3U
;* 
;* DESCRIPTION
;* When including this file in the assembly program file, all I/O register 
;* names and I/O register bit names appearing in the data book can be used.
;* In addition, the six registers forming the three data pointers X, Y and 
;* Z have been assigned names XL - ZH. Highest RAM address for Internal 
;* SRAM is also defined 
;* 
;*************************************************************************

#ifndef _ATxmega64A3UDEF_INC_
#define _ATxmega64A3UDEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATxmega64A3U


.equ	SIGNATURE_000 = 0x1E
.equ	SIGNATURE_001 = 0x96
.equ	SIGNATURE_002 = 0x42

#pragma AVRPART ADMIN PART_NAME ATxmega64A3U
#pragma AVRPART CORE CORE_VERSION V3X


; ***** ABSOLUTE I/O REGISTER LOCATIONS **********************************


;***************************************************************************
;** GPIO - General Purpose IO Registers
;***************************************************************************
	
.equ GPIO_GPIOR0 = 0		// General Purpose IO Register 0
.equ GPIO_GPIOR1 = 1		// General Purpose IO Register 1
.equ GPIO_GPIOR2 = 2		// General Purpose IO Register 2
.equ GPIO_GPIOR3 = 3		// General Purpose IO Register 3
.equ GPIO_GPIOR4 = 4		// General Purpose IO Register 4
.equ GPIO_GPIOR5 = 5		// General Purpose IO Register 5
.equ GPIO_GPIOR6 = 6		// General Purpose IO Register 6
.equ GPIO_GPIOR7 = 7		// General Purpose IO Register 7
.equ GPIO_GPIOR8 = 8		// General Purpose IO Register 8
.equ GPIO_GPIOR9 = 9		// General Purpose IO Register 9
.equ GPIO_GPIOR10 = 10		// General Purpose IO Register 10
.equ GPIO_GPIOR11 = 11		// General Purpose IO Register 11
.equ GPIO_GPIOR12 = 12		// General Purpose IO Register 12
.equ GPIO_GPIOR13 = 13		// General Purpose IO Register 13
.equ GPIO_GPIOR14 = 14		// General Purpose IO Register 14
.equ GPIO_GPIOR15 = 15		// General Purpose IO Register 15

;***************************************************************************
;** VPORT0 - Virtual Port 0
;***************************************************************************
	
.equ VPORT0_DIR = 16		// I/O Port Data Direction
.equ VPORT0_OUT = 17		// I/O Port Output
.equ VPORT0_IN = 18		// I/O Port Input
.equ VPORT0_INTFLAGS = 19		// Interrupt Flag Register

;***************************************************************************
;** VPORT1 - Virtual Port 1
;***************************************************************************
	
.equ VPORT1_DIR = 20		// I/O Port Data Direction
.equ VPORT1_OUT = 21		// I/O Port Output
.equ VPORT1_IN = 22		// I/O Port Input
.equ VPORT1_INTFLAGS = 23		// Interrupt Flag Register

;***************************************************************************
;** VPORT2 - Virtual Port 2
;***************************************************************************
	
.equ VPORT2_DIR = 24		// I/O Port Data Direction
.equ VPORT2_OUT = 25		// I/O Port Output
.equ VPORT2_IN = 26		// I/O Port Input
.equ VPORT2_INTFLAGS = 27		// Interrupt Flag Register

;***************************************************************************
;** VPORT3 - Virtual Port 3
;***************************************************************************
	
.equ VPORT3_DIR = 28		// I/O Port Data Direction
.equ VPORT3_OUT = 29		// I/O Port Output
.equ VPORT3_IN = 30		// I/O Port Input
.equ VPORT3_INTFLAGS = 31		// Interrupt Flag Register

;***************************************************************************
;** OCD - On-Chip Debug System
;***************************************************************************
	
.equ OCD_OCDR0 = 46		// OCD Register 0
.equ OCD_OCDR1 = 47		// OCD Register 1

;***************************************************************************
;** CPU - CPU Registers
;***************************************************************************
	
.equ CPU_CCP = 52		// Configuration Change Protection
.equ CPU_RAMPD = 56		// Ramp D
.equ CPU_RAMPX = 57		// Ramp X
.equ CPU_RAMPY = 58		// Ramp Y
.equ CPU_RAMPZ = 59		// Ramp Z
.equ CPU_EIND = 60		// Extended Indirect Jump
.equ CPU_SPL = 61		// Stack Pointer Low
.equ CPU_SPH = 62		// Stack Pointer High
.equ CPU_SREG = 63		// Status Register

;***************************************************************************
;** CLK - Clock System
;***************************************************************************
	
.equ CLK_CTRL = 64		// Control Register
.equ CLK_PSCTRL = 65		// Prescaler Control Register
.equ CLK_LOCK = 66		// Lock register
.equ CLK_RTCCTRL = 67		// RTC Control Register
.equ CLK_USBCTRL = 68		// USB Control Register

;***************************************************************************
;** SLEEP - Sleep Controller
;***************************************************************************
	
.equ SLEEP_CTRL = 72		// Control Register

;***************************************************************************
;** OSC - Oscillator Control
;***************************************************************************
	
.equ OSC_CTRL = 80		// Control Register
.equ OSC_STATUS = 81		// Status Register
.equ OSC_XOSCCTRL = 82		// External Oscillator Control Register
.equ OSC_XOSCFAIL = 83		// Oscillator Failure Detection Register
.equ OSC_RC32KCAL = 84		// 32.768 kHz Internal Oscillator Calibration Register
.equ OSC_PLLCTRL = 85		// PLL Control Register
.equ OSC_DFLLCTRL = 86		// DFLL Control Register

;***************************************************************************
;** DFLLRC32M - DFLL for 32MHz RC Oscillator
;***************************************************************************
	
.equ DFLLRC32M_CTRL = 96		// Control Register
.equ DFLLRC32M_CALA = 98		// Calibration Register A
.equ DFLLRC32M_CALB = 99		// Calibration Register B
.equ DFLLRC32M_COMP1 = 101		// Oscillator Compare Register 1
.equ DFLLRC32M_COMP2 = 102		// Oscillator Compare Register 2

;***************************************************************************
;** DFLLRC2M - DFLL for 2MHz RC Oscillator
;***************************************************************************
	
.equ DFLLRC2M_CTRL = 104		// Control Register
.equ DFLLRC2M_CALA = 106		// Calibration Register A
.equ DFLLRC2M_CALB = 107		// Calibration Register B
.equ DFLLRC2M_COMP1 = 109		// Oscillator Compare Register 1
.equ DFLLRC2M_COMP2 = 110		// Oscillator Compare Register 2

;***************************************************************************
;** PR - Power Reduction
;***************************************************************************
	
.equ PR_PRGEN = 112		// General Power Reduction
.equ PR_PRPA = 113		// Power Reduction Port A
.equ PR_PRPB = 114		// Power Reduction Port B
.equ PR_PRPC = 115		// Power Reduction Port C
.equ PR_PRPD = 116		// Power Reduction Port D
.equ PR_PRPE = 117		// Power Reduction Port E
.equ PR_PRPF = 118		// Power Reduction Port F

;***************************************************************************
;** RST - Reset Controller
;***************************************************************************
	
.equ RST_STATUS = 120		// Status Register
.equ RST_CTRL = 121		// Control Register

;***************************************************************************
;** WDT - Watch-Dog Timer
;***************************************************************************
	
.equ WDT_CTRL = 128		// Control
.equ WDT_WINCTRL = 129		// Windowed Mode Control
.equ WDT_STATUS = 130		// Status

;***************************************************************************
;** MCU - MCU Control
;***************************************************************************
	
.equ MCU_DEVID0 = 144		// Device ID byte 0
.equ MCU_DEVID1 = 145		// Device ID byte 1
.equ MCU_DEVID2 = 146		// Device ID byte 2
.equ MCU_REVID = 147		// Revision ID
.equ MCU_JTAGUID = 148		// JTAG User ID
.equ MCU_MCUCR = 150		// MCU Control
.equ MCU_ANAINIT = 151		// Analog Startup Delay
.equ MCU_EVSYSLOCK = 152		// Event System Lock
.equ MCU_AWEXLOCK = 153		// AWEX Lock

;***************************************************************************
;** PMIC - Programmable Interrupt Controller
;***************************************************************************
	
.equ PMIC_STATUS = 160		// Status Register
.equ PMIC_INTPRI = 161		// Interrupt Priority
.equ PMIC_CTRL = 162		// Control Register

;***************************************************************************
;** PORTCFG - Port Configuration
;***************************************************************************
	
.equ PORTCFG_MPCMASK = 176		// Multi-pin Configuration Mask
.equ PORTCFG_VPCTRLA = 178		// Virtual Port Control Register A
.equ PORTCFG_VPCTRLB = 179		// Virtual Port Control Register B
.equ PORTCFG_CLKEVOUT = 180		// Clock and Event Out Register
.equ PORTCFG_EVOUTSEL = 182		// Event Output Select

;***************************************************************************
;** AES - AES Crypto Module
;***************************************************************************
	
.equ AES_CTRL = 192		// AES Control Register
.equ AES_STATUS = 193		// AES Status Register
.equ AES_STATE = 194		// AES State Register
.equ AES_KEY = 195		// AES Key Register
.equ AES_INTCTRL = 196		// AES Interrupt Control Register

;***************************************************************************
;** CRC - CRC Module
;***************************************************************************
	
.equ CRC_CTRL = 208		// Control Register
.equ CRC_STATUS = 209		// Status Register
.equ CRC_DATAIN = 211		// Data Input
.equ CRC_CHECKSUM0 = 212		// Checksum byte 0
.equ CRC_CHECKSUM1 = 213		// Checksum byte 1
.equ CRC_CHECKSUM2 = 214		// Checksum byte 2
.equ CRC_CHECKSUM3 = 215		// Checksum byte 3

;***************************************************************************
;** DMA - DMA Controller
;***************************************************************************
	
.equ DMA_CTRL = 256		// Control
.equ DMA_INTFLAGS = 259		// Transfer Interrupt Status
.equ DMA_STATUS = 260		// Status
.equ DMA_TEMP = 262		// Temporary Register For 16/24-bit Access
.equ DMA_CH0_CTRLA = 272		// Channel Control
.equ DMA_CH0_CTRLB = 273		// Channel Control
.equ DMA_CH0_ADDRCTRL = 274		// Address Control
.equ DMA_CH0_TRIGSRC = 275		// Channel Trigger Source
.equ DMA_CH0_TRFCNT = 276		// Channel Block Transfer Count
.equ DMA_CH0_REPCNT = 278		// Channel Repeat Count
.equ DMA_CH0_SRCADDR0 = 280		// Channel Source Address 0
.equ DMA_CH0_SRCADDR1 = 281		// Channel Source Address 1
.equ DMA_CH0_SRCADDR2 = 282		// Channel Source Address 2
.equ DMA_CH0_DESTADDR0 = 284		// Channel Destination Address 0
.equ DMA_CH0_DESTADDR1 = 285		// Channel Destination Address 1
.equ DMA_CH0_DESTADDR2 = 286		// Channel Destination Address 2
.equ DMA_CH1_CTRLA = 288		// Channel Control
.equ DMA_CH1_CTRLB = 289		// Channel Control
.equ DMA_CH1_ADDRCTRL = 290		// Address Control
.equ DMA_CH1_TRIGSRC = 291		// Channel Trigger Source
.equ DMA_CH1_TRFCNT = 292		// Channel Block Transfer Count
.equ DMA_CH1_REPCNT = 294		// Channel Repeat Count
.equ DMA_CH1_SRCADDR0 = 296		// Channel Source Address 0
.equ DMA_CH1_SRCADDR1 = 297		// Channel Source Address 1
.equ DMA_CH1_SRCADDR2 = 298		// Channel Source Address 2
.equ DMA_CH1_DESTADDR0 = 300		// Channel Destination Address 0
.equ DMA_CH1_DESTADDR1 = 301		// Channel Destination Address 1
.equ DMA_CH1_DESTADDR2 = 302		// Channel Destination Address 2
.equ DMA_CH2_CTRLA = 304		// Channel Control
.equ DMA_CH2_CTRLB = 305		// Channel Control
.equ DMA_CH2_ADDRCTRL = 306		// Address Control
.equ DMA_CH2_TRIGSRC = 307		// Channel Trigger Source
.equ DMA_CH2_TRFCNT = 308		// Channel Block Transfer Count
.equ DMA_CH2_REPCNT = 310		// Channel Repeat Count
.equ DMA_CH2_SRCADDR0 = 312		// Channel Source Address 0
.equ DMA_CH2_SRCADDR1 = 313		// Channel Source Address 1
.equ DMA_CH2_SRCADDR2 = 314		// Channel Source Address 2
.equ DMA_CH2_DESTADDR0 = 316		// Channel Destination Address 0
.equ DMA_CH2_DESTADDR1 = 317		// Channel Destination Address 1
.equ DMA_CH2_DESTADDR2 = 318		// Channel Destination Address 2
.equ DMA_CH3_CTRLA = 320		// Channel Control
.equ DMA_CH3_CTRLB = 321		// Channel Control
.equ DMA_CH3_ADDRCTRL = 322		// Address Control
.equ DMA_CH3_TRIGSRC = 323		// Channel Trigger Source
.equ DMA_CH3_TRFCNT = 324		// Channel Block Transfer Count
.equ DMA_CH3_REPCNT = 326		// Channel Repeat Count
.equ DMA_CH3_SRCADDR0 = 328		// Channel Source Address 0
.equ DMA_CH3_SRCADDR1 = 329		// Channel Source Address 1
.equ DMA_CH3_SRCADDR2 = 330		// Channel Source Address 2
.equ DMA_CH3_DESTADDR0 = 332		// Channel Destination Address 0
.equ DMA_CH3_DESTADDR1 = 333		// Channel Destination Address 1
.equ DMA_CH3_DESTADDR2 = 334		// Channel Destination Address 2

;***************************************************************************
;** EVSYS - Event System
;***************************************************************************
	
.equ EVSYS_CH0MUX = 384		// Event Channel 0 Multiplexer
.equ EVSYS_CH1MUX = 385		// Event Channel 1 Multiplexer
.equ EVSYS_CH2MUX = 386		// Event Channel 2 Multiplexer
.equ EVSYS_CH3MUX = 387		// Event Channel 3 Multiplexer
.equ EVSYS_CH4MUX = 388		// Event Channel 4 Multiplexer
.equ EVSYS_CH5MUX = 389		// Event Channel 5 Multiplexer
.equ EVSYS_CH6MUX = 390		// Event Channel 6 Multiplexer
.equ EVSYS_CH7MUX = 391		// Event Channel 7 Multiplexer
.equ EVSYS_CH0CTRL = 392		// Channel 0 Control Register
.equ EVSYS_CH1CTRL = 393		// Channel 1 Control Register
.equ EVSYS_CH2CTRL = 394		// Channel 2 Control Register
.equ EVSYS_CH3CTRL = 395		// Channel 3 Control Register
.equ EVSYS_CH4CTRL = 396		// Channel 4 Control Register
.equ EVSYS_CH5CTRL = 397		// Channel 5 Control Register
.equ EVSYS_CH6CTRL = 398		// Channel 6 Control Register
.equ EVSYS_CH7CTRL = 399		// Channel 7 Control Register
.equ EVSYS_STROBE = 400		// Event Strobe
.equ EVSYS_DATA = 401		// Event Data

;***************************************************************************
;** NVM - Non Volatile Memory
;***************************************************************************
	
.equ NVM_ADDR0 = 448		// Address Register 0
.equ NVM_ADDR1 = 449		// Address Register 1
.equ NVM_ADDR2 = 450		// Address Register 2
.equ NVM_DATA0 = 452		// Data Register 0
.equ NVM_DATA1 = 453		// Data Register 1
.equ NVM_DATA2 = 454		// Data Register 2
.equ NVM_CMD = 458		// Command
.equ NVM_CTRLA = 459		// Control Register A
.equ NVM_CTRLB = 460		// Control Register B
.equ NVM_INTCTRL = 461		// Interrupt Control
.equ NVM_STATUS = 463		// Status
.equ NVM_LOCKBITS = 464		// Lock Bits

;***************************************************************************
;** ADCA - Analog to Digital Converter A
;***************************************************************************
	
.equ ADCA_CTRLA = 512		// Control Register A
.equ ADCA_CTRLB = 513		// Control Register B
.equ ADCA_REFCTRL = 514		// Reference Control
.equ ADCA_EVCTRL = 515		// Event Control
.equ ADCA_PRESCALER = 516		// Clock Prescaler
.equ ADCA_INTFLAGS = 518		// Interrupt Flags
.equ ADCA_TEMP = 519		// Temporary Register
.equ ADCA_CAL = 524		// Calibration Value
.equ ADCA_CH0RES = 528		// Channel 0 Result
.equ ADCA_CH1RES = 530		// Channel 1 Result
.equ ADCA_CH2RES = 532		// Channel 2 Result
.equ ADCA_CH3RES = 534		// Channel 3 Result
.equ ADCA_CMP = 536		// Compare Value
.equ ADCA_CH0_CTRL = 544		// Control Register
.equ ADCA_CH0_MUXCTRL = 545		// MUX Control
.equ ADCA_CH0_INTCTRL = 546		// Channel Interrupt Control Register
.equ ADCA_CH0_INTFLAGS = 547		// Interrupt Flags
.equ ADCA_CH0_RES = 548		// Channel Result
.equ ADCA_CH0_SCAN = 550		// Input Channel Scan
.equ ADCA_CH1_CTRL = 552		// Control Register
.equ ADCA_CH1_MUXCTRL = 553		// MUX Control
.equ ADCA_CH1_INTCTRL = 554		// Channel Interrupt Control Register
.equ ADCA_CH1_INTFLAGS = 555		// Interrupt Flags
.equ ADCA_CH1_RES = 556		// Channel Result
.equ ADCA_CH1_SCAN = 558		// Input Channel Scan
.equ ADCA_CH2_CTRL = 560		// Control Register
.equ ADCA_CH2_MUXCTRL = 561		// MUX Control
.equ ADCA_CH2_INTCTRL = 562		// Channel Interrupt Control Register
.equ ADCA_CH2_INTFLAGS = 563		// Interrupt Flags
.equ ADCA_CH2_RES = 564		// Channel Result
.equ ADCA_CH2_SCAN = 566		// Input Channel Scan
.equ ADCA_CH3_CTRL = 568		// Control Register
.equ ADCA_CH3_MUXCTRL = 569		// MUX Control
.equ ADCA_CH3_INTCTRL = 570		// Channel Interrupt Control Register
.equ ADCA_CH3_INTFLAGS = 571		// Interrupt Flags
.equ ADCA_CH3_RES = 572		// Channel Result
.equ ADCA_CH3_SCAN = 574		// Input Channel Scan

;***************************************************************************
;** ADCB - Analog to Digital Converter B
;***************************************************************************
	
.equ ADCB_CTRLA = 576		// Control Register A
.equ ADCB_CTRLB = 577		// Control Register B
.equ ADCB_REFCTRL = 578		// Reference Control
.equ ADCB_EVCTRL = 579		// Event Control
.equ ADCB_PRESCALER = 580		// Clock Prescaler
.equ ADCB_INTFLAGS = 582		// Interrupt Flags
.equ ADCB_TEMP = 583		// Temporary Register
.equ ADCB_CAL = 588		// Calibration Value
.equ ADCB_CH0RES = 592		// Channel 0 Result
.equ ADCB_CH1RES = 594		// Channel 1 Result
.equ ADCB_CH2RES = 596		// Channel 2 Result
.equ ADCB_CH3RES = 598		// Channel 3 Result
.equ ADCB_CMP = 600		// Compare Value
.equ ADCB_CH0_CTRL = 608		// Control Register
.equ ADCB_CH0_MUXCTRL = 609		// MUX Control
.equ ADCB_CH0_INTCTRL = 610		// Channel Interrupt Control Register
.equ ADCB_CH0_INTFLAGS = 611		// Interrupt Flags
.equ ADCB_CH0_RES = 612		// Channel Result
.equ ADCB_CH0_SCAN = 614		// Input Channel Scan
.equ ADCB_CH1_CTRL = 616		// Control Register
.equ ADCB_CH1_MUXCTRL = 617		// MUX Control
.equ ADCB_CH1_INTCTRL = 618		// Channel Interrupt Control Register
.equ ADCB_CH1_INTFLAGS = 619		// Interrupt Flags
.equ ADCB_CH1_RES = 620		// Channel Result
.equ ADCB_CH1_SCAN = 622		// Input Channel Scan
.equ ADCB_CH2_CTRL = 624		// Control Register
.equ ADCB_CH2_MUXCTRL = 625		// MUX Control
.equ ADCB_CH2_INTCTRL = 626		// Channel Interrupt Control Register
.equ ADCB_CH2_INTFLAGS = 627		// Interrupt Flags
.equ ADCB_CH2_RES = 628		// Channel Result
.equ ADCB_CH2_SCAN = 630		// Input Channel Scan
.equ ADCB_CH3_CTRL = 632		// Control Register
.equ ADCB_CH3_MUXCTRL = 633		// MUX Control
.equ ADCB_CH3_INTCTRL = 634		// Channel Interrupt Control Register
.equ ADCB_CH3_INTFLAGS = 635		// Interrupt Flags
.equ ADCB_CH3_RES = 636		// Channel Result
.equ ADCB_CH3_SCAN = 638		// Input Channel Scan

;***************************************************************************
;** DACB - Digital to Analog Converter B
;***************************************************************************
	
.equ DACB_CTRLA = 800		// Control Register A
.equ DACB_CTRLB = 801		// Control Register B
.equ DACB_CTRLC = 802		// Control Register C
.equ DACB_EVCTRL = 803		// Event Input Control
.equ DACB_TIMCTRL = 804		// Timing Control
.equ DACB_STATUS = 805		// Status
.equ DACB_CH0GAINCAL = 808		// Gain Calibration
.equ DACB_CH0OFFSETCAL = 809		// Offset Calibration
.equ DACB_CH1GAINCAL = 810		// Gain Calibration
.equ DACB_CH1OFFSETCAL = 811		// Offset Calibration
.equ DACB_CH0DATA = 824		// Channel 0 Data
.equ DACB_CH1DATA = 826		// Channel 1 Data

;***************************************************************************
;** ACA - Analog Comparator A
;***************************************************************************
	
.equ ACA_AC0CTRL = 896		// Analog Comparator 0 Control
.equ ACA_AC1CTRL = 897		// Analog Comparator 1 Control
.equ ACA_AC0MUXCTRL = 898		// Analog Comparator 0 MUX Control
.equ ACA_AC1MUXCTRL = 899		// Analog Comparator 1 MUX Control
.equ ACA_CTRLA = 900		// Control Register A
.equ ACA_CTRLB = 901		// Control Register B
.equ ACA_WINCTRL = 902		// Window Mode Control
.equ ACA_STATUS = 903		// Status

;***************************************************************************
;** ACB - Analog Comparator B
;***************************************************************************
	
.equ ACB_AC0CTRL = 912		// Analog Comparator 0 Control
.equ ACB_AC1CTRL = 913		// Analog Comparator 1 Control
.equ ACB_AC0MUXCTRL = 914		// Analog Comparator 0 MUX Control
.equ ACB_AC1MUXCTRL = 915		// Analog Comparator 1 MUX Control
.equ ACB_CTRLA = 916		// Control Register A
.equ ACB_CTRLB = 917		// Control Register B
.equ ACB_WINCTRL = 918		// Window Mode Control
.equ ACB_STATUS = 919		// Status

;***************************************************************************
;** RTC - Real-Time Counter
;***************************************************************************
	
.equ RTC_CTRL = 1024		// Control Register
.equ RTC_STATUS = 1025		// Status Register
.equ RTC_INTCTRL = 1026		// Interrupt Control Register
.equ RTC_INTFLAGS = 1027		// Interrupt Flags
.equ RTC_TEMP = 1028		// Temporary register
.equ RTC_CNT = 1032		// Count Register
.equ RTC_PER = 1034		// Period Register
.equ RTC_COMP = 1036		// Compare Register

;***************************************************************************
;** TWIC - Two-Wire Interface C
;***************************************************************************
	
.equ TWIC_CTRL = 1152		// TWI Common Control Register
.equ TWIC_MASTER_CTRLA = 1153		// Control Register A
.equ TWIC_MASTER_CTRLB = 1154		// Control Register B
.equ TWIC_MASTER_CTRLC = 1155		// Control Register C
.equ TWIC_MASTER_STATUS = 1156		// Status Register
.equ TWIC_MASTER_BAUD = 1157		// Baurd Rate Control Register
.equ TWIC_MASTER_ADDR = 1158		// Address Register
.equ TWIC_MASTER_DATA = 1159		// Data Register
.equ TWIC_SLAVE_CTRLA = 1160		// Control Register A
.equ TWIC_SLAVE_CTRLB = 1161		// Control Register B
.equ TWIC_SLAVE_STATUS = 1162		// Status Register
.equ TWIC_SLAVE_ADDR = 1163		// Address Register
.equ TWIC_SLAVE_DATA = 1164		// Data Register
.equ TWIC_SLAVE_ADDRMASK = 1165		// Address Mask Register

;***************************************************************************
;** TWIE - Two-Wire Interface E
;***************************************************************************
	
.equ TWIE_CTRL = 1184		// TWI Common Control Register
.equ TWIE_MASTER_CTRLA = 1185		// Control Register A
.equ TWIE_MASTER_CTRLB = 1186		// Control Register B
.equ TWIE_MASTER_CTRLC = 1187		// Control Register C
.equ TWIE_MASTER_STATUS = 1188		// Status Register
.equ TWIE_MASTER_BAUD = 1189		// Baurd Rate Control Register
.equ TWIE_MASTER_ADDR = 1190		// Address Register
.equ TWIE_MASTER_DATA = 1191		// Data Register
.equ TWIE_SLAVE_CTRLA = 1192		// Control Register A
.equ TWIE_SLAVE_CTRLB = 1193		// Control Register B
.equ TWIE_SLAVE_STATUS = 1194		// Status Register
.equ TWIE_SLAVE_ADDR = 1195		// Address Register
.equ TWIE_SLAVE_DATA = 1196		// Data Register
.equ TWIE_SLAVE_ADDRMASK = 1197		// Address Mask Register

;***************************************************************************
;** USB - Universal Serial Bus
;***************************************************************************
	
.equ USB_CTRLA = 1216		// Control Register A
.equ USB_CTRLB = 1217		// Control Register B
.equ USB_STATUS = 1218		// Status Register
.equ USB_ADDR = 1219		// Address Register
.equ USB_FIFOWP = 1220		// FIFO Write Pointer Register
.equ USB_FIFORP = 1221		// FIFO Read Pointer Register
.equ USB_EPPTR = 1222		// Endpoint Configuration Table Pointer
.equ USB_INTCTRLA = 1224		// Interrupt Control Register A
.equ USB_INTCTRLB = 1225		// Interrupt Control Register B
.equ USB_INTFLAGSACLR = 1226		// Clear Interrupt Flag Register A
.equ USB_INTFLAGSASET = 1227		// Set Interrupt Flag Register A
.equ USB_INTFLAGSBCLR = 1228		// Clear Interrupt Flag Register B
.equ USB_INTFLAGSBSET = 1229		// Set Interrupt Flag Register B
.equ USB_CAL0 = 1274		// Calibration Byte 0
.equ USB_CAL1 = 1275		// Calibration Byte 1

;***************************************************************************
;** PORTA - Port A
;***************************************************************************
	
.equ PORTA_DIR = 1536		// I/O Port Data Direction
.equ PORTA_DIRSET = 1537		// I/O Port Data Direction Set
.equ PORTA_DIRCLR = 1538		// I/O Port Data Direction Clear
.equ PORTA_DIRTGL = 1539		// I/O Port Data Direction Toggle
.equ PORTA_OUT = 1540		// I/O Port Output
.equ PORTA_OUTSET = 1541		// I/O Port Output Set
.equ PORTA_OUTCLR = 1542		// I/O Port Output Clear
.equ PORTA_OUTTGL = 1543		// I/O Port Output Toggle
.equ PORTA_IN = 1544		// I/O port Input
.equ PORTA_INTCTRL = 1545		// Interrupt Control Register
.equ PORTA_INT0MASK = 1546		// Port Interrupt 0 Mask
.equ PORTA_INT1MASK = 1547		// Port Interrupt 1 Mask
.equ PORTA_INTFLAGS = 1548		// Interrupt Flag Register
.equ PORTA_REMAP = 1550		// I/O Port Pin Remap Register
.equ PORTA_PIN0CTRL = 1552		// Pin 0 Control Register
.equ PORTA_PIN1CTRL = 1553		// Pin 1 Control Register
.equ PORTA_PIN2CTRL = 1554		// Pin 2 Control Register
.equ PORTA_PIN3CTRL = 1555		// Pin 3 Control Register
.equ PORTA_PIN4CTRL = 1556		// Pin 4 Control Register
.equ PORTA_PIN5CTRL = 1557		// Pin 5 Control Register
.equ PORTA_PIN6CTRL = 1558		// Pin 6 Control Register
.equ PORTA_PIN7CTRL = 1559		// Pin 7 Control Register

;***************************************************************************
;** PORTB - Port B
;***************************************************************************
	
.equ PORTB_DIR = 1568		// I/O Port Data Direction
.equ PORTB_DIRSET = 1569		// I/O Port Data Direction Set
.equ PORTB_DIRCLR = 1570		// I/O Port Data Direction Clear
.equ PORTB_DIRTGL = 1571		// I/O Port Data Direction Toggle
.equ PORTB_OUT = 1572		// I/O Port Output
.equ PORTB_OUTSET = 1573		// I/O Port Output Set
.equ PORTB_OUTCLR = 1574		// I/O Port Output Clear
.equ PORTB_OUTTGL = 1575		// I/O Port Output Toggle
.equ PORTB_IN = 1576		// I/O port Input
.equ PORTB_INTCTRL = 1577		// Interrupt Control Register
.equ PORTB_INT0MASK = 1578		// Port Interrupt 0 Mask
.equ PORTB_INT1MASK = 1579		// Port Interrupt 1 Mask
.equ PORTB_INTFLAGS = 1580		// Interrupt Flag Register
.equ PORTB_REMAP = 1582		// I/O Port Pin Remap Register
.equ PORTB_PIN0CTRL = 1584		// Pin 0 Control Register
.equ PORTB_PIN1CTRL = 1585		// Pin 1 Control Register
.equ PORTB_PIN2CTRL = 1586		// Pin 2 Control Register
.equ PORTB_PIN3CTRL = 1587		// Pin 3 Control Register
.equ PORTB_PIN4CTRL = 1588		// Pin 4 Control Register
.equ PORTB_PIN5CTRL = 1589		// Pin 5 Control Register
.equ PORTB_PIN6CTRL = 1590		// Pin 6 Control Register
.equ PORTB_PIN7CTRL = 1591		// Pin 7 Control Register

;***************************************************************************
;** PORTC - Port C
;***************************************************************************
	
.equ PORTC_DIR = 1600		// I/O Port Data Direction
.equ PORTC_DIRSET = 1601		// I/O Port Data Direction Set
.equ PORTC_DIRCLR = 1602		// I/O Port Data Direction Clear
.equ PORTC_DIRTGL = 1603		// I/O Port Data Direction Toggle
.equ PORTC_OUT = 1604		// I/O Port Output
.equ PORTC_OUTSET = 1605		// I/O Port Output Set
.equ PORTC_OUTCLR = 1606		// I/O Port Output Clear
.equ PORTC_OUTTGL = 1607		// I/O Port Output Toggle
.equ PORTC_IN = 1608		// I/O port Input
.equ PORTC_INTCTRL = 1609		// Interrupt Control Register
.equ PORTC_INT0MASK = 1610		// Port Interrupt 0 Mask
.equ PORTC_INT1MASK = 1611		// Port Interrupt 1 Mask
.equ PORTC_INTFLAGS = 1612		// Interrupt Flag Register
.equ PORTC_REMAP = 1614		// I/O Port Pin Remap Register
.equ PORTC_PIN0CTRL = 1616		// Pin 0 Control Register
.equ PORTC_PIN1CTRL = 1617		// Pin 1 Control Register
.equ PORTC_PIN2CTRL = 1618		// Pin 2 Control Register
.equ PORTC_PIN3CTRL = 1619		// Pin 3 Control Register
.equ PORTC_PIN4CTRL = 1620		// Pin 4 Control Register
.equ PORTC_PIN5CTRL = 1621		// Pin 5 Control Register
.equ PORTC_PIN6CTRL = 1622		// Pin 6 Control Register
.equ PORTC_PIN7CTRL = 1623		// Pin 7 Control Register

;***************************************************************************
;** PORTD - Port D
;***************************************************************************
	
.equ PORTD_DIR = 1632		// I/O Port Data Direction
.equ PORTD_DIRSET = 1633		// I/O Port Data Direction Set
.equ PORTD_DIRCLR = 1634		// I/O Port Data Direction Clear
.equ PORTD_DIRTGL = 1635		// I/O Port Data Direction Toggle
.equ PORTD_OUT = 1636		// I/O Port Output
.equ PORTD_OUTSET = 1637		// I/O Port Output Set
.equ PORTD_OUTCLR = 1638		// I/O Port Output Clear
.equ PORTD_OUTTGL = 1639		// I/O Port Output Toggle
.equ PORTD_IN = 1640		// I/O port Input
.equ PORTD_INTCTRL = 1641		// Interrupt Control Register
.equ PORTD_INT0MASK = 1642		// Port Interrupt 0 Mask
.equ PORTD_INT1MASK = 1643		// Port Interrupt 1 Mask
.equ PORTD_INTFLAGS = 1644		// Interrupt Flag Register
.equ PORTD_REMAP = 1646		// I/O Port Pin Remap Register
.equ PORTD_PIN0CTRL = 1648		// Pin 0 Control Register
.equ PORTD_PIN1CTRL = 1649		// Pin 1 Control Register
.equ PORTD_PIN2CTRL = 1650		// Pin 2 Control Register
.equ PORTD_PIN3CTRL = 1651		// Pin 3 Control Register
.equ PORTD_PIN4CTRL = 1652		// Pin 4 Control Register
.equ PORTD_PIN5CTRL = 1653		// Pin 5 Control Register
.equ PORTD_PIN6CTRL = 1654		// Pin 6 Control Register
.equ PORTD_PIN7CTRL = 1655		// Pin 7 Control Register

;***************************************************************************
;** PORTE - Port E
;***************************************************************************
	
.equ PORTE_DIR = 1664		// I/O Port Data Direction
.equ PORTE_DIRSET = 1665		// I/O Port Data Direction Set
.equ PORTE_DIRCLR = 1666		// I/O Port Data Direction Clear
.equ PORTE_DIRTGL = 1667		// I/O Port Data Direction Toggle
.equ PORTE_OUT = 1668		// I/O Port Output
.equ PORTE_OUTSET = 1669		// I/O Port Output Set
.equ PORTE_OUTCLR = 1670		// I/O Port Output Clear
.equ PORTE_OUTTGL = 1671		// I/O Port Output Toggle
.equ PORTE_IN = 1672		// I/O port Input
.equ PORTE_INTCTRL = 1673		// Interrupt Control Register
.equ PORTE_INT0MASK = 1674		// Port Interrupt 0 Mask
.equ PORTE_INT1MASK = 1675		// Port Interrupt 1 Mask
.equ PORTE_INTFLAGS = 1676		// Interrupt Flag Register
.equ PORTE_REMAP = 1678		// I/O Port Pin Remap Register
.equ PORTE_PIN0CTRL = 1680		// Pin 0 Control Register
.equ PORTE_PIN1CTRL = 1681		// Pin 1 Control Register
.equ PORTE_PIN2CTRL = 1682		// Pin 2 Control Register
.equ PORTE_PIN3CTRL = 1683		// Pin 3 Control Register
.equ PORTE_PIN4CTRL = 1684		// Pin 4 Control Register
.equ PORTE_PIN5CTRL = 1685		// Pin 5 Control Register
.equ PORTE_PIN6CTRL = 1686		// Pin 6 Control Register
.equ PORTE_PIN7CTRL = 1687		// Pin 7 Control Register

;***************************************************************************
;** PORTF - Port F
;***************************************************************************
	
.equ PORTF_DIR = 1696		// I/O Port Data Direction
.equ PORTF_DIRSET = 1697		// I/O Port Data Direction Set
.equ PORTF_DIRCLR = 1698		// I/O Port Data Direction Clear
.equ PORTF_DIRTGL = 1699		// I/O Port Data Direction Toggle
.equ PORTF_OUT = 1700		// I/O Port Output
.equ PORTF_OUTSET = 1701		// I/O Port Output Set
.equ PORTF_OUTCLR = 1702		// I/O Port Output Clear
.equ PORTF_OUTTGL = 1703		// I/O Port Output Toggle
.equ PORTF_IN = 1704		// I/O port Input
.equ PORTF_INTCTRL = 1705		// Interrupt Control Register
.equ PORTF_INT0MASK = 1706		// Port Interrupt 0 Mask
.equ PORTF_INT1MASK = 1707		// Port Interrupt 1 Mask
.equ PORTF_INTFLAGS = 1708		// Interrupt Flag Register
.equ PORTF_REMAP = 1710		// I/O Port Pin Remap Register
.equ PORTF_PIN0CTRL = 1712		// Pin 0 Control Register
.equ PORTF_PIN1CTRL = 1713		// Pin 1 Control Register
.equ PORTF_PIN2CTRL = 1714		// Pin 2 Control Register
.equ PORTF_PIN3CTRL = 1715		// Pin 3 Control Register
.equ PORTF_PIN4CTRL = 1716		// Pin 4 Control Register
.equ PORTF_PIN5CTRL = 1717		// Pin 5 Control Register
.equ PORTF_PIN6CTRL = 1718		// Pin 6 Control Register
.equ PORTF_PIN7CTRL = 1719		// Pin 7 Control Register

;***************************************************************************
;** PORTR - Port R
;***************************************************************************
	
.equ PORTR_DIR = 2016		// I/O Port Data Direction
.equ PORTR_DIRSET = 2017		// I/O Port Data Direction Set
.equ PORTR_DIRCLR = 2018		// I/O Port Data Direction Clear
.equ PORTR_DIRTGL = 2019		// I/O Port Data Direction Toggle
.equ PORTR_OUT = 2020		// I/O Port Output
.equ PORTR_OUTSET = 2021		// I/O Port Output Set
.equ PORTR_OUTCLR = 2022		// I/O Port Output Clear
.equ PORTR_OUTTGL = 2023		// I/O Port Output Toggle
.equ PORTR_IN = 2024		// I/O port Input
.equ PORTR_INTCTRL = 2025		// Interrupt Control Register
.equ PORTR_INT0MASK = 2026		// Port Interrupt 0 Mask
.equ PORTR_INT1MASK = 2027		// Port Interrupt 1 Mask
.equ PORTR_INTFLAGS = 2028		// Interrupt Flag Register
.equ PORTR_REMAP = 2030		// I/O Port Pin Remap Register
.equ PORTR_PIN0CTRL = 2032		// Pin 0 Control Register
.equ PORTR_PIN1CTRL = 2033		// Pin 1 Control Register
.equ PORTR_PIN2CTRL = 2034		// Pin 2 Control Register
.equ PORTR_PIN3CTRL = 2035		// Pin 3 Control Register
.equ PORTR_PIN4CTRL = 2036		// Pin 4 Control Register
.equ PORTR_PIN5CTRL = 2037		// Pin 5 Control Register
.equ PORTR_PIN6CTRL = 2038		// Pin 6 Control Register
.equ PORTR_PIN7CTRL = 2039		// Pin 7 Control Register

;***************************************************************************
;** TCC0 - Timer/Counter C0
;***************************************************************************
	
.equ TCC0_CTRLA = 2048		// Control  Register A
.equ TCC0_CTRLB = 2049		// Control Register B
.equ TCC0_CTRLC = 2050		// Control register C
.equ TCC0_CTRLD = 2051		// Control Register D
.equ TCC0_CTRLE = 2052		// Control Register E
.equ TCC0_INTCTRLA = 2054		// Interrupt Control Register A
.equ TCC0_INTCTRLB = 2055		// Interrupt Control Register B
.equ TCC0_CTRLFCLR = 2056		// Control Register F Clear
.equ TCC0_CTRLFSET = 2057		// Control Register F Set
.equ TCC0_CTRLGCLR = 2058		// Control Register G Clear
.equ TCC0_CTRLGSET = 2059		// Control Register G Set
.equ TCC0_INTFLAGS = 2060		// Interrupt Flag Register
.equ TCC0_TEMP = 2063		// Temporary Register For 16-bit Access
.equ TCC0_CNT = 2080		// Count
.equ TCC0_PER = 2086		// Period
.equ TCC0_CCA = 2088		// Compare or Capture A
.equ TCC0_CCB = 2090		// Compare or Capture B
.equ TCC0_CCC = 2092		// Compare or Capture C
.equ TCC0_CCD = 2094		// Compare or Capture D
.equ TCC0_PERBUF = 2102		// Period Buffer
.equ TCC0_CCABUF = 2104		// Compare Or Capture A Buffer
.equ TCC0_CCBBUF = 2106		// Compare Or Capture B Buffer
.equ TCC0_CCCBUF = 2108		// Compare Or Capture C Buffer
.equ TCC0_CCDBUF = 2110		// Compare Or Capture D Buffer

;***************************************************************************
;** TCC1 - Timer/Counter C1
;***************************************************************************
	
.equ TCC1_CTRLA = 2112		// Control  Register A
.equ TCC1_CTRLB = 2113		// Control Register B
.equ TCC1_CTRLC = 2114		// Control register C
.equ TCC1_CTRLD = 2115		// Control Register D
.equ TCC1_CTRLE = 2116		// Control Register E
.equ TCC1_INTCTRLA = 2118		// Interrupt Control Register A
.equ TCC1_INTCTRLB = 2119		// Interrupt Control Register B
.equ TCC1_CTRLFCLR = 2120		// Control Register F Clear
.equ TCC1_CTRLFSET = 2121		// Control Register F Set
.equ TCC1_CTRLGCLR = 2122		// Control Register G Clear
.equ TCC1_CTRLGSET = 2123		// Control Register G Set
.equ TCC1_INTFLAGS = 2124		// Interrupt Flag Register
.equ TCC1_TEMP = 2127		// Temporary Register For 16-bit Access
.equ TCC1_CNT = 2144		// Count
.equ TCC1_PER = 2150		// Period
.equ TCC1_CCA = 2152		// Compare or Capture A
.equ TCC1_CCB = 2154		// Compare or Capture B
.equ TCC1_PERBUF = 2166		// Period Buffer
.equ TCC1_CCABUF = 2168		// Compare Or Capture A Buffer
.equ TCC1_CCBBUF = 2170		// Compare Or Capture B Buffer

;***************************************************************************
;** AWEXC - Advanced Waveform Extension C
;***************************************************************************
	
.equ AWEXC_CTRL = 2176		// Control Register
.equ AWEXC_FDEMASK = 2178		// Fault Detection Event Mask
.equ AWEXC_FDCTRL = 2179		// Fault Detection Control Register
.equ AWEXC_STATUS = 2180		// Status Register
.equ AWEXC_STATUSSET = 2181		// Status Set Register
.equ AWEXC_DTBOTH = 2182		// Dead Time Both Sides
.equ AWEXC_DTBOTHBUF = 2183		// Dead Time Both Sides Buffer
.equ AWEXC_DTLS = 2184		// Dead Time Low Side
.equ AWEXC_DTHS = 2185		// Dead Time High Side
.equ AWEXC_DTLSBUF = 2186		// Dead Time Low Side Buffer
.equ AWEXC_DTHSBUF = 2187		// Dead Time High Side Buffer
.equ AWEXC_OUTOVEN = 2188		// Output Override Enable

;***************************************************************************
;** HIRESC - High-Resolution Extension C
;***************************************************************************
	
.equ HIRESC_CTRLA = 2192		// Control Register

;***************************************************************************
;** USARTC0 - Universal Asynchronous Receiver-Transmitter C0
;***************************************************************************
	
.equ USARTC0_DATA = 2208		// Data Register
.equ USARTC0_STATUS = 2209		// Status Register
.equ USARTC0_CTRLA = 2211		// Control Register A
.equ USARTC0_CTRLB = 2212		// Control Register B
.equ USARTC0_CTRLC = 2213		// Control Register C
.equ USARTC0_BAUDCTRLA = 2214		// Baud Rate Control Register A
.equ USARTC0_BAUDCTRLB = 2215		// Baud Rate Control Register B

;***************************************************************************
;** USARTC1 - Universal Asynchronous Receiver-Transmitter C1
;***************************************************************************
	
.equ USARTC1_DATA = 2224		// Data Register
.equ USARTC1_STATUS = 2225		// Status Register
.equ USARTC1_CTRLA = 2227		// Control Register A
.equ USARTC1_CTRLB = 2228		// Control Register B
.equ USARTC1_CTRLC = 2229		// Control Register C
.equ USARTC1_BAUDCTRLA = 2230		// Baud Rate Control Register A
.equ USARTC1_BAUDCTRLB = 2231		// Baud Rate Control Register B

;***************************************************************************
;** SPIC - Serial Peripheral Interface C
;***************************************************************************
	
.equ SPIC_CTRL = 2240		// Control Register
.equ SPIC_INTCTRL = 2241		// Interrupt Control Register
.equ SPIC_STATUS = 2242		// Status Register
.equ SPIC_DATA = 2243		// Data Register

;***************************************************************************
;** IRCOM - IR Communication Module
;***************************************************************************
	
.equ IRCOM_CTRL = 2296		// Control Register
.equ IRCOM_TXPLCTRL = 2297		// IrDA Transmitter Pulse Length Control Register
.equ IRCOM_RXPLCTRL = 2298		// IrDA Receiver Pulse Length Control Register

;***************************************************************************
;** TCD0 - Timer/Counter D0
;***************************************************************************
	
.equ TCD0_CTRLA = 2304		// Control  Register A
.equ TCD0_CTRLB = 2305		// Control Register B
.equ TCD0_CTRLC = 2306		// Control register C
.equ TCD0_CTRLD = 2307		// Control Register D
.equ TCD0_CTRLE = 2308		// Control Register E
.equ TCD0_INTCTRLA = 2310		// Interrupt Control Register A
.equ TCD0_INTCTRLB = 2311		// Interrupt Control Register B
.equ TCD0_CTRLFCLR = 2312		// Control Register F Clear
.equ TCD0_CTRLFSET = 2313		// Control Register F Set
.equ TCD0_CTRLGCLR = 2314		// Control Register G Clear
.equ TCD0_CTRLGSET = 2315		// Control Register G Set
.equ TCD0_INTFLAGS = 2316		// Interrupt Flag Register
.equ TCD0_TEMP = 2319		// Temporary Register For 16-bit Access
.equ TCD0_CNT = 2336		// Count
.equ TCD0_PER = 2342		// Period
.equ TCD0_CCA = 2344		// Compare or Capture A
.equ TCD0_CCB = 2346		// Compare or Capture B
.equ TCD0_CCC = 2348		// Compare or Capture C
.equ TCD0_CCD = 2350		// Compare or Capture D
.equ TCD0_PERBUF = 2358		// Period Buffer
.equ TCD0_CCABUF = 2360		// Compare Or Capture A Buffer
.equ TCD0_CCBBUF = 2362		// Compare Or Capture B Buffer
.equ TCD0_CCCBUF = 2364		// Compare Or Capture C Buffer
.equ TCD0_CCDBUF = 2366		// Compare Or Capture D Buffer

;***************************************************************************
;** TCD1 - Timer/Counter D1
;***************************************************************************
	
.equ TCD1_CTRLA = 2368		// Control  Register A
.equ TCD1_CTRLB = 2369		// Control Register B
.equ TCD1_CTRLC = 2370		// Control register C
.equ TCD1_CTRLD = 2371		// Control Register D
.equ TCD1_CTRLE = 2372		// Control Register E
.equ TCD1_INTCTRLA = 2374		// Interrupt Control Register A
.equ TCD1_INTCTRLB = 2375		// Interrupt Control Register B
.equ TCD1_CTRLFCLR = 2376		// Control Register F Clear
.equ TCD1_CTRLFSET = 2377		// Control Register F Set
.equ TCD1_CTRLGCLR = 2378		// Control Register G Clear
.equ TCD1_CTRLGSET = 2379		// Control Register G Set
.equ TCD1_INTFLAGS = 2380		// Interrupt Flag Register
.equ TCD1_TEMP = 2383		// Temporary Register For 16-bit Access
.equ TCD1_CNT = 2400		// Count
.equ TCD1_PER = 2406		// Period
.equ TCD1_CCA = 2408		// Compare or Capture A
.equ TCD1_CCB = 2410		// Compare or Capture B
.equ TCD1_PERBUF = 2422		// Period Buffer
.equ TCD1_CCABUF = 2424		// Compare Or Capture A Buffer
.equ TCD1_CCBBUF = 2426		// Compare Or Capture B Buffer

;***************************************************************************
;** HIRESD - High-Resolution Extension D
;***************************************************************************
	
.equ HIRESD_CTRLA = 2448		// Control Register

;***************************************************************************
;** USARTD0 - Universal Asynchronous Receiver-Transmitter D0
;***************************************************************************
	
.equ USARTD0_DATA = 2464		// Data Register
.equ USARTD0_STATUS = 2465		// Status Register
.equ USARTD0_CTRLA = 2467		// Control Register A
.equ USARTD0_CTRLB = 2468		// Control Register B
.equ USARTD0_CTRLC = 2469		// Control Register C
.equ USARTD0_BAUDCTRLA = 2470		// Baud Rate Control Register A
.equ USARTD0_BAUDCTRLB = 2471		// Baud Rate Control Register B

;***************************************************************************
;** USARTD1 - Universal Asynchronous Receiver-Transmitter D1
;***************************************************************************
	
.equ USARTD1_DATA = 2480		// Data Register
.equ USARTD1_STATUS = 2481		// Status Register
.equ USARTD1_CTRLA = 2483		// Control Register A
.equ USARTD1_CTRLB = 2484		// Control Register B
.equ USARTD1_CTRLC = 2485		// Control Register C
.equ USARTD1_BAUDCTRLA = 2486		// Baud Rate Control Register A
.equ USARTD1_BAUDCTRLB = 2487		// Baud Rate Control Register B

;***************************************************************************
;** SPID - Serial Peripheral Interface D
;***************************************************************************
	
.equ SPID_CTRL = 2496		// Control Register
.equ SPID_INTCTRL = 2497		// Interrupt Control Register
.equ SPID_STATUS = 2498		// Status Register
.equ SPID_DATA = 2499		// Data Register

;***************************************************************************
;** TCE0 - Timer/Counter E0
;***************************************************************************
	
.equ TCE0_CTRLA = 2560		// Control  Register A
.equ TCE0_CTRLB = 2561		// Control Register B
.equ TCE0_CTRLC = 2562		// Control register C
.equ TCE0_CTRLD = 2563		// Control Register D
.equ TCE0_CTRLE = 2564		// Control Register E
.equ TCE0_INTCTRLA = 2566		// Interrupt Control Register A
.equ TCE0_INTCTRLB = 2567		// Interrupt Control Register B
.equ TCE0_CTRLFCLR = 2568		// Control Register F Clear
.equ TCE0_CTRLFSET = 2569		// Control Register F Set
.equ TCE0_CTRLGCLR = 2570		// Control Register G Clear
.equ TCE0_CTRLGSET = 2571		// Control Register G Set
.equ TCE0_INTFLAGS = 2572		// Interrupt Flag Register
.equ TCE0_TEMP = 2575		// Temporary Register For 16-bit Access
.equ TCE0_CNT = 2592		// Count
.equ TCE0_PER = 2598		// Period
.equ TCE0_CCA = 2600		// Compare or Capture A
.equ TCE0_CCB = 2602		// Compare or Capture B
.equ TCE0_CCC = 2604		// Compare or Capture C
.equ TCE0_CCD = 2606		// Compare or Capture D
.equ TCE0_PERBUF = 2614		// Period Buffer
.equ TCE0_CCABUF = 2616		// Compare Or Capture A Buffer
.equ TCE0_CCBBUF = 2618		// Compare Or Capture B Buffer
.equ TCE0_CCCBUF = 2620		// Compare Or Capture C Buffer
.equ TCE0_CCDBUF = 2622		// Compare Or Capture D Buffer

;***************************************************************************
;** TCE1 - Timer/Counter E1
;***************************************************************************
	
.equ TCE1_CTRLA = 2624		// Control  Register A
.equ TCE1_CTRLB = 2625		// Control Register B
.equ TCE1_CTRLC = 2626		// Control register C
.equ TCE1_CTRLD = 2627		// Control Register D
.equ TCE1_CTRLE = 2628		// Control Register E
.equ TCE1_INTCTRLA = 2630		// Interrupt Control Register A
.equ TCE1_INTCTRLB = 2631		// Interrupt Control Register B
.equ TCE1_CTRLFCLR = 2632		// Control Register F Clear
.equ TCE1_CTRLFSET = 2633		// Control Register F Set
.equ TCE1_CTRLGCLR = 2634		// Control Register G Clear
.equ TCE1_CTRLGSET = 2635		// Control Register G Set
.equ TCE1_INTFLAGS = 2636		// Interrupt Flag Register
.equ TCE1_TEMP = 2639		// Temporary Register For 16-bit Access
.equ TCE1_CNT = 2656		// Count
.equ TCE1_PER = 2662		// Period
.equ TCE1_CCA = 2664		// Compare or Capture A
.equ TCE1_CCB = 2666		// Compare or Capture B
.equ TCE1_PERBUF = 2678		// Period Buffer
.equ TCE1_CCABUF = 2680		// Compare Or Capture A Buffer
.equ TCE1_CCBBUF = 2682		// Compare Or Capture B Buffer

;***************************************************************************
;** AWEXE - Advanced Waveform Extension E
;***************************************************************************
	
.equ AWEXE_CTRL = 2688		// Control Register
.equ AWEXE_FDEMASK = 2690		// Fault Detection Event Mask
.equ AWEXE_FDCTRL = 2691		// Fault Detection Control Register
.equ AWEXE_STATUS = 2692		// Status Register
.equ AWEXE_STATUSSET = 2693		// Status Set Register
.equ AWEXE_DTBOTH = 2694		// Dead Time Both Sides
.equ AWEXE_DTBOTHBUF = 2695		// Dead Time Both Sides Buffer
.equ AWEXE_DTLS = 2696		// Dead Time Low Side
.equ AWEXE_DTHS = 2697		// Dead Time High Side
.equ AWEXE_DTLSBUF = 2698		// Dead Time Low Side Buffer
.equ AWEXE_DTHSBUF = 2699		// Dead Time High Side Buffer
.equ AWEXE_OUTOVEN = 2700		// Output Override Enable

;***************************************************************************
;** HIRESE - High-Resolution Extension E
;***************************************************************************
	
.equ HIRESE_CTRLA = 2704		// Control Register

;***************************************************************************
;** USARTE0 - Universal Asynchronous Receiver-Transmitter E0
;***************************************************************************
	
.equ USARTE0_DATA = 2720		// Data Register
.equ USARTE0_STATUS = 2721		// Status Register
.equ USARTE0_CTRLA = 2723		// Control Register A
.equ USARTE0_CTRLB = 2724		// Control Register B
.equ USARTE0_CTRLC = 2725		// Control Register C
.equ USARTE0_BAUDCTRLA = 2726		// Baud Rate Control Register A
.equ USARTE0_BAUDCTRLB = 2727		// Baud Rate Control Register B

;***************************************************************************
;** USARTE1 - Universal Asynchronous Receiver-Transmitter E1
;***************************************************************************
	
.equ USARTE1_DATA = 2736		// Data Register
.equ USARTE1_STATUS = 2737		// Status Register
.equ USARTE1_CTRLA = 2739		// Control Register A
.equ USARTE1_CTRLB = 2740		// Control Register B
.equ USARTE1_CTRLC = 2741		// Control Register C
.equ USARTE1_BAUDCTRLA = 2742		// Baud Rate Control Register A
.equ USARTE1_BAUDCTRLB = 2743		// Baud Rate Control Register B

;***************************************************************************
;** SPIE - Serial Peripheral Interface E
;***************************************************************************
	
.equ SPIE_CTRL = 2752		// Control Register
.equ SPIE_INTCTRL = 2753		// Interrupt Control Register
.equ SPIE_STATUS = 2754		// Status Register
.equ SPIE_DATA = 2755		// Data Register

;***************************************************************************
;** TCF0 - Timer/Counter F0
;***************************************************************************
	
.equ TCF0_CTRLA = 2816		// Control  Register A
.equ TCF0_CTRLB = 2817		// Control Register B
.equ TCF0_CTRLC = 2818		// Control register C
.equ TCF0_CTRLD = 2819		// Control Register D
.equ TCF0_CTRLE = 2820		// Control Register E
.equ TCF0_INTCTRLA = 2822		// Interrupt Control Register A
.equ TCF0_INTCTRLB = 2823		// Interrupt Control Register B
.equ TCF0_CTRLFCLR = 2824		// Control Register F Clear
.equ TCF0_CTRLFSET = 2825		// Control Register F Set
.equ TCF0_CTRLGCLR = 2826		// Control Register G Clear
.equ TCF0_CTRLGSET = 2827		// Control Register G Set
.equ TCF0_INTFLAGS = 2828		// Interrupt Flag Register
.equ TCF0_TEMP = 2831		// Temporary Register For 16-bit Access
.equ TCF0_CNT = 2848		// Count
.equ TCF0_PER = 2854		// Period
.equ TCF0_CCA = 2856		// Compare or Capture A
.equ TCF0_CCB = 2858		// Compare or Capture B
.equ TCF0_CCC = 2860		// Compare or Capture C
.equ TCF0_CCD = 2862		// Compare or Capture D
.equ TCF0_PERBUF = 2870		// Period Buffer
.equ TCF0_CCABUF = 2872		// Compare Or Capture A Buffer
.equ TCF0_CCBBUF = 2874		// Compare Or Capture B Buffer
.equ TCF0_CCCBUF = 2876		// Compare Or Capture C Buffer
.equ TCF0_CCDBUF = 2878		// Compare Or Capture D Buffer

;***************************************************************************
;** HIRESF - High-Resolution Extension F
;***************************************************************************
	
.equ HIRESF_CTRLA = 2960		// Control Register

;***************************************************************************
;** USARTF0 - Universal Asynchronous Receiver-Transmitter F0
;***************************************************************************
	
.equ USARTF0_DATA = 2976		// Data Register
.equ USARTF0_STATUS = 2977		// Status Register
.equ USARTF0_CTRLA = 2979		// Control Register A
.equ USARTF0_CTRLB = 2980		// Control Register B
.equ USARTF0_CTRLC = 2981		// Control Register C
.equ USARTF0_BAUDCTRLA = 2982		// Baud Rate Control Register A
.equ USARTF0_BAUDCTRLB = 2983		// Baud Rate Control Register B


; ***** ALL MODULE BASE ADRESSES *****************************************

.equ GPIO_base = 0x0000		// General Purpose IO Registers
.equ VPORT0_base = 0x0010		// Virtual Port 0
.equ VPORT1_base = 0x0014		// Virtual Port 1
.equ VPORT2_base = 0x0018		// Virtual Port 2
.equ VPORT3_base = 0x001C		// Virtual Port 3
.equ OCD_base = 0x002E		// On-Chip Debug System
.equ CPU_base = 0x0030		// CPU Registers
.equ CLK_base = 0x0040		// Clock System
.equ SLEEP_base = 0x0048		// Sleep Controller
.equ OSC_base = 0x0050		// Oscillator Control
.equ DFLLRC32M_base = 0x0060		// DFLL for 32MHz RC Oscillator
.equ DFLLRC2M_base = 0x0068		// DFLL for 2MHz RC Oscillator
.equ PR_base = 0x0070		// Power Reduction
.equ RST_base = 0x0078		// Reset Controller
.equ WDT_base = 0x0080		// Watch-Dog Timer
.equ MCU_base = 0x0090		// MCU Control
.equ PMIC_base = 0x00A0		// Programmable Interrupt Controller
.equ PORTCFG_base = 0x00B0		// Port Configuration
.equ AES_base = 0x0C0		// AES Crypto Module
.equ CRC_base = 0x0D0		// CRC Module
.equ DMA_base = 0x0100		// DMA Controller
.equ EVSYS_base = 0x0180		// Event System
.equ NVM_base = 0x01C0		// Non Volatile Memory Controller
.equ ADCA_base = 0x0200		// Analog to Digital Converter A
.equ ADCB_base = 0x0240		// Analog to Digital Converter B
.equ DACB_base = 0x0320		// Digital to Analog Converter B
.equ ACA_base = 0x0380		// Analog Comparator A
.equ ACB_base = 0x0390		// Analog Comparator B
.equ RTC_base = 0x0400		// Real-Time Counter
.equ TWIC_base = 0x480		// Two-Wire Interface C
.equ TWIE_base = 0x4A0		// Two-Wire Interface E
.equ USB_base = 0x4C0		// Universal Serial Bus
.equ PORTA_base = 0x0600		// Port A
.equ PORTB_base = 0x0620		// Port B
.equ PORTC_base = 0x0640		// Port C
.equ PORTD_base = 0x0660		// Port D
.equ PORTE_base = 0x0680		// Port E
.equ PORTF_base = 0x06A0		// Port F
.equ PORTR_base = 0x07E0		// Port R
.equ TCC0_base = 0x800		// Timer/Counter C0
.equ TCC1_base = 0x840		// Timer/Counter C1
.equ AWEXC_base = 0x880		// Advanced Waveform Extension C
.equ HIRESC_base = 0x890		// High-Resolution Extension C
.equ USARTC0_base = 0x8A0		// Universal Asynchronous Receiver-Transmitter C0
.equ USARTC1_base = 0x8B0		// Universal Asynchronous Receiver-Transmitter C1
.equ SPIC_base = 0x8C0		// Serial Peripheral Interface C
.equ IRCOM_base = 0x8F8		// IR Communication Module
.equ TCD0_base = 0x900		// Timer/Counter D0
.equ TCD1_base = 0x940		// Timer/Counter D1
.equ HIRESD_base = 0x990		// High-Resolution Extension D
.equ USARTD0_base = 0x9A0		// Universal Asynchronous Receiver-Transmitter D0
.equ USARTD1_base = 0x9B0		// Universal Asynchronous Receiver-Transmitter D1
.equ SPID_base = 0x9C0		// Serial Peripheral Interface D
.equ TCE0_base = 0xA00		// Timer/Counter E0
.equ TCE1_base = 0xA40		// Timer/Counter E1
.equ AWEXE_base = 0xA80		// Advanced Waveform Extension E
.equ HIRESE_base = 0xA90		// High-Resolution Extension E
.equ USARTE0_base = 0xAA0		// Universal Asynchronous Receiver-Transmitter E0
.equ USARTE1_base = 0xAB0		// Universal Asynchronous Receiver-Transmitter E1
.equ SPIE_base = 0xAC0		// Serial Peripheral Interface E
.equ TCF0_base = 0xB00		// Timer/Counter F0
.equ HIRESF_base = 0xB90		// High-Resolution Extension F
.equ USARTF0_base = 0xBA0		// Universal Asynchronous Receiver-Transmitter F0


; ***** IO REGISTER OFFSETS **********************************************


;***************************************************************************
;** GPIO - General Purpose IO
;***************************************************************************/
.equ GPIO_GPIOR0_offset = 0x00		// General Purpose IO Register 0
.equ GPIO_GPIOR1_offset = 0x01		// General Purpose IO Register 1
.equ GPIO_GPIOR2_offset = 0x02		// General Purpose IO Register 2
.equ GPIO_GPIOR3_offset = 0x03		// General Purpose IO Register 3
.equ GPIO_GPIOR4_offset = 0x04		// General Purpose IO Register 4
.equ GPIO_GPIOR5_offset = 0x05		// General Purpose IO Register 5
.equ GPIO_GPIOR6_offset = 0x06		// General Purpose IO Register 6
.equ GPIO_GPIOR7_offset = 0x07		// General Purpose IO Register 7
.equ GPIO_GPIOR8_offset = 0x08		// General Purpose IO Register 8
.equ GPIO_GPIOR9_offset = 0x09		// General Purpose IO Register 9
.equ GPIO_GPIOR10_offset = 0x0A		// General Purpose IO Register 10
.equ GPIO_GPIOR11_offset = 0x0B		// General Purpose IO Register 11
.equ GPIO_GPIOR12_offset = 0x0C		// General Purpose IO Register 12
.equ GPIO_GPIOR13_offset = 0x0D		// General Purpose IO Register 13
.equ GPIO_GPIOR14_offset = 0x0E		// General Purpose IO Register 14
.equ GPIO_GPIOR15_offset = 0x0F		// General Purpose IO Register 15

;***************************************************************************
;** VPORT - Virtual Ports
;***************************************************************************/
.equ VPORT_DIR_offset = 0x00		// I/O Port Data Direction
.equ VPORT_OUT_offset = 0x01		// I/O Port Output
.equ VPORT_IN_offset = 0x02		// I/O Port Input
.equ VPORT_INTFLAGS_offset = 0x03		// Interrupt Flag Register

;***************************************************************************
;** XOCD - On-Chip Debug System
;***************************************************************************/
.equ OCD_OCDR0_offset = 0x00		// OCD Register 0
.equ OCD_OCDR1_offset = 0x01		// OCD Register 1

;***************************************************************************
;** CPU - CPU
;***************************************************************************/
.equ CPU_CCP_offset = 0x04		// Configuration Change Protection
.equ CPU_RAMPD_offset = 0x08		// Ramp D
.equ CPU_RAMPX_offset = 0x09		// Ramp X
.equ CPU_RAMPY_offset = 0x0A		// Ramp Y
.equ CPU_RAMPZ_offset = 0x0B		// Ramp Z
.equ CPU_EIND_offset = 0x0C		// Extended Indirect Jump
.equ CPU_SPL_offset = 0x0D		// Stack Pointer Low
.equ CPU_SPH_offset = 0x0E		// Stack Pointer High
.equ CPU_SREG_offset = 0x0F		// Status Register

;***************************************************************************
;** CLK - Clock System
;***************************************************************************/
.equ CLK_CTRL_offset = 0x00		// Control Register
.equ CLK_PSCTRL_offset = 0x01		// Prescaler Control Register
.equ CLK_LOCK_offset = 0x02		// Lock register
.equ CLK_RTCCTRL_offset = 0x03		// RTC Control Register
.equ CLK_USBCTRL_offset = 0x04		// USB Control Register
.equ PR_PRGEN_offset = 0x00		// General Power Reduction
.equ PR_PRPA_offset = 0x01		// Power Reduction Port A
.equ PR_PRPB_offset = 0x02		// Power Reduction Port B
.equ PR_PRPC_offset = 0x03		// Power Reduction Port C
.equ PR_PRPD_offset = 0x04		// Power Reduction Port D
.equ PR_PRPE_offset = 0x05		// Power Reduction Port E
.equ PR_PRPF_offset = 0x06		// Power Reduction Port F

;***************************************************************************
;** SLEEP - Sleep Controller
;***************************************************************************/
.equ SLEEP_CTRL_offset = 0x00		// Control Register

;***************************************************************************
;** OSC - Oscillator
;***************************************************************************/
.equ OSC_CTRL_offset = 0x00		// Control Register
.equ OSC_STATUS_offset = 0x01		// Status Register
.equ OSC_XOSCCTRL_offset = 0x02		// External Oscillator Control Register
.equ OSC_XOSCFAIL_offset = 0x03		// Oscillator Failure Detection Register
.equ OSC_RC32KCAL_offset = 0x04		// 32.768 kHz Internal Oscillator Calibration Register
.equ OSC_PLLCTRL_offset = 0x05		// PLL Control Register
.equ OSC_DFLLCTRL_offset = 0x06		// DFLL Control Register

;***************************************************************************
;** DFLL - DFLL
;***************************************************************************/
.equ DFLL_CTRL_offset = 0x00		// Control Register
.equ DFLL_CALA_offset = 0x02		// Calibration Register A
.equ DFLL_CALB_offset = 0x03		// Calibration Register B
.equ DFLL_COMP1_offset = 0x05		// Oscillator Compare Register 1
.equ DFLL_COMP2_offset = 0x06		// Oscillator Compare Register 2

;***************************************************************************
;** RST - Reset
;***************************************************************************/
.equ RST_STATUS_offset = 0x00		// Status Register
.equ RST_CTRL_offset = 0x01		// Control Register

;***************************************************************************
;** WDT - Watch-Dog Timer
;***************************************************************************/
.equ WDT_CTRL_offset = 0x00		// Control
.equ WDT_WINCTRL_offset = 0x01		// Windowed Mode Control
.equ WDT_STATUS_offset = 0x02		// Status

;***************************************************************************
;** MCU - MCU Control
;***************************************************************************/
.equ MCU_DEVID0_offset = 0x00		// Device ID byte 0
.equ MCU_DEVID1_offset = 0x01		// Device ID byte 1
.equ MCU_DEVID2_offset = 0x02		// Device ID byte 2
.equ MCU_REVID_offset = 0x03		// Revision ID
.equ MCU_JTAGUID_offset = 0x04		// JTAG User ID
.equ MCU_MCUCR_offset = 0x06		// MCU Control
.equ MCU_ANAINIT_offset = 0x07		// Analog Startup Delay
.equ MCU_EVSYSLOCK_offset = 0x08		// Event System Lock
.equ MCU_AWEXLOCK_offset = 0x09		// AWEX Lock

;***************************************************************************
;** PMIC - Programmable Multi-level Interrupt Controller
;***************************************************************************/
.equ PMIC_STATUS_offset = 0x00		// Status Register
.equ PMIC_INTPRI_offset = 0x01		// Interrupt Priority
.equ PMIC_CTRL_offset = 0x02		// Control Register

;***************************************************************************
;** PORTCFG - Port Configuration
;***************************************************************************/
.equ PORTCFG_MPCMASK_offset = 0x00		// Multi-pin Configuration Mask
.equ PORTCFG_VPCTRLA_offset = 0x02		// Virtual Port Control Register A
.equ PORTCFG_VPCTRLB_offset = 0x03		// Virtual Port Control Register B
.equ PORTCFG_CLKEVOUT_offset = 0x04		// Clock and Event Out Register
.equ PORTCFG_EVOUTSEL_offset = 0x06		// Event Output Select

;***************************************************************************
;** AES - AES Module
;***************************************************************************/
.equ AES_CTRL_offset = 0x00		// AES Control Register
.equ AES_STATUS_offset = 0x01		// AES Status Register
.equ AES_STATE_offset = 0x02		// AES State Register
.equ AES_KEY_offset = 0x03		// AES Key Register
.equ AES_INTCTRL_offset = 0x04		// AES Interrupt Control Register

;***************************************************************************
;** CRC - Cyclic Redundancy Checker
;***************************************************************************/
.equ CRC_CTRL_offset = 0x00		// Control Register
.equ CRC_STATUS_offset = 0x01		// Status Register
.equ CRC_DATAIN_offset = 0x03		// Data Input
.equ CRC_CHECKSUM0_offset = 0x04		// Checksum byte 0
.equ CRC_CHECKSUM1_offset = 0x05		// Checksum byte 1
.equ CRC_CHECKSUM2_offset = 0x06		// Checksum byte 2
.equ CRC_CHECKSUM3_offset = 0x07		// Checksum byte 3

;***************************************************************************
;** DMA - DMA Controller
;***************************************************************************/
.equ DMA_CH_CTRLA_offset = 0x00		// Channel Control
.equ DMA_CH_CTRLB_offset = 0x01		// Channel Control
.equ DMA_CH_ADDRCTRL_offset = 0x02		// Address Control
.equ DMA_CH_TRIGSRC_offset = 0x03		// Channel Trigger Source
.equ DMA_CH_TRFCNT_offset = 0x04		// Channel Block Transfer Count
.equ DMA_CH_REPCNT_offset = 0x06		// Channel Repeat Count
.equ DMA_CH_SRCADDR0_offset = 0x08		// Channel Source Address 0
.equ DMA_CH_SRCADDR1_offset = 0x09		// Channel Source Address 1
.equ DMA_CH_SRCADDR2_offset = 0x0A		// Channel Source Address 2
.equ DMA_CH_DESTADDR0_offset = 0x0C		// Channel Destination Address 0
.equ DMA_CH_DESTADDR1_offset = 0x0D		// Channel Destination Address 1
.equ DMA_CH_DESTADDR2_offset = 0x0E		// Channel Destination Address 2
.equ DMA_CTRL_offset = 0x00		// Control
.equ DMA_INTFLAGS_offset = 0x03		// Transfer Interrupt Status
.equ DMA_STATUS_offset = 0x04		// Status
.equ DMA_TEMP_offset = 0x06		// Temporary Register For 16/24-bit Access
.equ DMA_CH0_offset = 0x10		// DMA Channel 0
.equ DMA_CH1_offset = 0x20		// DMA Channel 1
.equ DMA_CH2_offset = 0x30		// DMA Channel 2
.equ DMA_CH3_offset = 0x40		// DMA Channel 3

;***************************************************************************
;** EVSYS - Event System
;***************************************************************************/
.equ EVSYS_CH0MUX_offset = 0x00		// Event Channel 0 Multiplexer
.equ EVSYS_CH1MUX_offset = 0x01		// Event Channel 1 Multiplexer
.equ EVSYS_CH2MUX_offset = 0x02		// Event Channel 2 Multiplexer
.equ EVSYS_CH3MUX_offset = 0x03		// Event Channel 3 Multiplexer
.equ EVSYS_CH4MUX_offset = 0x04		// Event Channel 4 Multiplexer
.equ EVSYS_CH5MUX_offset = 0x05		// Event Channel 5 Multiplexer
.equ EVSYS_CH6MUX_offset = 0x06		// Event Channel 6 Multiplexer
.equ EVSYS_CH7MUX_offset = 0x07		// Event Channel 7 Multiplexer
.equ EVSYS_CH0CTRL_offset = 0x08		// Channel 0 Control Register
.equ EVSYS_CH1CTRL_offset = 0x09		// Channel 1 Control Register
.equ EVSYS_CH2CTRL_offset = 0x0A		// Channel 2 Control Register
.equ EVSYS_CH3CTRL_offset = 0x0B		// Channel 3 Control Register
.equ EVSYS_CH4CTRL_offset = 0x0C		// Channel 4 Control Register
.equ EVSYS_CH5CTRL_offset = 0x0D		// Channel 5 Control Register
.equ EVSYS_CH6CTRL_offset = 0x0E		// Channel 6 Control Register
.equ EVSYS_CH7CTRL_offset = 0x0F		// Channel 7 Control Register
.equ EVSYS_STROBE_offset = 0x10		// Event Strobe
.equ EVSYS_DATA_offset = 0x11		// Event Data

;***************************************************************************
;** NVM - Non Volatile Memory Controller
;***************************************************************************/
.equ NVM_ADDR0_offset = 0x00		// Address Register 0
.equ NVM_ADDR1_offset = 0x01		// Address Register 1
.equ NVM_ADDR2_offset = 0x02		// Address Register 2
.equ NVM_DATA0_offset = 0x04		// Data Register 0
.equ NVM_DATA1_offset = 0x05		// Data Register 1
.equ NVM_DATA2_offset = 0x06		// Data Register 2
.equ NVM_CMD_offset = 0x0A		// Command
.equ NVM_CTRLA_offset = 0x0B		// Control Register A
.equ NVM_CTRLB_offset = 0x0C		// Control Register B
.equ NVM_INTCTRL_offset = 0x0D		// Interrupt Control
.equ NVM_STATUS_offset = 0x0F		// Status
.equ NVM_LOCKBITS_offset = 0x10		// Lock Bits

;***************************************************************************
;** ADC - Analog/Digital Converter
;***************************************************************************/
.equ ADC_CH_CTRL_offset = 0x00		// Control Register
.equ ADC_CH_MUXCTRL_offset = 0x01		// MUX Control
.equ ADC_CH_INTCTRL_offset = 0x02		// Channel Interrupt Control Register
.equ ADC_CH_INTFLAGS_offset = 0x03		// Interrupt Flags
.equ ADC_CH_RES_offset = 0x04		// Channel Result
.equ ADC_CH_SCAN_offset = 0x06		// Input Channel Scan
.equ ADC_CTRLA_offset = 0x00		// Control Register A
.equ ADC_CTRLB_offset = 0x01		// Control Register B
.equ ADC_REFCTRL_offset = 0x02		// Reference Control
.equ ADC_EVCTRL_offset = 0x03		// Event Control
.equ ADC_PRESCALER_offset = 0x04		// Clock Prescaler
.equ ADC_INTFLAGS_offset = 0x06		// Interrupt Flags
.equ ADC_TEMP_offset = 0x07		// Temporary Register
.equ ADC_CAL_offset = 0x0C		// Calibration Value
.equ ADC_CH0RES_offset = 0x10		// Channel 0 Result
.equ ADC_CH1RES_offset = 0x12		// Channel 1 Result
.equ ADC_CH2RES_offset = 0x14		// Channel 2 Result
.equ ADC_CH3RES_offset = 0x16		// Channel 3 Result
.equ ADC_CMP_offset = 0x18		// Compare Value
.equ ADC_CH0_offset = 0x20		// ADC Channel 0
.equ ADC_CH1_offset = 0x28		// ADC Channel 1
.equ ADC_CH2_offset = 0x30		// ADC Channel 2
.equ ADC_CH3_offset = 0x38		// ADC Channel 3

;***************************************************************************
;** DAC - Digital/Analog Converter
;***************************************************************************/
.equ DAC_CTRLA_offset = 0x00		// Control Register A
.equ DAC_CTRLB_offset = 0x01		// Control Register B
.equ DAC_CTRLC_offset = 0x02		// Control Register C
.equ DAC_EVCTRL_offset = 0x03		// Event Input Control
.equ DAC_TIMCTRL_offset = 0x04		// Timing Control
.equ DAC_STATUS_offset = 0x05		// Status
.equ DAC_CH0GAINCAL_offset = 0x08		// Gain Calibration
.equ DAC_CH0OFFSETCAL_offset = 0x09		// Offset Calibration
.equ DAC_CH1GAINCAL_offset = 0x0A		// Gain Calibration
.equ DAC_CH1OFFSETCAL_offset = 0x0B		// Offset Calibration
.equ DAC_CH0DATA_offset = 0x18		// Channel 0 Data
.equ DAC_CH1DATA_offset = 0x1A		// Channel 1 Data

;***************************************************************************
;** AC - Analog Comparator
;***************************************************************************/
.equ AC_AC0CTRL_offset = 0x00		// Analog Comparator 0 Control
.equ AC_AC1CTRL_offset = 0x01		// Analog Comparator 1 Control
.equ AC_AC0MUXCTRL_offset = 0x02		// Analog Comparator 0 MUX Control
.equ AC_AC1MUXCTRL_offset = 0x03		// Analog Comparator 1 MUX Control
.equ AC_CTRLA_offset = 0x04		// Control Register A
.equ AC_CTRLB_offset = 0x05		// Control Register B
.equ AC_WINCTRL_offset = 0x06		// Window Mode Control
.equ AC_STATUS_offset = 0x07		// Status

;***************************************************************************
;** RTC - Real-Time Clounter
;***************************************************************************/
.equ RTC_CTRL_offset = 0x00		// Control Register
.equ RTC_STATUS_offset = 0x01		// Status Register
.equ RTC_INTCTRL_offset = 0x02		// Interrupt Control Register
.equ RTC_INTFLAGS_offset = 0x03		// Interrupt Flags
.equ RTC_TEMP_offset = 0x04		// Temporary register
.equ RTC_CNT_offset = 0x08		// Count Register
.equ RTC_PER_offset = 0x0A		// Period Register
.equ RTC_COMP_offset = 0x0C		// Compare Register

;***************************************************************************
;** TWI - Two-Wire Interface
;***************************************************************************/
.equ TWI_MASTER_CTRLA_offset = 0x00		// Control Register A
.equ TWI_MASTER_CTRLB_offset = 0x01		// Control Register B
.equ TWI_MASTER_CTRLC_offset = 0x02		// Control Register C
.equ TWI_MASTER_STATUS_offset = 0x03		// Status Register
.equ TWI_MASTER_BAUD_offset = 0x04		// Baurd Rate Control Register
.equ TWI_MASTER_ADDR_offset = 0x05		// Address Register
.equ TWI_MASTER_DATA_offset = 0x06		// Data Register
.equ TWI_SLAVE_CTRLA_offset = 0x00		// Control Register A
.equ TWI_SLAVE_CTRLB_offset = 0x01		// Control Register B
.equ TWI_SLAVE_STATUS_offset = 0x02		// Status Register
.equ TWI_SLAVE_ADDR_offset = 0x03		// Address Register
.equ TWI_SLAVE_DATA_offset = 0x04		// Data Register
.equ TWI_SLAVE_ADDRMASK_offset = 0x05		// Address Mask Register
.equ TWI_CTRL_offset = 0x00		// TWI Common Control Register
.equ TWI_MASTER_offset = 0x0001		// TWI master module
.equ TWI_SLAVE_offset = 0x0008		// TWI slave module

;***************************************************************************
;** USB - USB
;***************************************************************************/
.equ USB_EP_STATUS_offset = 0x00		// Endpoint Status
.equ USB_EP_CTRL_offset = 0x01		// Endpoint Control
.equ USB_EP_CNT_offset = 0x02		// USB Endpoint Counter
.equ USB_EP_DATAPTR_offset = 0x04		// Data Pointer
.equ USB_EP_AUXDATA_offset = 0x06		// Auxiliary Data
.equ USB_CTRLA_offset = 0x00		// Control Register A
.equ USB_CTRLB_offset = 0x01		// Control Register B
.equ USB_STATUS_offset = 0x02		// Status Register
.equ USB_ADDR_offset = 0x03		// Address Register
.equ USB_FIFOWP_offset = 0x04		// FIFO Write Pointer Register
.equ USB_FIFORP_offset = 0x05		// FIFO Read Pointer Register
.equ USB_EPPTR_offset = 0x06		// Endpoint Configuration Table Pointer
.equ USB_INTCTRLA_offset = 0x08		// Interrupt Control Register A
.equ USB_INTCTRLB_offset = 0x09		// Interrupt Control Register B
.equ USB_INTFLAGSACLR_offset = 0x0A		// Clear Interrupt Flag Register A
.equ USB_INTFLAGSASET_offset = 0x0B		// Set Interrupt Flag Register A
.equ USB_INTFLAGSBCLR_offset = 0x0C		// Clear Interrupt Flag Register B
.equ USB_INTFLAGSBSET_offset = 0x0D		// Set Interrupt Flag Register B
.equ USB_CAL0_offset = 0x3A		// Calibration Byte 0
.equ USB_CAL1_offset = 0x3B		// Calibration Byte 1
.equ USB_EP_TABLE_EP0OUT_offset = 0x00		// Endpoint 0
.equ USB_EP_TABLE_EP0IN_offset = 0x08		// Endpoint 0
.equ USB_EP_TABLE_EP1OUT_offset = 0x10		// Endpoint 1
.equ USB_EP_TABLE_EP1IN_offset = 0x18		// Endpoint 1
.equ USB_EP_TABLE_EP2OUT_offset = 0x20		// Endpoint 2
.equ USB_EP_TABLE_EP2IN_offset = 0x28		// Endpoint 2
.equ USB_EP_TABLE_EP3OUT_offset = 0x30		// Endpoint 3
.equ USB_EP_TABLE_EP3IN_offset = 0x38		// Endpoint 3
.equ USB_EP_TABLE_EP4OUT_offset = 0x40		// Endpoint 4
.equ USB_EP_TABLE_EP4IN_offset = 0x48		// Endpoint 4
.equ USB_EP_TABLE_EP5OUT_offset = 0x50		// Endpoint 5
.equ USB_EP_TABLE_EP5IN_offset = 0x58		// Endpoint 5
.equ USB_EP_TABLE_EP6OUT_offset = 0x60		// Endpoint 6
.equ USB_EP_TABLE_EP6IN_offset = 0x68		// Endpoint 6
.equ USB_EP_TABLE_EP7OUT_offset = 0x70		// Endpoint 7
.equ USB_EP_TABLE_EP7IN_offset = 0x78		// Endpoint 7
.equ USB_EP_TABLE_EP8OUT_offset = 0x80		// Endpoint 8
.equ USB_EP_TABLE_EP8IN_offset = 0x88		// Endpoint 8
.equ USB_EP_TABLE_EP9OUT_offset = 0x90		// Endpoint 9
.equ USB_EP_TABLE_EP9IN_offset = 0x98		// Endpoint 9
.equ USB_EP_TABLE_EP10OUT_offset = 0xA0		// Endpoint 10
.equ USB_EP_TABLE_EP10IN_offset = 0xA8		// Endpoint 10
.equ USB_EP_TABLE_EP11OUT_offset = 0xB0		// Endpoint 11
.equ USB_EP_TABLE_EP11IN_offset = 0xB8		// Endpoint 11
.equ USB_EP_TABLE_EP12OUT_offset = 0xC0		// Endpoint 12
.equ USB_EP_TABLE_EP12IN_offset = 0xC8		// Endpoint 12
.equ USB_EP_TABLE_EP13OUT_offset = 0xD0		// Endpoint 13
.equ USB_EP_TABLE_EP13IN_offset = 0xD8		// Endpoint 13
.equ USB_EP_TABLE_EP14OUT_offset = 0xE0		// Endpoint 14
.equ USB_EP_TABLE_EP14IN_offset = 0xE8		// Endpoint 14
.equ USB_EP_TABLE_EP15OUT_offset = 0xF0		// Endpoint 15
.equ USB_EP_TABLE_EP15IN_offset = 0xF8		// Endpoint 15
.equ USB_EP_TABLE_FRAMENUML_offset = 0x110		// Frame Number Low Byte
.equ USB_EP_TABLE_FRAMENUMH_offset = 0x111		// Frame Number High Byte

;***************************************************************************
;** PORT - I/O Port Configuration
;***************************************************************************/
.equ PORT_DIR_offset = 0x00		// I/O Port Data Direction
.equ PORT_DIRSET_offset = 0x01		// I/O Port Data Direction Set
.equ PORT_DIRCLR_offset = 0x02		// I/O Port Data Direction Clear
.equ PORT_DIRTGL_offset = 0x03		// I/O Port Data Direction Toggle
.equ PORT_OUT_offset = 0x04		// I/O Port Output
.equ PORT_OUTSET_offset = 0x05		// I/O Port Output Set
.equ PORT_OUTCLR_offset = 0x06		// I/O Port Output Clear
.equ PORT_OUTTGL_offset = 0x07		// I/O Port Output Toggle
.equ PORT_IN_offset = 0x08		// I/O port Input
.equ PORT_INTCTRL_offset = 0x09		// Interrupt Control Register
.equ PORT_INT0MASK_offset = 0x0A		// Port Interrupt 0 Mask
.equ PORT_INT1MASK_offset = 0x0B		// Port Interrupt 1 Mask
.equ PORT_INTFLAGS_offset = 0x0C		// Interrupt Flag Register
.equ PORT_REMAP_offset = 0x0E		// I/O Port Pin Remap Register
.equ PORT_PIN0CTRL_offset = 0x10		// Pin 0 Control Register
.equ PORT_PIN1CTRL_offset = 0x11		// Pin 1 Control Register
.equ PORT_PIN2CTRL_offset = 0x12		// Pin 2 Control Register
.equ PORT_PIN3CTRL_offset = 0x13		// Pin 3 Control Register
.equ PORT_PIN4CTRL_offset = 0x14		// Pin 4 Control Register
.equ PORT_PIN5CTRL_offset = 0x15		// Pin 5 Control Register
.equ PORT_PIN6CTRL_offset = 0x16		// Pin 6 Control Register
.equ PORT_PIN7CTRL_offset = 0x17		// Pin 7 Control Register

;***************************************************************************
;** TC - 16-bit Timer/Counter With PWM
;***************************************************************************/
.equ TC0_CTRLA_offset = 0x00		// Control  Register A
.equ TC0_CTRLB_offset = 0x01		// Control Register B
.equ TC0_CTRLC_offset = 0x02		// Control register C
.equ TC0_CTRLD_offset = 0x03		// Control Register D
.equ TC0_CTRLE_offset = 0x04		// Control Register E
.equ TC0_INTCTRLA_offset = 0x06		// Interrupt Control Register A
.equ TC0_INTCTRLB_offset = 0x07		// Interrupt Control Register B
.equ TC0_CTRLFCLR_offset = 0x08		// Control Register F Clear
.equ TC0_CTRLFSET_offset = 0x09		// Control Register F Set
.equ TC0_CTRLGCLR_offset = 0x0A		// Control Register G Clear
.equ TC0_CTRLGSET_offset = 0x0B		// Control Register G Set
.equ TC0_INTFLAGS_offset = 0x0C		// Interrupt Flag Register
.equ TC0_TEMP_offset = 0x0F		// Temporary Register For 16-bit Access
.equ TC0_CNT_offset = 0x20		// Count
.equ TC0_PER_offset = 0x26		// Period
.equ TC0_CCA_offset = 0x28		// Compare or Capture A
.equ TC0_CCB_offset = 0x2A		// Compare or Capture B
.equ TC0_CCC_offset = 0x2C		// Compare or Capture C
.equ TC0_CCD_offset = 0x2E		// Compare or Capture D
.equ TC0_PERBUF_offset = 0x36		// Period Buffer
.equ TC0_CCABUF_offset = 0x38		// Compare Or Capture A Buffer
.equ TC0_CCBBUF_offset = 0x3A		// Compare Or Capture B Buffer
.equ TC0_CCCBUF_offset = 0x3C		// Compare Or Capture C Buffer
.equ TC0_CCDBUF_offset = 0x3E		// Compare Or Capture D Buffer
.equ TC1_CTRLA_offset = 0x00		// Control  Register A
.equ TC1_CTRLB_offset = 0x01		// Control Register B
.equ TC1_CTRLC_offset = 0x02		// Control register C
.equ TC1_CTRLD_offset = 0x03		// Control Register D
.equ TC1_CTRLE_offset = 0x04		// Control Register E
.equ TC1_INTCTRLA_offset = 0x06		// Interrupt Control Register A
.equ TC1_INTCTRLB_offset = 0x07		// Interrupt Control Register B
.equ TC1_CTRLFCLR_offset = 0x08		// Control Register F Clear
.equ TC1_CTRLFSET_offset = 0x09		// Control Register F Set
.equ TC1_CTRLGCLR_offset = 0x0A		// Control Register G Clear
.equ TC1_CTRLGSET_offset = 0x0B		// Control Register G Set
.equ TC1_INTFLAGS_offset = 0x0C		// Interrupt Flag Register
.equ TC1_TEMP_offset = 0x0F		// Temporary Register For 16-bit Access
.equ TC1_CNT_offset = 0x20		// Count
.equ TC1_PER_offset = 0x26		// Period
.equ TC1_CCA_offset = 0x28		// Compare or Capture A
.equ TC1_CCB_offset = 0x2A		// Compare or Capture B
.equ TC1_PERBUF_offset = 0x36		// Period Buffer
.equ TC1_CCABUF_offset = 0x38		// Compare Or Capture A Buffer
.equ TC1_CCBBUF_offset = 0x3A		// Compare Or Capture B Buffer

;***************************************************************************
;** AWEX - Timer/Counter Advanced Waveform Extension
;***************************************************************************/
.equ AWEX_CTRL_offset = 0x00		// Control Register
.equ AWEX_FDEMASK_offset = 0x02		// Fault Detection Event Mask
.equ AWEX_FDCTRL_offset = 0x03		// Fault Detection Control Register
.equ AWEX_STATUS_offset = 0x04		// Status Register
.equ AWEX_STATUSSET_offset = 0x05		// Status Set Register
.equ AWEX_DTBOTH_offset = 0x06		// Dead Time Both Sides
.equ AWEX_DTBOTHBUF_offset = 0x07		// Dead Time Both Sides Buffer
.equ AWEX_DTLS_offset = 0x08		// Dead Time Low Side
.equ AWEX_DTHS_offset = 0x09		// Dead Time High Side
.equ AWEX_DTLSBUF_offset = 0x0A		// Dead Time Low Side Buffer
.equ AWEX_DTHSBUF_offset = 0x0B		// Dead Time High Side Buffer
.equ AWEX_OUTOVEN_offset = 0x0C		// Output Override Enable

;***************************************************************************
;** HIRES - Timer/Counter High-Resolution Extension
;***************************************************************************/
.equ HIRES_CTRLA_offset = 0x00		// Control Register

;***************************************************************************
;** USART - Universal Asynchronous Receiver-Transmitter
;***************************************************************************/
.equ USART_DATA_offset = 0x00		// Data Register
.equ USART_STATUS_offset = 0x01		// Status Register
.equ USART_CTRLA_offset = 0x03		// Control Register A
.equ USART_CTRLB_offset = 0x04		// Control Register B
.equ USART_CTRLC_offset = 0x05		// Control Register C
.equ USART_BAUDCTRLA_offset = 0x06		// Baud Rate Control Register A
.equ USART_BAUDCTRLB_offset = 0x07		// Baud Rate Control Register B

;***************************************************************************
;** SPI - Serial Peripheral Interface
;***************************************************************************/
.equ SPI_CTRL_offset = 0x00		// Control Register
.equ SPI_INTCTRL_offset = 0x01		// Interrupt Control Register
.equ SPI_STATUS_offset = 0x02		// Status Register
.equ SPI_DATA_offset = 0x03		// Data Register

;***************************************************************************
;** IRCOM - IR Communication Module
;***************************************************************************/
.equ IRCOM_CTRL_offset = 0x00		// Control Register
.equ IRCOM_TXPLCTRL_offset = 0x01		// IrDA Transmitter Pulse Length Control Register
.equ IRCOM_RXPLCTRL_offset = 0x02		// IrDA Receiver Pulse Length Control Register

;***************************************************************************
;** XMEGAA_FUSES - Fuses and Lockbits
;***************************************************************************/
.equ NVM_LOCKBITS_LOCKBITS_offset = 0x00		// Lock Bits
.equ NVM_FUSES_FUSEBYTE0_offset = 0x00		// JTAG User ID
.equ NVM_FUSES_FUSEBYTE1_offset = 0x01		// Watchdog Configuration
.equ NVM_FUSES_FUSEBYTE2_offset = 0x02		// Reset Configuration
.equ NVM_FUSES_FUSEBYTE4_offset = 0x04		// Start-up Configuration
.equ NVM_FUSES_FUSEBYTE5_offset = 0x05		// EESAVE and BOD Level

;***************************************************************************
;** XMEGAA_SIGROW - Signature Row
;***************************************************************************/
.equ NVM_PROD_SIGNATURES_RCOSC2M_offset = 0x00		// RCOSC 2 MHz Calibration Value B
.equ NVM_PROD_SIGNATURES_RCOSC2MA_offset = 0x01		// RCOSC 2 MHz Calibration Value A
.equ NVM_PROD_SIGNATURES_RCOSC32K_offset = 0x02		// RCOSC 32.768 kHz Calibration Value
.equ NVM_PROD_SIGNATURES_RCOSC32M_offset = 0x03		// RCOSC 32 MHz Calibration Value B
.equ NVM_PROD_SIGNATURES_RCOSC32MA_offset = 0x04		// RCOSC 32 MHz Calibration Value A
.equ NVM_PROD_SIGNATURES_LOTNUM0_offset = 0x08		// Lot Number Byte 0, ASCII
.equ NVM_PROD_SIGNATURES_LOTNUM1_offset = 0x09		// Lot Number Byte 1, ASCII
.equ NVM_PROD_SIGNATURES_LOTNUM2_offset = 0x0A		// Lot Number Byte 2, ASCII
.equ NVM_PROD_SIGNATURES_LOTNUM3_offset = 0x0B		// Lot Number Byte 3, ASCII
.equ NVM_PROD_SIGNATURES_LOTNUM4_offset = 0x0C		// Lot Number Byte 4, ASCII
.equ NVM_PROD_SIGNATURES_LOTNUM5_offset = 0x0D		// Lot Number Byte 5, ASCII
.equ NVM_PROD_SIGNATURES_WAFNUM_offset = 0x10		// Wafer Number
.equ NVM_PROD_SIGNATURES_COORDX0_offset = 0x12		// Wafer Coordinate X Byte 0
.equ NVM_PROD_SIGNATURES_COORDX1_offset = 0x13		// Wafer Coordinate X Byte 1
.equ NVM_PROD_SIGNATURES_COORDY0_offset = 0x14		// Wafer Coordinate Y Byte 0
.equ NVM_PROD_SIGNATURES_COORDY1_offset = 0x15		// Wafer Coordinate Y Byte 1
.equ NVM_PROD_SIGNATURES_USBCAL0_offset = 0x1A		// USB Calibration Byte 0
.equ NVM_PROD_SIGNATURES_USBCAL1_offset = 0x1B		// USB Calibration Byte 1
.equ NVM_PROD_SIGNATURES_USBRCOSC_offset = 0x1C		// USB RCOSC Calibration Value B
.equ NVM_PROD_SIGNATURES_USBRCOSCA_offset = 0x1D		// USB RCOSC Calibration Value A
.equ NVM_PROD_SIGNATURES_ADCACAL0_offset = 0x20		// ADCA Calibration Byte 0
.equ NVM_PROD_SIGNATURES_ADCACAL1_offset = 0x21		// ADCA Calibration Byte 1
.equ NVM_PROD_SIGNATURES_ADCBCAL0_offset = 0x24		// ADCB Calibration Byte 0
.equ NVM_PROD_SIGNATURES_ADCBCAL1_offset = 0x25		// ADCB Calibration Byte 1
.equ NVM_PROD_SIGNATURES_TEMPSENSE0_offset = 0x2E		// Temperature Sensor Calibration Byte 0
.equ NVM_PROD_SIGNATURES_TEMPSENSE1_offset = 0x2F		// Temperature Sensor Calibration Byte 1
.equ NVM_PROD_SIGNATURES_DACA0OFFCAL_offset = 0x30		// DACA0 Calibration Byte 0
.equ NVM_PROD_SIGNATURES_DACA0CAINCAL_offset = 0x31		// DACA0 Calibration Byte 1
.equ NVM_PROD_SIGNATURES_DACB0OFFCAL_offset = 0x32		// DACB0 Calibration Byte 0
.equ NVM_PROD_SIGNATURES_DACB0GAINCAL_offset = 0x33		// DACB0 Calibration Byte 1
.equ NVM_PROD_SIGNATURES_DACA1OFFCAL_offset = 0x34		// DACA1 Calibration Byte 0
.equ NVM_PROD_SIGNATURES_DACA1CAINCAL_offset = 0x35		// DACA1 Calibration Byte 1
.equ NVM_PROD_SIGNATURES_DACB1OFFCAL_offset = 0x36		// DACB1 Calibration Byte 0
.equ NVM_PROD_SIGNATURES_DACB1GAINCAL_offset = 0x37		// DACB1 Calibration Byte 1


; ***** LOCKBIT REGISTER LOCATIONS ***************************************


;***************************************************************************
;** LOCKBIT - Lockbits
;***************************************************************************
	
.equ LOCKBIT_LOCKBITS = 0		// Lock Bits


; ***** FUSE REGISTER LOCATIONS ******************************************


;***************************************************************************
;** FUSE - Fuses
;***************************************************************************
	
.equ FUSE_FUSEBYTE0 = 0		// JTAG User ID
.equ FUSE_FUSEBYTE1 = 1		// Watchdog Configuration
.equ FUSE_FUSEBYTE2 = 2		// Reset Configuration
.equ FUSE_FUSEBYTE4 = 4		// Start-up Configuration
.equ FUSE_FUSEBYTE5 = 5		// EESAVE and BOD Level


; ***** BIT AND VALUE DEFINITIONS ****************************************


;***************************************************************************
;** GPIO - General Purpose IO
;***************************************************************************/
 

;***************************************************************************
;** VPORT - Virtual Ports
;***************************************************************************/

; VPORT_INTFLAGS masks
.equ VPORT_INT1IF_bm = 0x02 ; Port Interrupt 1 Flag bit mask
.equ VPORT_INT1IF_bp = 1 ; Port Interrupt 1 Flag bit position
.equ VPORT_INT0IF_bm = 0x01 ; Port Interrupt 0 Flag bit mask
.equ VPORT_INT0IF_bp = 0 ; Port Interrupt 0 Flag bit position
 

;***************************************************************************
;** XOCD - On-Chip Debug System
;***************************************************************************/

; OCD_OCDR1 masks
.equ OCD_OCDRD_bm = 0x01 ; OCDR Dirty bit mask
.equ OCD_OCDRD_bp = 0 ; OCDR Dirty bit position
 

;***************************************************************************
;** CPU - CPU
;***************************************************************************/

; CPU_CCP masks
.equ CPU_CCP_gm = 0xFF ; CCP signature group mask
.equ CPU_CCP_gp = 0 ; CCP signature group position
.equ CPU_CCP0_bm = (1<<0) ; CCP signature bit 0 mask
.equ CPU_CCP0_bp = 0 ; CCP signature bit 0 position
.equ CPU_CCP1_bm = (1<<1) ; CCP signature bit 1 mask
.equ CPU_CCP1_bp = 1 ; CCP signature bit 1 position
.equ CPU_CCP2_bm = (1<<2) ; CCP signature bit 2 mask
.equ CPU_CCP2_bp = 2 ; CCP signature bit 2 position
.equ CPU_CCP3_bm = (1<<3) ; CCP signature bit 3 mask
.equ CPU_CCP3_bp = 3 ; CCP signature bit 3 position
.equ CPU_CCP4_bm = (1<<4) ; CCP signature bit 4 mask
.equ CPU_CCP4_bp = 4 ; CCP signature bit 4 position
.equ CPU_CCP5_bm = (1<<5) ; CCP signature bit 5 mask
.equ CPU_CCP5_bp = 5 ; CCP signature bit 5 position
.equ CPU_CCP6_bm = (1<<6) ; CCP signature bit 6 mask
.equ CPU_CCP6_bp = 6 ; CCP signature bit 6 position
.equ CPU_CCP7_bm = (1<<7) ; CCP signature bit 7 mask
.equ CPU_CCP7_bp = 7 ; CCP signature bit 7 position

; CPU_SREG masks
.equ CPU_I_bm = 0x80 ; Global Interrupt Enable Flag bit mask
.equ CPU_I_bp = 7 ; Global Interrupt Enable Flag bit position
.equ CPU_T_bm = 0x40 ; Transfer Bit bit mask
.equ CPU_T_bp = 6 ; Transfer Bit bit position
.equ CPU_H_bm = 0x20 ; Half Carry Flag bit mask
.equ CPU_H_bp = 5 ; Half Carry Flag bit position
.equ CPU_S_bm = 0x10 ; N Exclusive Or V Flag bit mask
.equ CPU_S_bp = 4 ; N Exclusive Or V Flag bit position
.equ CPU_V_bm = 0x08 ; Two's Complement Overflow Flag bit mask
.equ CPU_V_bp = 3 ; Two's Complement Overflow Flag bit position
.equ CPU_N_bm = 0x04 ; Negative Flag bit mask
.equ CPU_N_bp = 2 ; Negative Flag bit position
.equ CPU_Z_bm = 0x02 ; Zero Flag bit mask
.equ CPU_Z_bp = 1 ; Zero Flag bit position
.equ CPU_C_bm = 0x01 ; Carry Flag bit mask
.equ CPU_C_bp = 0 ; Carry Flag bit position
 
; CCP signatures
.equ CCP_SPM_gc = (0x9D<<0) ; SPM Instruction Protection
.equ CCP_IOREG_gc = (0xD8<<0) ; IO Register Protection


;***************************************************************************
;** CLK - Clock System
;***************************************************************************/

; CLK_CTRL masks
.equ CLK_SCLKSEL_gm = 0x07 ; System Clock Selection group mask
.equ CLK_SCLKSEL_gp = 0 ; System Clock Selection group position
.equ CLK_SCLKSEL0_bm = (1<<0) ; System Clock Selection bit 0 mask
.equ CLK_SCLKSEL0_bp = 0 ; System Clock Selection bit 0 position
.equ CLK_SCLKSEL1_bm = (1<<1) ; System Clock Selection bit 1 mask
.equ CLK_SCLKSEL1_bp = 1 ; System Clock Selection bit 1 position
.equ CLK_SCLKSEL2_bm = (1<<2) ; System Clock Selection bit 2 mask
.equ CLK_SCLKSEL2_bp = 2 ; System Clock Selection bit 2 position

; CLK_PSCTRL masks
.equ CLK_PSADIV_gm = 0x7C ; Prescaler A Division Factor group mask
.equ CLK_PSADIV_gp = 2 ; Prescaler A Division Factor group position
.equ CLK_PSADIV0_bm = (1<<2) ; Prescaler A Division Factor bit 0 mask
.equ CLK_PSADIV0_bp = 2 ; Prescaler A Division Factor bit 0 position
.equ CLK_PSADIV1_bm = (1<<3) ; Prescaler A Division Factor bit 1 mask
.equ CLK_PSADIV1_bp = 3 ; Prescaler A Division Factor bit 1 position
.equ CLK_PSADIV2_bm = (1<<4) ; Prescaler A Division Factor bit 2 mask
.equ CLK_PSADIV2_bp = 4 ; Prescaler A Division Factor bit 2 position
.equ CLK_PSADIV3_bm = (1<<5) ; Prescaler A Division Factor bit 3 mask
.equ CLK_PSADIV3_bp = 5 ; Prescaler A Division Factor bit 3 position
.equ CLK_PSADIV4_bm = (1<<6) ; Prescaler A Division Factor bit 4 mask
.equ CLK_PSADIV4_bp = 6 ; Prescaler A Division Factor bit 4 position
.equ CLK_PSBCDIV_gm = 0x03 ; Prescaler B and C Division factor group mask
.equ CLK_PSBCDIV_gp = 0 ; Prescaler B and C Division factor group position
.equ CLK_PSBCDIV0_bm = (1<<0) ; Prescaler B and C Division factor bit 0 mask
.equ CLK_PSBCDIV0_bp = 0 ; Prescaler B and C Division factor bit 0 position
.equ CLK_PSBCDIV1_bm = (1<<1) ; Prescaler B and C Division factor bit 1 mask
.equ CLK_PSBCDIV1_bp = 1 ; Prescaler B and C Division factor bit 1 position

; CLK_LOCK masks
.equ CLK_LOCK_bm = 0x01 ; Clock System Lock bit mask
.equ CLK_LOCK_bp = 0 ; Clock System Lock bit position

; CLK_RTCCTRL masks
.equ CLK_RTCSRC_gm = 0x0E ; Clock Source group mask
.equ CLK_RTCSRC_gp = 1 ; Clock Source group position
.equ CLK_RTCSRC0_bm = (1<<1) ; Clock Source bit 0 mask
.equ CLK_RTCSRC0_bp = 1 ; Clock Source bit 0 position
.equ CLK_RTCSRC1_bm = (1<<2) ; Clock Source bit 1 mask
.equ CLK_RTCSRC1_bp = 2 ; Clock Source bit 1 position
.equ CLK_RTCSRC2_bm = (1<<3) ; Clock Source bit 2 mask
.equ CLK_RTCSRC2_bp = 3 ; Clock Source bit 2 position
.equ CLK_RTCEN_bm = 0x01 ; Clock Source Enable bit mask
.equ CLK_RTCEN_bp = 0 ; Clock Source Enable bit position

; CLK_USBCTRL masks
.equ CLK_USBPSDIV_gm = 0x38 ; Prescaler Division Factor group mask
.equ CLK_USBPSDIV_gp = 3 ; Prescaler Division Factor group position
.equ CLK_USBPSDIV0_bm = (1<<3) ; Prescaler Division Factor bit 0 mask
.equ CLK_USBPSDIV0_bp = 3 ; Prescaler Division Factor bit 0 position
.equ CLK_USBPSDIV1_bm = (1<<4) ; Prescaler Division Factor bit 1 mask
.equ CLK_USBPSDIV1_bp = 4 ; Prescaler Division Factor bit 1 position
.equ CLK_USBPSDIV2_bm = (1<<5) ; Prescaler Division Factor bit 2 mask
.equ CLK_USBPSDIV2_bp = 5 ; Prescaler Division Factor bit 2 position
.equ CLK_USBSRC_gm = 0x06 ; Clock Source group mask
.equ CLK_USBSRC_gp = 1 ; Clock Source group position
.equ CLK_USBSRC0_bm = (1<<1) ; Clock Source bit 0 mask
.equ CLK_USBSRC0_bp = 1 ; Clock Source bit 0 position
.equ CLK_USBSRC1_bm = (1<<2) ; Clock Source bit 1 mask
.equ CLK_USBSRC1_bp = 2 ; Clock Source bit 1 position
.equ CLK_USBSEN_bm = 0x01 ; Clock Source Enable bit mask
.equ CLK_USBSEN_bp = 0 ; Clock Source Enable bit position

; PR_PRGEN masks
.equ PR_USB_bm = 0x40 ; USB bit mask
.equ PR_USB_bp = 6 ; USB bit position
.equ PR_AES_bm = 0x10 ; AES bit mask
.equ PR_AES_bp = 4 ; AES bit position
.equ PR_EBI_bm = 0x08 ; External Bus Interface bit mask
.equ PR_EBI_bp = 3 ; External Bus Interface bit position
.equ PR_RTC_bm = 0x04 ; Real-time Counter bit mask
.equ PR_RTC_bp = 2 ; Real-time Counter bit position
.equ PR_EVSYS_bm = 0x02 ; Event System bit mask
.equ PR_EVSYS_bp = 1 ; Event System bit position
.equ PR_DMA_bm = 0x01 ; DMA-Controller bit mask
.equ PR_DMA_bp = 0 ; DMA-Controller bit position

; PR_PRPA masks
.equ PR_DAC_bm = 0x04 ; Port A DAC bit mask
.equ PR_DAC_bp = 2 ; Port A DAC bit position
.equ PR_ADC_bm = 0x02 ; Port A ADC bit mask
.equ PR_ADC_bp = 1 ; Port A ADC bit position
.equ PR_AC_bm = 0x01 ; Port A Analog Comparator bit mask
.equ PR_AC_bp = 0 ; Port A Analog Comparator bit position

; PR_PRPB masks
; Masks for DAC aready defined
; Masks for ADC aready defined
; Masks for AC aready defined

; PR_PRPC masks
.equ PR_TWI_bm = 0x40 ; Port C Two-wire Interface bit mask
.equ PR_TWI_bp = 6 ; Port C Two-wire Interface bit position
.equ PR_USART1_bm = 0x20 ; Port C USART1 bit mask
.equ PR_USART1_bp = 5 ; Port C USART1 bit position
.equ PR_USART0_bm = 0x10 ; Port C USART0 bit mask
.equ PR_USART0_bp = 4 ; Port C USART0 bit position
.equ PR_SPI_bm = 0x08 ; Port C SPI bit mask
.equ PR_SPI_bp = 3 ; Port C SPI bit position
.equ PR_HIRES_bm = 0x04 ; Port C AWEX bit mask
.equ PR_HIRES_bp = 2 ; Port C AWEX bit position
.equ PR_TC1_bm = 0x02 ; Port C Timer/Counter1 bit mask
.equ PR_TC1_bp = 1 ; Port C Timer/Counter1 bit position
.equ PR_TC0_bm = 0x01 ; Port C Timer/Counter0 bit mask
.equ PR_TC0_bp = 0 ; Port C Timer/Counter0 bit position

; PR_PRPD masks
; Masks for TWI aready defined
; Masks for USART1 aready defined
; Masks for USART0 aready defined
; Masks for SPI aready defined
; Masks for HIRES aready defined
; Masks for TC1 aready defined
; Masks for TC0 aready defined

; PR_PRPE masks
; Masks for TWI aready defined
; Masks for USART1 aready defined
; Masks for USART0 aready defined
; Masks for SPI aready defined
; Masks for HIRES aready defined
; Masks for TC1 aready defined
; Masks for TC0 aready defined

; PR_PRPF masks
; Masks for TWI aready defined
; Masks for USART1 aready defined
; Masks for USART0 aready defined
; Masks for SPI aready defined
; Masks for HIRES aready defined
; Masks for TC1 aready defined
; Masks for TC0 aready defined
 
; System Clock Selection
.equ CLK_SCLKSEL_RC2M_gc = (0x00<<0) ; Internal 2 MHz RC Oscillator
.equ CLK_SCLKSEL_RC32M_gc = (0x01<<0) ; Internal 32 MHz RC Oscillator
.equ CLK_SCLKSEL_RC32K_gc = (0x02<<0) ; Internal 32.768 kHz RC Oscillator
.equ CLK_SCLKSEL_XOSC_gc = (0x03<<0) ; External Crystal Oscillator or Clock
.equ CLK_SCLKSEL_PLL_gc = (0x04<<0) ; Phase Locked Loop

; Prescaler A Division Factor
.equ CLK_PSADIV_1_gc = (0x00<<2) ; Divide by 1
.equ CLK_PSADIV_2_gc = (0x01<<2) ; Divide by 2
.equ CLK_PSADIV_4_gc = (0x03<<2) ; Divide by 4
.equ CLK_PSADIV_8_gc = (0x05<<2) ; Divide by 8
.equ CLK_PSADIV_16_gc = (0x07<<2) ; Divide by 16
.equ CLK_PSADIV_32_gc = (0x09<<2) ; Divide by 32
.equ CLK_PSADIV_64_gc = (0x0B<<2) ; Divide by 64
.equ CLK_PSADIV_128_gc = (0x0D<<2) ; Divide by 128
.equ CLK_PSADIV_256_gc = (0x0F<<2) ; Divide by 256
.equ CLK_PSADIV_512_gc = (0x11<<2) ; Divide by 512

; Prescaler B and C Division Factor
.equ CLK_PSBCDIV_1_1_gc = (0x00<<0) ; Divide B by 1 and C by 1
.equ CLK_PSBCDIV_1_2_gc = (0x01<<0) ; Divide B by 1 and C by 2
.equ CLK_PSBCDIV_4_1_gc = (0x02<<0) ; Divide B by 4 and C by 1
.equ CLK_PSBCDIV_2_2_gc = (0x03<<0) ; Divide B by 2 and C by 2

; RTC Clock Source
.equ CLK_RTCSRC_ULP_gc = (0x00<<1) ; 1.024 kHz from internal 32kHz ULP
.equ CLK_RTCSRC_TOSC_gc = (0x01<<1) ; 1.024 kHz from 32.768 kHz crystal oscillator on TOSC
.equ CLK_RTCSRC_RCOSC_gc = (0x02<<1) ; 1.024 kHz from internal 32.768 kHz RC oscillator
.equ CLK_RTCSRC_TOSC32_gc = (0x05<<1) ; 32.768 kHz from 32.768 kHz crystal oscillator on TOSC
.equ CLK_RTCSRC_RCOSC32_gc = (0x06<<1) ; 32.768 kHz from internal 32.768 kHz RC oscillator
.equ CLK_RTCSRC_EXTCLK_gc = (0x07<<1) ; External Clock from TOSC1

; USB Prescaler Division Factor
.equ CLK_USBPSDIV_1_gc = (0x00<<3) ; Divide by 1
.equ CLK_USBPSDIV_2_gc = (0x01<<3) ; Divide by 2
.equ CLK_USBPSDIV_4_gc = (0x02<<3) ; Divide by 4
.equ CLK_USBPSDIV_8_gc = (0x03<<3) ; Divide by 8
.equ CLK_USBPSDIV_16_gc = (0x04<<3) ; Divide by 16
.equ CLK_USBPSDIV_32_gc = (0x05<<3) ; Divide by 32

; USB Clock Source
.equ CLK_USBSRC_PLL_gc = (0x00<<1) ; PLL
.equ CLK_USBSRC_RC32M_gc = (0x01<<1) ; Internal 32 MHz RC Oscillator


;***************************************************************************
;** SLEEP - Sleep Controller
;***************************************************************************/

; SLEEP_CTRL masks
.equ SLEEP_SMODE_gm = 0x0E ; Sleep Mode group mask
.equ SLEEP_SMODE_gp = 1 ; Sleep Mode group position
.equ SLEEP_SMODE0_bm = (1<<1) ; Sleep Mode bit 0 mask
.equ SLEEP_SMODE0_bp = 1 ; Sleep Mode bit 0 position
.equ SLEEP_SMODE1_bm = (1<<2) ; Sleep Mode bit 1 mask
.equ SLEEP_SMODE1_bp = 2 ; Sleep Mode bit 1 position
.equ SLEEP_SMODE2_bm = (1<<3) ; Sleep Mode bit 2 mask
.equ SLEEP_SMODE2_bp = 3 ; Sleep Mode bit 2 position
.equ SLEEP_SEN_bm = 0x01 ; Sleep Enable bit mask
.equ SLEEP_SEN_bp = 0 ; Sleep Enable bit position
 
; Sleep Mode
.equ SLEEP_SMODE_IDLE_gc = (0x00<<1) ; Idle mode
.equ SLEEP_SMODE_PDOWN_gc = (0x02<<1) ; Power-down Mode
.equ SLEEP_SMODE_PSAVE_gc = (0x03<<1) ; Power-save Mode
.equ SLEEP_SMODE_STDBY_gc = (0x06<<1) ; Standby Mode
.equ SLEEP_SMODE_ESTDBY_gc = (0x07<<1) ; Extended Standby Mode


;***************************************************************************
;** OSC - Oscillator
;***************************************************************************/

; OSC_CTRL masks
.equ OSC_PLLEN_bm = 0x10 ; PLL Enable bit mask
.equ OSC_PLLEN_bp = 4 ; PLL Enable bit position
.equ OSC_XOSCEN_bm = 0x08 ; External Oscillator Enable bit mask
.equ OSC_XOSCEN_bp = 3 ; External Oscillator Enable bit position
.equ OSC_RC32KEN_bm = 0x04 ; Internal 32.768 kHz RC Oscillator Enable bit mask
.equ OSC_RC32KEN_bp = 2 ; Internal 32.768 kHz RC Oscillator Enable bit position
.equ OSC_RC32MEN_bm = 0x02 ; Internal 32 MHz RC Oscillator Enable bit mask
.equ OSC_RC32MEN_bp = 1 ; Internal 32 MHz RC Oscillator Enable bit position
.equ OSC_RC2MEN_bm = 0x01 ; Internal 2 MHz RC Oscillator Enable bit mask
.equ OSC_RC2MEN_bp = 0 ; Internal 2 MHz RC Oscillator Enable bit position

; OSC_STATUS masks
.equ OSC_PLLRDY_bm = 0x10 ; PLL Ready bit mask
.equ OSC_PLLRDY_bp = 4 ; PLL Ready bit position
.equ OSC_XOSCRDY_bm = 0x08 ; External Oscillator Ready bit mask
.equ OSC_XOSCRDY_bp = 3 ; External Oscillator Ready bit position
.equ OSC_RC32KRDY_bm = 0x04 ; Internal 32.768 kHz RC Oscillator Ready bit mask
.equ OSC_RC32KRDY_bp = 2 ; Internal 32.768 kHz RC Oscillator Ready bit position
.equ OSC_RC32MRDY_bm = 0x02 ; Internal 32 MHz RC Oscillator Ready bit mask
.equ OSC_RC32MRDY_bp = 1 ; Internal 32 MHz RC Oscillator Ready bit position
.equ OSC_RC2MRDY_bm = 0x01 ; Internal 2 MHz RC Oscillator Ready bit mask
.equ OSC_RC2MRDY_bp = 0 ; Internal 2 MHz RC Oscillator Ready bit position

; OSC_XOSCCTRL masks
.equ OSC_FRQRANGE_gm = 0xC0 ; Frequency Range group mask
.equ OSC_FRQRANGE_gp = 6 ; Frequency Range group position
.equ OSC_FRQRANGE0_bm = (1<<6) ; Frequency Range bit 0 mask
.equ OSC_FRQRANGE0_bp = 6 ; Frequency Range bit 0 position
.equ OSC_FRQRANGE1_bm = (1<<7) ; Frequency Range bit 1 mask
.equ OSC_FRQRANGE1_bp = 7 ; Frequency Range bit 1 position
.equ OSC_X32KLPM_bm = 0x20 ; 32.768 kHz XTAL OSC Low-power Mode bit mask
.equ OSC_X32KLPM_bp = 5 ; 32.768 kHz XTAL OSC Low-power Mode bit position
.equ OSC_XOSCPWR_bm = 0x10 ; 16 MHz Crystal Oscillator High Power mode bit mask
.equ OSC_XOSCPWR_bp = 4 ; 16 MHz Crystal Oscillator High Power mode bit position
.equ OSC_XOSCSEL_gm = 0x0F ; External Oscillator Selection and Startup Time group mask
.equ OSC_XOSCSEL_gp = 0 ; External Oscillator Selection and Startup Time group position
.equ OSC_XOSCSEL0_bm = (1<<0) ; External Oscillator Selection and Startup Time bit 0 mask
.equ OSC_XOSCSEL0_bp = 0 ; External Oscillator Selection and Startup Time bit 0 position
.equ OSC_XOSCSEL1_bm = (1<<1) ; External Oscillator Selection and Startup Time bit 1 mask
.equ OSC_XOSCSEL1_bp = 1 ; External Oscillator Selection and Startup Time bit 1 position
.equ OSC_XOSCSEL2_bm = (1<<2) ; External Oscillator Selection and Startup Time bit 2 mask
.equ OSC_XOSCSEL2_bp = 2 ; External Oscillator Selection and Startup Time bit 2 position
.equ OSC_XOSCSEL3_bm = (1<<3) ; External Oscillator Selection and Startup Time bit 3 mask
.equ OSC_XOSCSEL3_bp = 3 ; External Oscillator Selection and Startup Time bit 3 position

; OSC_XOSCFAIL masks
.equ OSC_PLLFDIF_bm = 0x08 ; PLL Failure Detection Interrupt Flag bit mask
.equ OSC_PLLFDIF_bp = 3 ; PLL Failure Detection Interrupt Flag bit position
.equ OSC_PLLFDEN_bm = 0x04 ; PLL Failure Detection Enable bit mask
.equ OSC_PLLFDEN_bp = 2 ; PLL Failure Detection Enable bit position
.equ OSC_XOSCFDIF_bm = 0x02 ; XOSC Failure Detection Interrupt Flag bit mask
.equ OSC_XOSCFDIF_bp = 1 ; XOSC Failure Detection Interrupt Flag bit position
.equ OSC_XOSCFDEN_bm = 0x01 ; XOSC Failure Detection Enable bit mask
.equ OSC_XOSCFDEN_bp = 0 ; XOSC Failure Detection Enable bit position

; OSC_PLLCTRL masks
.equ OSC_PLLSRC_gm = 0xC0 ; Clock Source group mask
.equ OSC_PLLSRC_gp = 6 ; Clock Source group position
.equ OSC_PLLSRC0_bm = (1<<6) ; Clock Source bit 0 mask
.equ OSC_PLLSRC0_bp = 6 ; Clock Source bit 0 position
.equ OSC_PLLSRC1_bm = (1<<7) ; Clock Source bit 1 mask
.equ OSC_PLLSRC1_bp = 7 ; Clock Source bit 1 position
.equ OSC_PLLDIV_bm = 0x20 ; Divide by 2 bit mask
.equ OSC_PLLDIV_bp = 5 ; Divide by 2 bit position
.equ OSC_PLLFAC_gm = 0x1F ; Multiplication Factor group mask
.equ OSC_PLLFAC_gp = 0 ; Multiplication Factor group position
.equ OSC_PLLFAC0_bm = (1<<0) ; Multiplication Factor bit 0 mask
.equ OSC_PLLFAC0_bp = 0 ; Multiplication Factor bit 0 position
.equ OSC_PLLFAC1_bm = (1<<1) ; Multiplication Factor bit 1 mask
.equ OSC_PLLFAC1_bp = 1 ; Multiplication Factor bit 1 position
.equ OSC_PLLFAC2_bm = (1<<2) ; Multiplication Factor bit 2 mask
.equ OSC_PLLFAC2_bp = 2 ; Multiplication Factor bit 2 position
.equ OSC_PLLFAC3_bm = (1<<3) ; Multiplication Factor bit 3 mask
.equ OSC_PLLFAC3_bp = 3 ; Multiplication Factor bit 3 position
.equ OSC_PLLFAC4_bm = (1<<4) ; Multiplication Factor bit 4 mask
.equ OSC_PLLFAC4_bp = 4 ; Multiplication Factor bit 4 position

; OSC_DFLLCTRL masks
.equ OSC_RC32MCREF_gm = 0x06 ; 32 MHz DFLL Calibration Reference group mask
.equ OSC_RC32MCREF_gp = 1 ; 32 MHz DFLL Calibration Reference group position
.equ OSC_RC32MCREF0_bm = (1<<1) ; 32 MHz DFLL Calibration Reference bit 0 mask
.equ OSC_RC32MCREF0_bp = 1 ; 32 MHz DFLL Calibration Reference bit 0 position
.equ OSC_RC32MCREF1_bm = (1<<2) ; 32 MHz DFLL Calibration Reference bit 1 mask
.equ OSC_RC32MCREF1_bp = 2 ; 32 MHz DFLL Calibration Reference bit 1 position
.equ OSC_RC2MCREF_bm = 0x01 ; 2 MHz DFLL Calibration Reference bit mask
.equ OSC_RC2MCREF_bp = 0 ; 2 MHz DFLL Calibration Reference bit position
 
; Oscillator Frequency Range
.equ OSC_FRQRANGE_04TO2_gc = (0x00<<6) ; 0.4 - 2 MHz
.equ OSC_FRQRANGE_2TO9_gc = (0x01<<6) ; 2 - 9 MHz
.equ OSC_FRQRANGE_9TO12_gc = (0x02<<6) ; 9 - 12 MHz
.equ OSC_FRQRANGE_12TO16_gc = (0x03<<6) ; 12 - 16 MHz

; External Oscillator Selection and Startup Time
.equ OSC_XOSCSEL_EXTCLK_gc = (0x00<<0) ; External Clock - 6 CLK
.equ OSC_XOSCSEL_32KHz_gc = (0x02<<0) ; 32.768 kHz TOSC - 32K CLK
.equ OSC_XOSCSEL_XTAL_256CLK_gc = (0x03<<0) ; 0.4-16 MHz XTAL - 256 CLK
.equ OSC_XOSCSEL_XTAL_1KCLK_gc = (0x07<<0) ; 0.4-16 MHz XTAL - 1K CLK
.equ OSC_XOSCSEL_XTAL_16KCLK_gc = (0x0B<<0) ; 0.4-16 MHz XTAL - 16K CLK

; PLL Clock Source
.equ OSC_PLLSRC_RC2M_gc = (0x00<<6) ; Internal 2 MHz RC Oscillator
.equ OSC_PLLSRC_RC32M_gc = (0x02<<6) ; Internal 32 MHz RC Oscillator
.equ OSC_PLLSRC_XOSC_gc = (0x03<<6) ; External Oscillator

; 2 MHz DFLL Calibration Reference
.equ OSC_RC2MCREF_RC32K_gc = (0x00<<0) ; Internal 32.768 kHz RC Oscillator
.equ OSC_RC2MCREF_XOSC32K_gc = (0x01<<0) ; External 32.768 kHz Crystal Oscillator

; 32 MHz DFLL Calibration Reference
.equ OSC_RC32MCREF_RC32K_gc = (0x00<<1) ; Internal 32.768 kHz RC Oscillator
.equ OSC_RC32MCREF_XOSC32K_gc = (0x01<<1) ; External 32.768 kHz Crystal Oscillator
.equ OSC_RC32MCREF_USBSOF_gc = (0x02<<1) ; USB Start of Frame


;***************************************************************************
;** DFLL - DFLL
;***************************************************************************/

; DFLL_CTRL masks
.equ DFLL_ENABLE_bm = 0x01 ; DFLL Enable bit mask
.equ DFLL_ENABLE_bp = 0 ; DFLL Enable bit position

; DFLL_CALA masks
.equ DFLL_CALL_gm = 0x7F ; DFLL Calibration Value A group mask
.equ DFLL_CALL_gp = 0 ; DFLL Calibration Value A group position
.equ DFLL_CALL0_bm = (1<<0) ; DFLL Calibration Value A bit 0 mask
.equ DFLL_CALL0_bp = 0 ; DFLL Calibration Value A bit 0 position
.equ DFLL_CALL1_bm = (1<<1) ; DFLL Calibration Value A bit 1 mask
.equ DFLL_CALL1_bp = 1 ; DFLL Calibration Value A bit 1 position
.equ DFLL_CALL2_bm = (1<<2) ; DFLL Calibration Value A bit 2 mask
.equ DFLL_CALL2_bp = 2 ; DFLL Calibration Value A bit 2 position
.equ DFLL_CALL3_bm = (1<<3) ; DFLL Calibration Value A bit 3 mask
.equ DFLL_CALL3_bp = 3 ; DFLL Calibration Value A bit 3 position
.equ DFLL_CALL4_bm = (1<<4) ; DFLL Calibration Value A bit 4 mask
.equ DFLL_CALL4_bp = 4 ; DFLL Calibration Value A bit 4 position
.equ DFLL_CALL5_bm = (1<<5) ; DFLL Calibration Value A bit 5 mask
.equ DFLL_CALL5_bp = 5 ; DFLL Calibration Value A bit 5 position
.equ DFLL_CALL6_bm = (1<<6) ; DFLL Calibration Value A bit 6 mask
.equ DFLL_CALL6_bp = 6 ; DFLL Calibration Value A bit 6 position

; DFLL_CALB masks
.equ DFLL_CALH_gm = 0x3F ; DFLL Calibration Value B group mask
.equ DFLL_CALH_gp = 0 ; DFLL Calibration Value B group position
.equ DFLL_CALH0_bm = (1<<0) ; DFLL Calibration Value B bit 0 mask
.equ DFLL_CALH0_bp = 0 ; DFLL Calibration Value B bit 0 position
.equ DFLL_CALH1_bm = (1<<1) ; DFLL Calibration Value B bit 1 mask
.equ DFLL_CALH1_bp = 1 ; DFLL Calibration Value B bit 1 position
.equ DFLL_CALH2_bm = (1<<2) ; DFLL Calibration Value B bit 2 mask
.equ DFLL_CALH2_bp = 2 ; DFLL Calibration Value B bit 2 position
.equ DFLL_CALH3_bm = (1<<3) ; DFLL Calibration Value B bit 3 mask
.equ DFLL_CALH3_bp = 3 ; DFLL Calibration Value B bit 3 position
.equ DFLL_CALH4_bm = (1<<4) ; DFLL Calibration Value B bit 4 mask
.equ DFLL_CALH4_bp = 4 ; DFLL Calibration Value B bit 4 position
.equ DFLL_CALH5_bm = (1<<5) ; DFLL Calibration Value B bit 5 mask
.equ DFLL_CALH5_bp = 5 ; DFLL Calibration Value B bit 5 position
 

;***************************************************************************
;** RST - Reset
;***************************************************************************/

; RST_STATUS masks
.equ RST_SDRF_bm = 0x40 ; Spike Detection Reset Flag bit mask
.equ RST_SDRF_bp = 6 ; Spike Detection Reset Flag bit position
.equ RST_SRF_bm = 0x20 ; Software Reset Flag bit mask
.equ RST_SRF_bp = 5 ; Software Reset Flag bit position
.equ RST_PDIRF_bm = 0x10 ; Programming and Debug Interface Interface Reset Flag bit mask
.equ RST_PDIRF_bp = 4 ; Programming and Debug Interface Interface Reset Flag bit position
.equ RST_WDRF_bm = 0x08 ; Watchdog Reset Flag bit mask
.equ RST_WDRF_bp = 3 ; Watchdog Reset Flag bit position
.equ RST_BORF_bm = 0x04 ; Brown-out Reset Flag bit mask
.equ RST_BORF_bp = 2 ; Brown-out Reset Flag bit position
.equ RST_EXTRF_bm = 0x02 ; External Reset Flag bit mask
.equ RST_EXTRF_bp = 1 ; External Reset Flag bit position
.equ RST_PORF_bm = 0x01 ; Power-on Reset Flag bit mask
.equ RST_PORF_bp = 0 ; Power-on Reset Flag bit position

; RST_CTRL masks
.equ RST_SWRST_bm = 0x01 ; Software Reset bit mask
.equ RST_SWRST_bp = 0 ; Software Reset bit position
 

;***************************************************************************
;** WDT - Watch-Dog Timer
;***************************************************************************/

; WDT_CTRL masks
.equ WDT_PER_gm = 0x3C ; Period group mask
.equ WDT_PER_gp = 2 ; Period group position
.equ WDT_PER0_bm = (1<<2) ; Period bit 0 mask
.equ WDT_PER0_bp = 2 ; Period bit 0 position
.equ WDT_PER1_bm = (1<<3) ; Period bit 1 mask
.equ WDT_PER1_bp = 3 ; Period bit 1 position
.equ WDT_PER2_bm = (1<<4) ; Period bit 2 mask
.equ WDT_PER2_bp = 4 ; Period bit 2 position
.equ WDT_PER3_bm = (1<<5) ; Period bit 3 mask
.equ WDT_PER3_bp = 5 ; Period bit 3 position
.equ WDT_ENABLE_bm = 0x02 ; Enable bit mask
.equ WDT_ENABLE_bp = 1 ; Enable bit position
.equ WDT_CEN_bm = 0x01 ; Change Enable bit mask
.equ WDT_CEN_bp = 0 ; Change Enable bit position

; WDT_WINCTRL masks
.equ WDT_WPER_gm = 0x3C ; Windowed Mode Period group mask
.equ WDT_WPER_gp = 2 ; Windowed Mode Period group position
.equ WDT_WPER0_bm = (1<<2) ; Windowed Mode Period bit 0 mask
.equ WDT_WPER0_bp = 2 ; Windowed Mode Period bit 0 position
.equ WDT_WPER1_bm = (1<<3) ; Windowed Mode Period bit 1 mask
.equ WDT_WPER1_bp = 3 ; Windowed Mode Period bit 1 position
.equ WDT_WPER2_bm = (1<<4) ; Windowed Mode Period bit 2 mask
.equ WDT_WPER2_bp = 4 ; Windowed Mode Period bit 2 position
.equ WDT_WPER3_bm = (1<<5) ; Windowed Mode Period bit 3 mask
.equ WDT_WPER3_bp = 5 ; Windowed Mode Period bit 3 position
.equ WDT_WEN_bm = 0x02 ; Windowed Mode Enable bit mask
.equ WDT_WEN_bp = 1 ; Windowed Mode Enable bit position
.equ WDT_WCEN_bm = 0x01 ; Windowed Mode Change Enable bit mask
.equ WDT_WCEN_bp = 0 ; Windowed Mode Change Enable bit position

; WDT_STATUS masks
.equ WDT_SYNCBUSY_bm = 0x01 ; Syncronization busy bit mask
.equ WDT_SYNCBUSY_bp = 0 ; Syncronization busy bit position
 
; Period setting
.equ WDT_PER_8CLK_gc = (0x00<<2) ; 8 cycles (8ms @ 3.3V)
.equ WDT_PER_16CLK_gc = (0x01<<2) ; 16 cycles (16ms @ 3.3V)
.equ WDT_PER_32CLK_gc = (0x02<<2) ; 32 cycles (32ms @ 3.3V)
.equ WDT_PER_64CLK_gc = (0x03<<2) ; 64 cycles (64ms @ 3.3V)
.equ WDT_PER_125CLK_gc = (0x04<<2) ; 125 cycles (0.125s @ 3.3V)
.equ WDT_PER_250CLK_gc = (0x05<<2) ; 250 cycles (0.25s @ 3.3V)
.equ WDT_PER_500CLK_gc = (0x06<<2) ; 500 cycles (0.5s @ 3.3V)
.equ WDT_PER_1KCLK_gc = (0x07<<2) ; 1K cycles (1s @ 3.3V)
.equ WDT_PER_2KCLK_gc = (0x08<<2) ; 2K cycles (2s @ 3.3V)
.equ WDT_PER_4KCLK_gc = (0x09<<2) ; 4K cycles (4s @ 3.3V)
.equ WDT_PER_8KCLK_gc = (0x0A<<2) ; 8K cycles (8s @ 3.3V)

; Closed window period
.equ WDT_WPER_8CLK_gc = (0x00<<2) ; 8 cycles (8ms @ 3.3V)
.equ WDT_WPER_16CLK_gc = (0x01<<2) ; 16 cycles (16ms @ 3.3V)
.equ WDT_WPER_32CLK_gc = (0x02<<2) ; 32 cycles (32ms @ 3.3V)
.equ WDT_WPER_64CLK_gc = (0x03<<2) ; 64 cycles (64ms @ 3.3V)
.equ WDT_WPER_125CLK_gc = (0x04<<2) ; 125 cycles (0.125s @ 3.3V)
.equ WDT_WPER_250CLK_gc = (0x05<<2) ; 250 cycles (0.25s @ 3.3V)
.equ WDT_WPER_500CLK_gc = (0x06<<2) ; 500 cycles (0.5s @ 3.3V)
.equ WDT_WPER_1KCLK_gc = (0x07<<2) ; 1K cycles (1s @ 3.3V)
.equ WDT_WPER_2KCLK_gc = (0x08<<2) ; 2K cycles (2s @ 3.3V)
.equ WDT_WPER_4KCLK_gc = (0x09<<2) ; 4K cycles (4s @ 3.3V)
.equ WDT_WPER_8KCLK_gc = (0x0A<<2) ; 8K cycles (8s @ 3.3V)


;***************************************************************************
;** MCU - MCU Control
;***************************************************************************/

; MCU_MCUCR masks
.equ MCU_JTAGD_bm = 0x01 ; JTAG Disable bit mask
.equ MCU_JTAGD_bp = 0 ; JTAG Disable bit position

; MCU_ANAINIT masks
.equ MCU_STARTUPDLYB_gm = 0x0C ; Analog startup delay Port B group mask
.equ MCU_STARTUPDLYB_gp = 2 ; Analog startup delay Port B group position
.equ MCU_STARTUPDLYB0_bm = (1<<2) ; Analog startup delay Port B bit 0 mask
.equ MCU_STARTUPDLYB0_bp = 2 ; Analog startup delay Port B bit 0 position
.equ MCU_STARTUPDLYB1_bm = (1<<3) ; Analog startup delay Port B bit 1 mask
.equ MCU_STARTUPDLYB1_bp = 3 ; Analog startup delay Port B bit 1 position
.equ MCU_STARTUPDLYA_gm = 0x03 ; Analog startup delay Port A group mask
.equ MCU_STARTUPDLYA_gp = 0 ; Analog startup delay Port A group position
.equ MCU_STARTUPDLYA0_bm = (1<<0) ; Analog startup delay Port A bit 0 mask
.equ MCU_STARTUPDLYA0_bp = 0 ; Analog startup delay Port A bit 0 position
.equ MCU_STARTUPDLYA1_bm = (1<<1) ; Analog startup delay Port A bit 1 mask
.equ MCU_STARTUPDLYA1_bp = 1 ; Analog startup delay Port A bit 1 position

; MCU_EVSYSLOCK masks
.equ MCU_EVSYS1LOCK_bm = 0x10 ; Event Channel 4-7 Lock bit mask
.equ MCU_EVSYS1LOCK_bp = 4 ; Event Channel 4-7 Lock bit position
.equ MCU_EVSYS0LOCK_bm = 0x01 ; Event Channel 0-3 Lock bit mask
.equ MCU_EVSYS0LOCK_bp = 0 ; Event Channel 0-3 Lock bit position

; MCU_AWEXLOCK masks
.equ MCU_AWEXFLOCK_bm = 0x08 ; AWeX on T/C F0 Lock bit mask
.equ MCU_AWEXFLOCK_bp = 3 ; AWeX on T/C F0 Lock bit position
.equ MCU_AWEXELOCK_bm = 0x04 ; AWeX on T/C E0 Lock bit mask
.equ MCU_AWEXELOCK_bp = 2 ; AWeX on T/C E0 Lock bit position
.equ MCU_AWEXDLOCK_bm = 0x02 ; AWeX on T/C D0 Lock bit mask
.equ MCU_AWEXDLOCK_bp = 1 ; AWeX on T/C D0 Lock bit position
.equ MCU_AWEXCLOCK_bm = 0x01 ; AWeX on T/C C0 Lock bit mask
.equ MCU_AWEXCLOCK_bp = 0 ; AWeX on T/C C0 Lock bit position
 

;***************************************************************************
;** PMIC - Programmable Multi-level Interrupt Controller
;***************************************************************************/

; PMIC_STATUS masks
.equ PMIC_NMIEX_bm = 0x80 ; Non-maskable Interrupt Executing bit mask
.equ PMIC_NMIEX_bp = 7 ; Non-maskable Interrupt Executing bit position
.equ PMIC_HILVLEX_bm = 0x04 ; High Level Interrupt Executing bit mask
.equ PMIC_HILVLEX_bp = 2 ; High Level Interrupt Executing bit position
.equ PMIC_MEDLVLEX_bm = 0x02 ; Medium Level Interrupt Executing bit mask
.equ PMIC_MEDLVLEX_bp = 1 ; Medium Level Interrupt Executing bit position
.equ PMIC_LOLVLEX_bm = 0x01 ; Low Level Interrupt Executing bit mask
.equ PMIC_LOLVLEX_bp = 0 ; Low Level Interrupt Executing bit position

; PMIC_CTRL masks
.equ PMIC_RREN_bm = 0x80 ; Round-Robin Priority Enable bit mask
.equ PMIC_RREN_bp = 7 ; Round-Robin Priority Enable bit position
.equ PMIC_IVSEL_bm = 0x40 ; Interrupt Vector Select bit mask
.equ PMIC_IVSEL_bp = 6 ; Interrupt Vector Select bit position
.equ PMIC_HILVLEN_bm = 0x04 ; High Level Enable bit mask
.equ PMIC_HILVLEN_bp = 2 ; High Level Enable bit position
.equ PMIC_MEDLVLEN_bm = 0x02 ; Medium Level Enable bit mask
.equ PMIC_MEDLVLEN_bp = 1 ; Medium Level Enable bit position
.equ PMIC_LOLVLEN_bm = 0x01 ; Low Level Enable bit mask
.equ PMIC_LOLVLEN_bp = 0 ; Low Level Enable bit position
 

;***************************************************************************
;** PORTCFG - Port Configuration
;***************************************************************************/

; PORTCFG_VPCTRLA masks
.equ PORTCFG_VP1MAP_gm = 0xF0 ; Virtual Port 1 Mapping group mask
.equ PORTCFG_VP1MAP_gp = 4 ; Virtual Port 1 Mapping group position
.equ PORTCFG_VP1MAP0_bm = (1<<4) ; Virtual Port 1 Mapping bit 0 mask
.equ PORTCFG_VP1MAP0_bp = 4 ; Virtual Port 1 Mapping bit 0 position
.equ PORTCFG_VP1MAP1_bm = (1<<5) ; Virtual Port 1 Mapping bit 1 mask
.equ PORTCFG_VP1MAP1_bp = 5 ; Virtual Port 1 Mapping bit 1 position
.equ PORTCFG_VP1MAP2_bm = (1<<6) ; Virtual Port 1 Mapping bit 2 mask
.equ PORTCFG_VP1MAP2_bp = 6 ; Virtual Port 1 Mapping bit 2 position
.equ PORTCFG_VP1MAP3_bm = (1<<7) ; Virtual Port 1 Mapping bit 3 mask
.equ PORTCFG_VP1MAP3_bp = 7 ; Virtual Port 1 Mapping bit 3 position
.equ PORTCFG_VP0MAP_gm = 0x0F ; Virtual Port 0 Mapping group mask
.equ PORTCFG_VP0MAP_gp = 0 ; Virtual Port 0 Mapping group position
.equ PORTCFG_VP0MAP0_bm = (1<<0) ; Virtual Port 0 Mapping bit 0 mask
.equ PORTCFG_VP0MAP0_bp = 0 ; Virtual Port 0 Mapping bit 0 position
.equ PORTCFG_VP0MAP1_bm = (1<<1) ; Virtual Port 0 Mapping bit 1 mask
.equ PORTCFG_VP0MAP1_bp = 1 ; Virtual Port 0 Mapping bit 1 position
.equ PORTCFG_VP0MAP2_bm = (1<<2) ; Virtual Port 0 Mapping bit 2 mask
.equ PORTCFG_VP0MAP2_bp = 2 ; Virtual Port 0 Mapping bit 2 position
.equ PORTCFG_VP0MAP3_bm = (1<<3) ; Virtual Port 0 Mapping bit 3 mask
.equ PORTCFG_VP0MAP3_bp = 3 ; Virtual Port 0 Mapping bit 3 position

; PORTCFG_VPCTRLB masks
.equ PORTCFG_VP3MAP_gm = 0xF0 ; Virtual Port 3 Mapping group mask
.equ PORTCFG_VP3MAP_gp = 4 ; Virtual Port 3 Mapping group position
.equ PORTCFG_VP3MAP0_bm = (1<<4) ; Virtual Port 3 Mapping bit 0 mask
.equ PORTCFG_VP3MAP0_bp = 4 ; Virtual Port 3 Mapping bit 0 position
.equ PORTCFG_VP3MAP1_bm = (1<<5) ; Virtual Port 3 Mapping bit 1 mask
.equ PORTCFG_VP3MAP1_bp = 5 ; Virtual Port 3 Mapping bit 1 position
.equ PORTCFG_VP3MAP2_bm = (1<<6) ; Virtual Port 3 Mapping bit 2 mask
.equ PORTCFG_VP3MAP2_bp = 6 ; Virtual Port 3 Mapping bit 2 position
.equ PORTCFG_VP3MAP3_bm = (1<<7) ; Virtual Port 3 Mapping bit 3 mask
.equ PORTCFG_VP3MAP3_bp = 7 ; Virtual Port 3 Mapping bit 3 position
.equ PORTCFG_VP2MAP_gm = 0x0F ; Virtual Port 2 Mapping group mask
.equ PORTCFG_VP2MAP_gp = 0 ; Virtual Port 2 Mapping group position
.equ PORTCFG_VP2MAP0_bm = (1<<0) ; Virtual Port 2 Mapping bit 0 mask
.equ PORTCFG_VP2MAP0_bp = 0 ; Virtual Port 2 Mapping bit 0 position
.equ PORTCFG_VP2MAP1_bm = (1<<1) ; Virtual Port 2 Mapping bit 1 mask
.equ PORTCFG_VP2MAP1_bp = 1 ; Virtual Port 2 Mapping bit 1 position
.equ PORTCFG_VP2MAP2_bm = (1<<2) ; Virtual Port 2 Mapping bit 2 mask
.equ PORTCFG_VP2MAP2_bp = 2 ; Virtual Port 2 Mapping bit 2 position
.equ PORTCFG_VP2MAP3_bm = (1<<3) ; Virtual Port 2 Mapping bit 3 mask
.equ PORTCFG_VP2MAP3_bp = 3 ; Virtual Port 2 Mapping bit 3 position

; PORTCFG_CLKEVOUT masks
.equ PORTCFG_CLKOUT_gm = 0x03 ; Peripheral Clock Output Port group mask
.equ PORTCFG_CLKOUT_gp = 0 ; Peripheral Clock Output Port group position
.equ PORTCFG_CLKOUT0_bm = (1<<0) ; Peripheral Clock Output Port bit 0 mask
.equ PORTCFG_CLKOUT0_bp = 0 ; Peripheral Clock Output Port bit 0 position
.equ PORTCFG_CLKOUT1_bm = (1<<1) ; Peripheral Clock Output Port bit 1 mask
.equ PORTCFG_CLKOUT1_bp = 1 ; Peripheral Clock Output Port bit 1 position
.equ PORTCFG_CLKOUTSEL_gm = 0x0C ; Peripheral Clock Output Select group mask
.equ PORTCFG_CLKOUTSEL_gp = 2 ; Peripheral Clock Output Select group position
.equ PORTCFG_CLKOUTSEL0_bm = (1<<2) ; Peripheral Clock Output Select bit 0 mask
.equ PORTCFG_CLKOUTSEL0_bp = 2 ; Peripheral Clock Output Select bit 0 position
.equ PORTCFG_CLKOUTSEL1_bm = (1<<3) ; Peripheral Clock Output Select bit 1 mask
.equ PORTCFG_CLKOUTSEL1_bp = 3 ; Peripheral Clock Output Select bit 1 position
.equ PORTCFG_EVOUT_gm = 0x30 ; Event Output Port group mask
.equ PORTCFG_EVOUT_gp = 4 ; Event Output Port group position
.equ PORTCFG_EVOUT0_bm = (1<<4) ; Event Output Port bit 0 mask
.equ PORTCFG_EVOUT0_bp = 4 ; Event Output Port bit 0 position
.equ PORTCFG_EVOUT1_bm = (1<<5) ; Event Output Port bit 1 mask
.equ PORTCFG_EVOUT1_bp = 5 ; Event Output Port bit 1 position
.equ PORTCFG_RTCOUT_bm = 0x40 ; RTC Clock Output bit mask
.equ PORTCFG_RTCOUT_bp = 6 ; RTC Clock Output bit position
.equ PORTCFG_CLKEVPIN_bm = 0x80 ; Peripheral Clock and Event Output pin Select bit mask
.equ PORTCFG_CLKEVPIN_bp = 7 ; Peripheral Clock and Event Output pin Select bit position

; PORTCFG_EVOUTSEL masks
.equ PORTCFG_EVOUTSEL_gm = 0x07 ; Event Output Select group mask
.equ PORTCFG_EVOUTSEL_gp = 0 ; Event Output Select group position
.equ PORTCFG_EVOUTSEL0_bm = (1<<0) ; Event Output Select bit 0 mask
.equ PORTCFG_EVOUTSEL0_bp = 0 ; Event Output Select bit 0 position
.equ PORTCFG_EVOUTSEL1_bm = (1<<1) ; Event Output Select bit 1 mask
.equ PORTCFG_EVOUTSEL1_bp = 1 ; Event Output Select bit 1 position
.equ PORTCFG_EVOUTSEL2_bm = (1<<2) ; Event Output Select bit 2 mask
.equ PORTCFG_EVOUTSEL2_bp = 2 ; Event Output Select bit 2 position
 
; Virtual Port Mapping
.equ PORTCFG_VP02MAP_PORTA_gc = (0x00<<0) ; Mapped To PORTA
.equ PORTCFG_VP02MAP_PORTB_gc = (0x01<<0) ; Mapped To PORTB
.equ PORTCFG_VP02MAP_PORTC_gc = (0x02<<0) ; Mapped To PORTC
.equ PORTCFG_VP02MAP_PORTD_gc = (0x03<<0) ; Mapped To PORTD
.equ PORTCFG_VP02MAP_PORTE_gc = (0x04<<0) ; Mapped To PORTE
.equ PORTCFG_VP02MAP_PORTF_gc = (0x05<<0) ; Mapped To PORTF
.equ PORTCFG_VP02MAP_PORTG_gc = (0x06<<0) ; Mapped To PORTG
.equ PORTCFG_VP02MAP_PORTH_gc = (0x07<<0) ; Mapped To PORTH
.equ PORTCFG_VP02MAP_PORTJ_gc = (0x08<<0) ; Mapped To PORTJ
.equ PORTCFG_VP02MAP_PORTK_gc = (0x09<<0) ; Mapped To PORTK
.equ PORTCFG_VP02MAP_PORTL_gc = (0x0A<<0) ; Mapped To PORTL
.equ PORTCFG_VP02MAP_PORTM_gc = (0x0B<<0) ; Mapped To PORTM
.equ PORTCFG_VP02MAP_PORTN_gc = (0x0C<<0) ; Mapped To PORTN
.equ PORTCFG_VP02MAP_PORTP_gc = (0x0D<<0) ; Mapped To PORTP
.equ PORTCFG_VP02MAP_PORTQ_gc = (0x0E<<0) ; Mapped To PORTQ
.equ PORTCFG_VP02MAP_PORTR_gc = (0x0F<<0) ; Mapped To PORTR

; Virtual Port Mapping
.equ PORTCFG_VP13MAP_PORTA_gc = (0x00<<4) ; Mapped To PORTA
.equ PORTCFG_VP13MAP_PORTB_gc = (0x01<<4) ; Mapped To PORTB
.equ PORTCFG_VP13MAP_PORTC_gc = (0x02<<4) ; Mapped To PORTC
.equ PORTCFG_VP13MAP_PORTD_gc = (0x03<<4) ; Mapped To PORTD
.equ PORTCFG_VP13MAP_PORTE_gc = (0x04<<4) ; Mapped To PORTE
.equ PORTCFG_VP13MAP_PORTF_gc = (0x05<<4) ; Mapped To PORTF
.equ PORTCFG_VP13MAP_PORTG_gc = (0x06<<4) ; Mapped To PORTG
.equ PORTCFG_VP13MAP_PORTH_gc = (0x07<<4) ; Mapped To PORTH
.equ PORTCFG_VP13MAP_PORTJ_gc = (0x08<<4) ; Mapped To PORTJ
.equ PORTCFG_VP13MAP_PORTK_gc = (0x09<<4) ; Mapped To PORTK
.equ PORTCFG_VP13MAP_PORTL_gc = (0x0A<<4) ; Mapped To PORTL
.equ PORTCFG_VP13MAP_PORTM_gc = (0x0B<<4) ; Mapped To PORTM
.equ PORTCFG_VP13MAP_PORTN_gc = (0x0C<<4) ; Mapped To PORTN
.equ PORTCFG_VP13MAP_PORTP_gc = (0x0D<<4) ; Mapped To PORTP
.equ PORTCFG_VP13MAP_PORTQ_gc = (0x0E<<4) ; Mapped To PORTQ
.equ PORTCFG_VP13MAP_PORTR_gc = (0x0F<<4) ; Mapped To PORTR

; System Clock Output Port
.equ PORTCFG_CLKOUT_OFF_gc = (0x00<<0) ; System Clock Output Disabled
.equ PORTCFG_CLKOUT_PC7_gc = (0x01<<0) ; System Clock Output on Port C pin 7
.equ PORTCFG_CLKOUT_PD7_gc = (0x02<<0) ; System Clock Output on Port D pin 7
.equ PORTCFG_CLKOUT_PE7_gc = (0x03<<0) ; System Clock Output on Port E pin 7

; Peripheral Clock Output Select
.equ PORTCFG_CLKOUTSEL_CLK1X_gc = (0x00<<2) ; 1x Peripheral Clock Output to pin
.equ PORTCFG_CLKOUTSEL_CLK2X_gc = (0x01<<2) ; 2x Peripheral Clock Output to pin
.equ PORTCFG_CLKOUTSEL_CLK4X_gc = (0x02<<2) ; 4x Peripheral Clock Output to pin

; Event Output Port
.equ PORTCFG_EVOUT_OFF_gc = (0x00<<4) ; Event Output Disabled
.equ PORTCFG_EVOUT_PC7_gc = (0x01<<4) ; Event Channel 7 Output on Port C pin 7
.equ PORTCFG_EVOUT_PD7_gc = (0x02<<4) ; Event Channel 7 Output on Port D pin 7
.equ PORTCFG_EVOUT_PE7_gc = (0x03<<4) ; Event Channel 7 Output on Port E pin 7

; Clock and Event Output Port
.equ PORTCFG_CLKEVPIN_PIN7_gc = (0x00<<7) ; Clock and Event Ouput on PIN 7
.equ PORTCFG_CLKEVPIN_PIN4_gc = (0x01<<7) ; Clock and Event Ouput on PIN 4

; Event Output Select
.equ PORTCFG_EVOUTSEL_0_gc = (0x00<<0) ; Event Channel 0 output to pin
.equ PORTCFG_EVOUTSEL_1_gc = (0x01<<0) ; Event Channel 1 output to pin
.equ PORTCFG_EVOUTSEL_2_gc = (0x02<<0) ; Event Channel 2 output to pin
.equ PORTCFG_EVOUTSEL_3_gc = (0x03<<0) ; Event Channel 3 output to pin
.equ PORTCFG_EVOUTSEL_4_gc = (0x04<<0) ; Event Channel 4 output to pin
.equ PORTCFG_EVOUTSEL_5_gc = (0x05<<0) ; Event Channel 5 output to pin
.equ PORTCFG_EVOUTSEL_6_gc = (0x06<<0) ; Event Channel 6 output to pin
.equ PORTCFG_EVOUTSEL_7_gc = (0x07<<0) ; Event Channel 7 output to pin


;***************************************************************************
;** AES - AES Module
;***************************************************************************/

; AES_CTRL masks
.equ AES_START_bm = 0x80 ; Start/Run bit mask
.equ AES_START_bp = 7 ; Start/Run bit position
.equ AES_AUTO_bm = 0x40 ; Auto Start Trigger bit mask
.equ AES_AUTO_bp = 6 ; Auto Start Trigger bit position
.equ AES_RESET_bm = 0x20 ; AES Software Reset bit mask
.equ AES_RESET_bp = 5 ; AES Software Reset bit position
.equ AES_DECRYPT_bm = 0x10 ; Decryption / Direction bit mask
.equ AES_DECRYPT_bp = 4 ; Decryption / Direction bit position
.equ AES_XOR_bm = 0x04 ; State XOR Load Enable bit mask
.equ AES_XOR_bp = 2 ; State XOR Load Enable bit position

; AES_STATUS masks
.equ AES_ERROR_bm = 0x80 ; AES Error bit mask
.equ AES_ERROR_bp = 7 ; AES Error bit position
.equ AES_SRIF_bm = 0x01 ; State Ready Interrupt Flag bit mask
.equ AES_SRIF_bp = 0 ; State Ready Interrupt Flag bit position

; AES_INTCTRL masks
.equ AES_INTLVL_gm = 0x03 ; Interrupt level group mask
.equ AES_INTLVL_gp = 0 ; Interrupt level group position
.equ AES_INTLVL0_bm = (1<<0) ; Interrupt level bit 0 mask
.equ AES_INTLVL0_bp = 0 ; Interrupt level bit 0 position
.equ AES_INTLVL1_bm = (1<<1) ; Interrupt level bit 1 mask
.equ AES_INTLVL1_bp = 1 ; Interrupt level bit 1 position
 
; Interrupt level
.equ AES_INTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ AES_INTLVL_LO_gc = (0x01<<0) ; Low Level
.equ AES_INTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ AES_INTLVL_HI_gc = (0x03<<0) ; High Level


;***************************************************************************
;** CRC - Cyclic Redundancy Checker
;***************************************************************************/

; CRC_CTRL masks
.equ CRC_RESET_gm = 0xC0 ; Reset group mask
.equ CRC_RESET_gp = 6 ; Reset group position
.equ CRC_RESET0_bm = (1<<6) ; Reset bit 0 mask
.equ CRC_RESET0_bp = 6 ; Reset bit 0 position
.equ CRC_RESET1_bm = (1<<7) ; Reset bit 1 mask
.equ CRC_RESET1_bp = 7 ; Reset bit 1 position
.equ CRC_CRC32_bm = 0x20 ; CRC Mode bit mask
.equ CRC_CRC32_bp = 5 ; CRC Mode bit position
.equ CRC_SOURCE_gm = 0x0F ; Input Source group mask
.equ CRC_SOURCE_gp = 0 ; Input Source group position
.equ CRC_SOURCE0_bm = (1<<0) ; Input Source bit 0 mask
.equ CRC_SOURCE0_bp = 0 ; Input Source bit 0 position
.equ CRC_SOURCE1_bm = (1<<1) ; Input Source bit 1 mask
.equ CRC_SOURCE1_bp = 1 ; Input Source bit 1 position
.equ CRC_SOURCE2_bm = (1<<2) ; Input Source bit 2 mask
.equ CRC_SOURCE2_bp = 2 ; Input Source bit 2 position
.equ CRC_SOURCE3_bm = (1<<3) ; Input Source bit 3 mask
.equ CRC_SOURCE3_bp = 3 ; Input Source bit 3 position

; CRC_STATUS masks
.equ CRC_ZERO_bm = 0x02 ; Zero detection bit mask
.equ CRC_ZERO_bp = 1 ; Zero detection bit position
.equ CRC_BUSY_bm = 0x01 ; Busy bit mask
.equ CRC_BUSY_bp = 0 ; Busy bit position
 
; Reset
.equ CRC_RESET_NO_gc = (0x00<<6) ; No Reset
.equ CRC_RESET_RESET0_gc = (0x02<<6) ; Reset CRC with CHECKSUM to all zeros
.equ CRC_RESET_RESET1_gc = (0x03<<6) ; Reset CRC with CHECKSUM to all ones

; Input Source
.equ CRC_SOURCE_DISABLE_gc = (0x00<<0) ; Disabled
.equ CRC_SOURCE_IO_gc = (0x01<<0) ; I/O Interface
.equ CRC_SOURCE_FLASH_gc = (0x02<<0) ; Flash
.equ CRC_SOURCE_DMAC0_gc = (0x04<<0) ; DMAC Channel 0
.equ CRC_SOURCE_DMAC1_gc = (0x05<<0) ; DMAC Channel 1
.equ CRC_SOURCE_DMAC2_gc = (0x06<<0) ; DMAC Channel 2
.equ CRC_SOURCE_DMAC3_gc = (0x07<<0) ; DMAC Channel 3


;***************************************************************************
;** DMA - DMA Controller
;***************************************************************************/

; DMA_CH_CTRLA masks
.equ DMA_CH_ENABLE_bm = 0x80 ; Channel Enable bit mask
.equ DMA_CH_ENABLE_bp = 7 ; Channel Enable bit position
.equ DMA_CH_RESET_bm = 0x40 ; Channel Software Reset bit mask
.equ DMA_CH_RESET_bp = 6 ; Channel Software Reset bit position
.equ DMA_CH_REPEAT_bm = 0x20 ; Channel Repeat Mode bit mask
.equ DMA_CH_REPEAT_bp = 5 ; Channel Repeat Mode bit position
.equ DMA_CH_TRFREQ_bm = 0x10 ; Channel Transfer Request bit mask
.equ DMA_CH_TRFREQ_bp = 4 ; Channel Transfer Request bit position
.equ DMA_CH_SINGLE_bm = 0x04 ; Channel Single Shot Data Transfer bit mask
.equ DMA_CH_SINGLE_bp = 2 ; Channel Single Shot Data Transfer bit position
.equ DMA_CH_BURSTLEN_gm = 0x03 ; Channel Transfer Mode group mask
.equ DMA_CH_BURSTLEN_gp = 0 ; Channel Transfer Mode group position
.equ DMA_CH_BURSTLEN0_bm = (1<<0) ; Channel Transfer Mode bit 0 mask
.equ DMA_CH_BURSTLEN0_bp = 0 ; Channel Transfer Mode bit 0 position
.equ DMA_CH_BURSTLEN1_bm = (1<<1) ; Channel Transfer Mode bit 1 mask
.equ DMA_CH_BURSTLEN1_bp = 1 ; Channel Transfer Mode bit 1 position

; DMA_CH_CTRLB masks
.equ DMA_CH_CHBUSY_bm = 0x80 ; Block Transfer Busy bit mask
.equ DMA_CH_CHBUSY_bp = 7 ; Block Transfer Busy bit position
.equ DMA_CH_CHPEND_bm = 0x40 ; Block Transfer Pending bit mask
.equ DMA_CH_CHPEND_bp = 6 ; Block Transfer Pending bit position
.equ DMA_CH_ERRIF_bm = 0x20 ; Block Transfer Error Interrupt Flag bit mask
.equ DMA_CH_ERRIF_bp = 5 ; Block Transfer Error Interrupt Flag bit position
.equ DMA_CH_TRNIF_bm = 0x10 ; Transaction Complete Interrup Flag bit mask
.equ DMA_CH_TRNIF_bp = 4 ; Transaction Complete Interrup Flag bit position
.equ DMA_CH_ERRINTLVL_gm = 0x0C ; Transfer Error Interrupt Level group mask
.equ DMA_CH_ERRINTLVL_gp = 2 ; Transfer Error Interrupt Level group position
.equ DMA_CH_ERRINTLVL0_bm = (1<<2) ; Transfer Error Interrupt Level bit 0 mask
.equ DMA_CH_ERRINTLVL0_bp = 2 ; Transfer Error Interrupt Level bit 0 position
.equ DMA_CH_ERRINTLVL1_bm = (1<<3) ; Transfer Error Interrupt Level bit 1 mask
.equ DMA_CH_ERRINTLVL1_bp = 3 ; Transfer Error Interrupt Level bit 1 position
.equ DMA_CH_TRNINTLVL_gm = 0x03 ; Transaction Complete Interrupt Level group mask
.equ DMA_CH_TRNINTLVL_gp = 0 ; Transaction Complete Interrupt Level group position
.equ DMA_CH_TRNINTLVL0_bm = (1<<0) ; Transaction Complete Interrupt Level bit 0 mask
.equ DMA_CH_TRNINTLVL0_bp = 0 ; Transaction Complete Interrupt Level bit 0 position
.equ DMA_CH_TRNINTLVL1_bm = (1<<1) ; Transaction Complete Interrupt Level bit 1 mask
.equ DMA_CH_TRNINTLVL1_bp = 1 ; Transaction Complete Interrupt Level bit 1 position

; DMA_CH_ADDRCTRL masks
.equ DMA_CH_SRCRELOAD_gm = 0xC0 ; Channel Source Address Reload group mask
.equ DMA_CH_SRCRELOAD_gp = 6 ; Channel Source Address Reload group position
.equ DMA_CH_SRCRELOAD0_bm = (1<<6) ; Channel Source Address Reload bit 0 mask
.equ DMA_CH_SRCRELOAD0_bp = 6 ; Channel Source Address Reload bit 0 position
.equ DMA_CH_SRCRELOAD1_bm = (1<<7) ; Channel Source Address Reload bit 1 mask
.equ DMA_CH_SRCRELOAD1_bp = 7 ; Channel Source Address Reload bit 1 position
.equ DMA_CH_SRCDIR_gm = 0x30 ; Channel Source Address Mode group mask
.equ DMA_CH_SRCDIR_gp = 4 ; Channel Source Address Mode group position
.equ DMA_CH_SRCDIR0_bm = (1<<4) ; Channel Source Address Mode bit 0 mask
.equ DMA_CH_SRCDIR0_bp = 4 ; Channel Source Address Mode bit 0 position
.equ DMA_CH_SRCDIR1_bm = (1<<5) ; Channel Source Address Mode bit 1 mask
.equ DMA_CH_SRCDIR1_bp = 5 ; Channel Source Address Mode bit 1 position
.equ DMA_CH_DESTRELOAD_gm = 0x0C ; Channel Destination Address Reload group mask
.equ DMA_CH_DESTRELOAD_gp = 2 ; Channel Destination Address Reload group position
.equ DMA_CH_DESTRELOAD0_bm = (1<<2) ; Channel Destination Address Reload bit 0 mask
.equ DMA_CH_DESTRELOAD0_bp = 2 ; Channel Destination Address Reload bit 0 position
.equ DMA_CH_DESTRELOAD1_bm = (1<<3) ; Channel Destination Address Reload bit 1 mask
.equ DMA_CH_DESTRELOAD1_bp = 3 ; Channel Destination Address Reload bit 1 position
.equ DMA_CH_DESTDIR_gm = 0x03 ; Channel Destination Address Mode group mask
.equ DMA_CH_DESTDIR_gp = 0 ; Channel Destination Address Mode group position
.equ DMA_CH_DESTDIR0_bm = (1<<0) ; Channel Destination Address Mode bit 0 mask
.equ DMA_CH_DESTDIR0_bp = 0 ; Channel Destination Address Mode bit 0 position
.equ DMA_CH_DESTDIR1_bm = (1<<1) ; Channel Destination Address Mode bit 1 mask
.equ DMA_CH_DESTDIR1_bp = 1 ; Channel Destination Address Mode bit 1 position

; DMA_CH_TRIGSRC masks
.equ DMA_CH_TRIGSRC_gm = 0xFF ; Channel Trigger Source group mask
.equ DMA_CH_TRIGSRC_gp = 0 ; Channel Trigger Source group position
.equ DMA_CH_TRIGSRC0_bm = (1<<0) ; Channel Trigger Source bit 0 mask
.equ DMA_CH_TRIGSRC0_bp = 0 ; Channel Trigger Source bit 0 position
.equ DMA_CH_TRIGSRC1_bm = (1<<1) ; Channel Trigger Source bit 1 mask
.equ DMA_CH_TRIGSRC1_bp = 1 ; Channel Trigger Source bit 1 position
.equ DMA_CH_TRIGSRC2_bm = (1<<2) ; Channel Trigger Source bit 2 mask
.equ DMA_CH_TRIGSRC2_bp = 2 ; Channel Trigger Source bit 2 position
.equ DMA_CH_TRIGSRC3_bm = (1<<3) ; Channel Trigger Source bit 3 mask
.equ DMA_CH_TRIGSRC3_bp = 3 ; Channel Trigger Source bit 3 position
.equ DMA_CH_TRIGSRC4_bm = (1<<4) ; Channel Trigger Source bit 4 mask
.equ DMA_CH_TRIGSRC4_bp = 4 ; Channel Trigger Source bit 4 position
.equ DMA_CH_TRIGSRC5_bm = (1<<5) ; Channel Trigger Source bit 5 mask
.equ DMA_CH_TRIGSRC5_bp = 5 ; Channel Trigger Source bit 5 position
.equ DMA_CH_TRIGSRC6_bm = (1<<6) ; Channel Trigger Source bit 6 mask
.equ DMA_CH_TRIGSRC6_bp = 6 ; Channel Trigger Source bit 6 position
.equ DMA_CH_TRIGSRC7_bm = (1<<7) ; Channel Trigger Source bit 7 mask
.equ DMA_CH_TRIGSRC7_bp = 7 ; Channel Trigger Source bit 7 position

; DMA_CTRL masks
.equ DMA_ENABLE_bm = 0x80 ; Enable bit mask
.equ DMA_ENABLE_bp = 7 ; Enable bit position
.equ DMA_RESET_bm = 0x40 ; Software Reset bit mask
.equ DMA_RESET_bp = 6 ; Software Reset bit position
.equ DMA_DBUFMODE_gm = 0x0C ; Double Buffering Mode group mask
.equ DMA_DBUFMODE_gp = 2 ; Double Buffering Mode group position
.equ DMA_DBUFMODE0_bm = (1<<2) ; Double Buffering Mode bit 0 mask
.equ DMA_DBUFMODE0_bp = 2 ; Double Buffering Mode bit 0 position
.equ DMA_DBUFMODE1_bm = (1<<3) ; Double Buffering Mode bit 1 mask
.equ DMA_DBUFMODE1_bp = 3 ; Double Buffering Mode bit 1 position
.equ DMA_PRIMODE_gm = 0x03 ; Channel Priority Mode group mask
.equ DMA_PRIMODE_gp = 0 ; Channel Priority Mode group position
.equ DMA_PRIMODE0_bm = (1<<0) ; Channel Priority Mode bit 0 mask
.equ DMA_PRIMODE0_bp = 0 ; Channel Priority Mode bit 0 position
.equ DMA_PRIMODE1_bm = (1<<1) ; Channel Priority Mode bit 1 mask
.equ DMA_PRIMODE1_bp = 1 ; Channel Priority Mode bit 1 position

; DMA_INTFLAGS masks
.equ DMA_CH3ERRIF_bm = 0x80 ; Channel 3 Block Transfer Error Interrupt Flag bit mask
.equ DMA_CH3ERRIF_bp = 7 ; Channel 3 Block Transfer Error Interrupt Flag bit position
.equ DMA_CH2ERRIF_bm = 0x40 ; Channel 2 Block Transfer Error Interrupt Flag bit mask
.equ DMA_CH2ERRIF_bp = 6 ; Channel 2 Block Transfer Error Interrupt Flag bit position
.equ DMA_CH1ERRIF_bm = 0x20 ; Channel 1 Block Transfer Error Interrupt Flag bit mask
.equ DMA_CH1ERRIF_bp = 5 ; Channel 1 Block Transfer Error Interrupt Flag bit position
.equ DMA_CH0ERRIF_bm = 0x10 ; Channel 0 Block Transfer Error Interrupt Flag bit mask
.equ DMA_CH0ERRIF_bp = 4 ; Channel 0 Block Transfer Error Interrupt Flag bit position
.equ DMA_CH3TRNIF_bm = 0x08 ; Channel 3 Transaction Complete Interrupt Flag bit mask
.equ DMA_CH3TRNIF_bp = 3 ; Channel 3 Transaction Complete Interrupt Flag bit position
.equ DMA_CH2TRNIF_bm = 0x04 ; Channel 2 Transaction Complete Interrupt Flag bit mask
.equ DMA_CH2TRNIF_bp = 2 ; Channel 2 Transaction Complete Interrupt Flag bit position
.equ DMA_CH1TRNIF_bm = 0x02 ; Channel 1 Transaction Complete Interrupt Flag bit mask
.equ DMA_CH1TRNIF_bp = 1 ; Channel 1 Transaction Complete Interrupt Flag bit position
.equ DMA_CH0TRNIF_bm = 0x01 ; Channel 0 Transaction Complete Interrupt Flag bit mask
.equ DMA_CH0TRNIF_bp = 0 ; Channel 0 Transaction Complete Interrupt Flag bit position

; DMA_STATUS masks
.equ DMA_CH3BUSY_bm = 0x80 ; Channel 3 Block Transfer Busy bit mask
.equ DMA_CH3BUSY_bp = 7 ; Channel 3 Block Transfer Busy bit position
.equ DMA_CH2BUSY_bm = 0x40 ; Channel 2 Block Transfer Busy bit mask
.equ DMA_CH2BUSY_bp = 6 ; Channel 2 Block Transfer Busy bit position
.equ DMA_CH1BUSY_bm = 0x20 ; Channel 1 Block Transfer Busy bit mask
.equ DMA_CH1BUSY_bp = 5 ; Channel 1 Block Transfer Busy bit position
.equ DMA_CH0BUSY_bm = 0x10 ; Channel 0 Block Transfer Busy bit mask
.equ DMA_CH0BUSY_bp = 4 ; Channel 0 Block Transfer Busy bit position
.equ DMA_CH3PEND_bm = 0x08 ; Channel 3 Block Transfer Pending bit mask
.equ DMA_CH3PEND_bp = 3 ; Channel 3 Block Transfer Pending bit position
.equ DMA_CH2PEND_bm = 0x04 ; Channel 2 Block Transfer Pending bit mask
.equ DMA_CH2PEND_bp = 2 ; Channel 2 Block Transfer Pending bit position
.equ DMA_CH1PEND_bm = 0x02 ; Channel 1 Block Transfer Pending bit mask
.equ DMA_CH1PEND_bp = 1 ; Channel 1 Block Transfer Pending bit position
.equ DMA_CH0PEND_bm = 0x01 ; Channel 0 Block Transfer Pending bit mask
.equ DMA_CH0PEND_bp = 0 ; Channel 0 Block Transfer Pending bit position
 
; Burst mode
.equ DMA_CH_BURSTLEN_1BYTE_gc = (0x00<<0) ; 1-byte burst mode
.equ DMA_CH_BURSTLEN_2BYTE_gc = (0x01<<0) ; 2-byte burst mode
.equ DMA_CH_BURSTLEN_4BYTE_gc = (0x02<<0) ; 4-byte burst mode
.equ DMA_CH_BURSTLEN_8BYTE_gc = (0x03<<0) ; 8-byte burst mode

; Source address reload mode
.equ DMA_CH_SRCRELOAD_NONE_gc = (0x00<<6) ; No reload
.equ DMA_CH_SRCRELOAD_BLOCK_gc = (0x01<<6) ; Reload at end of block
.equ DMA_CH_SRCRELOAD_BURST_gc = (0x02<<6) ; Reload at end of burst
.equ DMA_CH_SRCRELOAD_TRANSACTION_gc = (0x03<<6) ; Reload at end of transaction

; Source addressing mode
.equ DMA_CH_SRCDIR_FIXED_gc = (0x00<<4) ; Fixed
.equ DMA_CH_SRCDIR_INC_gc = (0x01<<4) ; Increment
.equ DMA_CH_SRCDIR_DEC_gc = (0x02<<4) ; Decrement

; Destination adress reload mode
.equ DMA_CH_DESTRELOAD_NONE_gc = (0x00<<2) ; No reload
.equ DMA_CH_DESTRELOAD_BLOCK_gc = (0x01<<2) ; Reload at end of block
.equ DMA_CH_DESTRELOAD_BURST_gc = (0x02<<2) ; Reload at end of burst
.equ DMA_CH_DESTRELOAD_TRANSACTION_gc = (0x03<<2) ; Reload at end of transaction

; Destination adressing mode
.equ DMA_CH_DESTDIR_FIXED_gc = (0x00<<0) ; Fixed
.equ DMA_CH_DESTDIR_INC_gc = (0x01<<0) ; Increment
.equ DMA_CH_DESTDIR_DEC_gc = (0x02<<0) ; Decrement

; Transfer trigger source
.equ DMA_CH_TRIGSRC_OFF_gc = (0x00<<0) ; Off software triggers only
.equ DMA_CH_TRIGSRC_EVSYS_CH0_gc = (0x01<<0) ; Event System Channel 0
.equ DMA_CH_TRIGSRC_EVSYS_CH1_gc = (0x02<<0) ; Event System Channel 1
.equ DMA_CH_TRIGSRC_EVSYS_CH2_gc = (0x03<<0) ; Event System Channel 2
.equ DMA_CH_TRIGSRC_ADCA_CH0_gc = (0x10<<0) ; ADCA Channel 0
.equ DMA_CH_TRIGSRC_ADCA_CH1_gc = (0x11<<0) ; ADCA Channel 1
.equ DMA_CH_TRIGSRC_ADCA_CH2_gc = (0x12<<0) ; ADCA Channel 2
.equ DMA_CH_TRIGSRC_ADCA_CH3_gc = (0x13<<0) ; ADCA Channel 3
.equ DMA_CH_TRIGSRC_ADCA_CH4_gc = (0x14<<0) ; ADCA Channel 0,1,2,3 combined
.equ DMA_CH_TRIGSRC_DACA_CH0_gc = (0x15<<0) ; DACA Channel 0
.equ DMA_CH_TRIGSRC_DACA_CH1_gc = (0x16<<0) ; DACA Channel 1
.equ DMA_CH_TRIGSRC_ADCB_CH0_gc = (0x20<<0) ; ADCB Channel 0
.equ DMA_CH_TRIGSRC_ADCB_CH1_gc = (0x21<<0) ; ADCB Channel 1
.equ DMA_CH_TRIGSRC_ADCB_CH2_gc = (0x22<<0) ; ADCB Channel 2
.equ DMA_CH_TRIGSRC_ADCB_CH3_gc = (0x23<<0) ; ADCB Channel 3
.equ DMA_CH_TRIGSRC_ADCB_CH4_gc = (0x24<<0) ; ADCB Channel 0,1,2,3 combined
.equ DMA_CH_TRIGSRC_DACB_CH0_gc = (0x25<<0) ; DACB Channel 0
.equ DMA_CH_TRIGSRC_DACB_CH1_gc = (0x26<<0) ; DACB Channel 1
.equ DMA_CH_TRIGSRC_TCC0_OVF_gc = (0x40<<0) ; Timer/Counter C0 Overflow
.equ DMA_CH_TRIGSRC_TCC0_ERR_gc = (0x41<<0) ; Timer/Counter C0 Error
.equ DMA_CH_TRIGSRC_TCC0_CCA_gc = (0x42<<0) ; Timer/Counter C0 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCC0_CCB_gc = (0x43<<0) ; Timer/Counter C0 Compare or Capture B
.equ DMA_CH_TRIGSRC_TCC0_CCC_gc = (0x44<<0) ; Timer/Counter C0 Compare or Capture C
.equ DMA_CH_TRIGSRC_TCC0_CCD_gc = (0x45<<0) ; Timer/Counter C0 Compare or Capture D
.equ DMA_CH_TRIGSRC_TCC1_OVF_gc = (0x46<<0) ; Timer/Counter C1 Overflow
.equ DMA_CH_TRIGSRC_TCC1_ERR_gc = (0x47<<0) ; Timer/Counter C1 Error
.equ DMA_CH_TRIGSRC_TCC1_CCA_gc = (0x48<<0) ; Timer/Counter C1 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCC1_CCB_gc = (0x49<<0) ; Timer/Counter C1 Compare or Capture B
.equ DMA_CH_TRIGSRC_SPIC_gc = (0x4A<<0) ; SPI C Transfer Complete
.equ DMA_CH_TRIGSRC_USARTC0_RXC_gc = (0x4B<<0) ; USART C0 Receive Complete
.equ DMA_CH_TRIGSRC_USARTC0_DRE_gc = (0x4C<<0) ; USART C0 Data Register Empty
.equ DMA_CH_TRIGSRC_USARTC1_RXC_gc = (0x4E<<0) ; USART C1 Receive Complete
.equ DMA_CH_TRIGSRC_USARTC1_DRE_gc = (0x4F<<0) ; USART C1 Data Register Empty
.equ DMA_CH_TRIGSRC_TCD0_OVF_gc = (0x60<<0) ; Timer/Counter D0 Overflow
.equ DMA_CH_TRIGSRC_TCD0_ERR_gc = (0x61<<0) ; Timer/Counter D0 Error
.equ DMA_CH_TRIGSRC_TCD0_CCA_gc = (0x62<<0) ; Timer/Counter D0 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCD0_CCB_gc = (0x63<<0) ; Timer/Counter D0 Compare or Capture B
.equ DMA_CH_TRIGSRC_TCD0_CCC_gc = (0x64<<0) ; Timer/Counter D0 Compare or Capture C
.equ DMA_CH_TRIGSRC_TCD0_CCD_gc = (0x65<<0) ; Timer/Counter D0 Compare or Capture D
.equ DMA_CH_TRIGSRC_TCD1_OVF_gc = (0x66<<0) ; Timer/Counter D1 Overflow
.equ DMA_CH_TRIGSRC_TCD1_ERR_gc = (0x67<<0) ; Timer/Counter D1 Error
.equ DMA_CH_TRIGSRC_TCD1_CCA_gc = (0x68<<0) ; Timer/Counter D1 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCD1_CCB_gc = (0x69<<0) ; Timer/Counter D1 Compare or Capture B
.equ DMA_CH_TRIGSRC_SPID_gc = (0x6A<<0) ; SPI D Transfer Complete
.equ DMA_CH_TRIGSRC_USARTD0_RXC_gc = (0x6B<<0) ; USART D0 Receive Complete
.equ DMA_CH_TRIGSRC_USARTD0_DRE_gc = (0x6C<<0) ; USART D0 Data Register Empty
.equ DMA_CH_TRIGSRC_USARTD1_RXC_gc = (0x6E<<0) ; USART D1 Receive Complete
.equ DMA_CH_TRIGSRC_USARTD1_DRE_gc = (0x6F<<0) ; USART D1 Data Register Empty
.equ DMA_CH_TRIGSRC_TCE0_OVF_gc = (0x80<<0) ; Timer/Counter E0 Overflow
.equ DMA_CH_TRIGSRC_TCE0_ERR_gc = (0x81<<0) ; Timer/Counter E0 Error
.equ DMA_CH_TRIGSRC_TCE0_CCA_gc = (0x82<<0) ; Timer/Counter E0 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCE0_CCB_gc = (0x83<<0) ; Timer/Counter E0 Compare or Capture B
.equ DMA_CH_TRIGSRC_TCE0_CCC_gc = (0x84<<0) ; Timer/Counter E0 Compare or Capture C
.equ DMA_CH_TRIGSRC_TCE0_CCD_gc = (0x85<<0) ; Timer/Counter E0 Compare or Capture D
.equ DMA_CH_TRIGSRC_TCE1_OVF_gc = (0x86<<0) ; Timer/Counter E1 Overflow
.equ DMA_CH_TRIGSRC_TCE1_ERR_gc = (0x87<<0) ; Timer/Counter E1 Error
.equ DMA_CH_TRIGSRC_TCE1_CCA_gc = (0x88<<0) ; Timer/Counter E1 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCE1_CCB_gc = (0x89<<0) ; Timer/Counter E1 Compare or Capture B
.equ DMA_CH_TRIGSRC_SPIE_gc = (0x8A<<0) ; SPI E Transfer Complete
.equ DMA_CH_TRIGSRC_USARTE0_RXC_gc = (0x8B<<0) ; USART E0 Receive Complete
.equ DMA_CH_TRIGSRC_USARTE0_DRE_gc = (0x8C<<0) ; USART E0 Data Register Empty
.equ DMA_CH_TRIGSRC_USARTE1_RXC_gc = (0x8E<<0) ; USART E1 Receive Complete
.equ DMA_CH_TRIGSRC_USARTE1_DRE_gc = (0x8F<<0) ; USART E1 Data Register Empty
.equ DMA_CH_TRIGSRC_TCF0_OVF_gc = (0xA0<<0) ; Timer/Counter F0 Overflow
.equ DMA_CH_TRIGSRC_TCF0_ERR_gc = (0xA1<<0) ; Timer/Counter F0 Error
.equ DMA_CH_TRIGSRC_TCF0_CCA_gc = (0xA2<<0) ; Timer/Counter F0 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCF0_CCB_gc = (0xA3<<0) ; Timer/Counter F0 Compare or Capture B
.equ DMA_CH_TRIGSRC_TCF0_CCC_gc = (0xA4<<0) ; Timer/Counter F0 Compare or Capture C
.equ DMA_CH_TRIGSRC_TCF0_CCD_gc = (0xA5<<0) ; Timer/Counter F0 Compare or Capture D
.equ DMA_CH_TRIGSRC_TCF1_OVF_gc = (0xA6<<0) ; Timer/Counter F1 Overflow
.equ DMA_CH_TRIGSRC_TCF1_ERR_gc = (0xA7<<0) ; Timer/Counter F1 Error
.equ DMA_CH_TRIGSRC_TCF1_CCA_gc = (0xA8<<0) ; Timer/Counter F1 Compare or Capture A
.equ DMA_CH_TRIGSRC_TCF1_CCB_gc = (0xA9<<0) ; Timer/Counter F1 Compare or Capture B
.equ DMA_CH_TRIGSRC_SPIF_gc = (0xAA<<0) ; SPI F Transfer Complete
.equ DMA_CH_TRIGSRC_USARTF0_RXC_gc = (0xAB<<0) ; USART F0 Receive Complete
.equ DMA_CH_TRIGSRC_USARTF0_DRE_gc = (0xAC<<0) ; USART F0 Data Register Empty
.equ DMA_CH_TRIGSRC_USARTF1_RXC_gc = (0xAE<<0) ; USART F1 Receive Complete
.equ DMA_CH_TRIGSRC_USARTF1_DRE_gc = (0xAF<<0) ; USART F1 Data Register Empty

; Double buffering mode
.equ DMA_DBUFMODE_DISABLED_gc = (0x00<<2) ; Double buffering disabled
.equ DMA_DBUFMODE_CH01_gc = (0x01<<2) ; Double buffering enabled on channel 0/1
.equ DMA_DBUFMODE_CH23_gc = (0x02<<2) ; Double buffering enabled on channel 2/3
.equ DMA_DBUFMODE_CH01CH23_gc = (0x03<<2) ; Double buffering enabled on ch. 0/1 and ch. 2/3

; Priority mode
.equ DMA_PRIMODE_RR0123_gc = (0x00<<0) ; Round Robin
.equ DMA_PRIMODE_CH0RR123_gc = (0x01<<0) ; Channel 0 > Round Robin on channel 1/2/3
.equ DMA_PRIMODE_CH01RR23_gc = (0x02<<0) ; Channel 0 > channel 1 > Round Robin on channel 2/3
.equ DMA_PRIMODE_CH0123_gc = (0x03<<0) ; Channel 0 > channel 1 > channel 2 > channel 3

; Interrupt level
.equ DMA_CH_ERRINTLVL_OFF_gc = (0x00<<2) ; Interrupt disabled
.equ DMA_CH_ERRINTLVL_LO_gc = (0x01<<2) ; Low level
.equ DMA_CH_ERRINTLVL_MED_gc = (0x02<<2) ; Medium level
.equ DMA_CH_ERRINTLVL_HI_gc = (0x03<<2) ; High level

; Interrupt level
.equ DMA_CH_TRNINTLVL_OFF_gc = (0x00<<0) ; Interrupt disabled
.equ DMA_CH_TRNINTLVL_LO_gc = (0x01<<0) ; Low level
.equ DMA_CH_TRNINTLVL_MED_gc = (0x02<<0) ; Medium level
.equ DMA_CH_TRNINTLVL_HI_gc = (0x03<<0) ; High level


;***************************************************************************
;** EVSYS - Event System
;***************************************************************************/

; EVSYS_CH0MUX masks
.equ EVSYS_CHMUX_gm = 0xFF ; Event Channel 0 Multiplexer group mask
.equ EVSYS_CHMUX_gp = 0 ; Event Channel 0 Multiplexer group position
.equ EVSYS_CHMUX0_bm = (1<<0) ; Event Channel 0 Multiplexer bit 0 mask
.equ EVSYS_CHMUX0_bp = 0 ; Event Channel 0 Multiplexer bit 0 position
.equ EVSYS_CHMUX1_bm = (1<<1) ; Event Channel 0 Multiplexer bit 1 mask
.equ EVSYS_CHMUX1_bp = 1 ; Event Channel 0 Multiplexer bit 1 position
.equ EVSYS_CHMUX2_bm = (1<<2) ; Event Channel 0 Multiplexer bit 2 mask
.equ EVSYS_CHMUX2_bp = 2 ; Event Channel 0 Multiplexer bit 2 position
.equ EVSYS_CHMUX3_bm = (1<<3) ; Event Channel 0 Multiplexer bit 3 mask
.equ EVSYS_CHMUX3_bp = 3 ; Event Channel 0 Multiplexer bit 3 position
.equ EVSYS_CHMUX4_bm = (1<<4) ; Event Channel 0 Multiplexer bit 4 mask
.equ EVSYS_CHMUX4_bp = 4 ; Event Channel 0 Multiplexer bit 4 position
.equ EVSYS_CHMUX5_bm = (1<<5) ; Event Channel 0 Multiplexer bit 5 mask
.equ EVSYS_CHMUX5_bp = 5 ; Event Channel 0 Multiplexer bit 5 position
.equ EVSYS_CHMUX6_bm = (1<<6) ; Event Channel 0 Multiplexer bit 6 mask
.equ EVSYS_CHMUX6_bp = 6 ; Event Channel 0 Multiplexer bit 6 position
.equ EVSYS_CHMUX7_bm = (1<<7) ; Event Channel 0 Multiplexer bit 7 mask
.equ EVSYS_CHMUX7_bp = 7 ; Event Channel 0 Multiplexer bit 7 position

; EVSYS_CH1MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH2MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH3MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH4MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH5MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH6MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH7MUX masks
; Masks for CHMUX aready defined

; EVSYS_CH0CTRL masks
.equ EVSYS_QDIRM_gm = 0x60 ; Quadrature Decoder Index Recognition Mode group mask
.equ EVSYS_QDIRM_gp = 5 ; Quadrature Decoder Index Recognition Mode group position
.equ EVSYS_QDIRM0_bm = (1<<5) ; Quadrature Decoder Index Recognition Mode bit 0 mask
.equ EVSYS_QDIRM0_bp = 5 ; Quadrature Decoder Index Recognition Mode bit 0 position
.equ EVSYS_QDIRM1_bm = (1<<6) ; Quadrature Decoder Index Recognition Mode bit 1 mask
.equ EVSYS_QDIRM1_bp = 6 ; Quadrature Decoder Index Recognition Mode bit 1 position
.equ EVSYS_QDIEN_bm = 0x10 ; Quadrature Decoder Index Enable bit mask
.equ EVSYS_QDIEN_bp = 4 ; Quadrature Decoder Index Enable bit position
.equ EVSYS_QDEN_bm = 0x08 ; Quadrature Decoder Enable bit mask
.equ EVSYS_QDEN_bp = 3 ; Quadrature Decoder Enable bit position
.equ EVSYS_DIGFILT_gm = 0x07 ; Digital Filter group mask
.equ EVSYS_DIGFILT_gp = 0 ; Digital Filter group position
.equ EVSYS_DIGFILT0_bm = (1<<0) ; Digital Filter bit 0 mask
.equ EVSYS_DIGFILT0_bp = 0 ; Digital Filter bit 0 position
.equ EVSYS_DIGFILT1_bm = (1<<1) ; Digital Filter bit 1 mask
.equ EVSYS_DIGFILT1_bp = 1 ; Digital Filter bit 1 position
.equ EVSYS_DIGFILT2_bm = (1<<2) ; Digital Filter bit 2 mask
.equ EVSYS_DIGFILT2_bp = 2 ; Digital Filter bit 2 position

; EVSYS_CH1CTRL masks
; Masks for DIGFILT aready defined

; EVSYS_CH2CTRL masks
; Masks for QDIRM aready defined
; Masks for QDIEN aready defined
; Masks for QDEN aready defined
; Masks for DIGFILT aready defined

; EVSYS_CH3CTRL masks
; Masks for DIGFILT aready defined

; EVSYS_CH4CTRL masks
; Masks for QDIRM aready defined
; Masks for QDIEN aready defined
; Masks for QDEN aready defined
; Masks for DIGFILT aready defined

; EVSYS_CH5CTRL masks
; Masks for DIGFILT aready defined

; EVSYS_CH6CTRL masks
; Masks for DIGFILT aready defined

; EVSYS_CH7CTRL masks
; Masks for DIGFILT aready defined
 
; Quadrature Decoder Index Recognition Mode
.equ EVSYS_QDIRM_00_gc = (0x00<<5) ; QDPH0 = 0, QDPH90 = 0
.equ EVSYS_QDIRM_01_gc = (0x01<<5) ; QDPH0 = 0, QDPH90 = 1
.equ EVSYS_QDIRM_10_gc = (0x02<<5) ; QDPH0 = 1, QDPH90 = 0
.equ EVSYS_QDIRM_11_gc = (0x03<<5) ; QDPH0 = 1, QDPH90 = 1

; Digital filter coefficient
.equ EVSYS_DIGFILT_1SAMPLE_gc = (0x00<<0) ; 1 SAMPLE
.equ EVSYS_DIGFILT_2SAMPLES_gc = (0x01<<0) ; 2 SAMPLES
.equ EVSYS_DIGFILT_3SAMPLES_gc = (0x02<<0) ; 3 SAMPLES
.equ EVSYS_DIGFILT_4SAMPLES_gc = (0x03<<0) ; 4 SAMPLES
.equ EVSYS_DIGFILT_5SAMPLES_gc = (0x04<<0) ; 5 SAMPLES
.equ EVSYS_DIGFILT_6SAMPLES_gc = (0x05<<0) ; 6 SAMPLES
.equ EVSYS_DIGFILT_7SAMPLES_gc = (0x06<<0) ; 7 SAMPLES
.equ EVSYS_DIGFILT_8SAMPLES_gc = (0x07<<0) ; 8 SAMPLES

; Event Channel multiplexer input selection
.equ EVSYS_CHMUX_OFF_gc = (0x00<<0) ; Off
.equ EVSYS_CHMUX_RTC_OVF_gc = (0x08<<0) ; RTC Overflow
.equ EVSYS_CHMUX_RTC_CMP_gc = (0x09<<0) ; RTC Compare Match
.equ EVSYS_CHMUX_USB_gc = (0x0A<<0) ; USB Setup, SOF, CRC error and UNF/OVF
.equ EVSYS_CHMUX_ACA_CH0_gc = (0x10<<0) ; Analog Comparator A Channel 0
.equ EVSYS_CHMUX_ACA_CH1_gc = (0x11<<0) ; Analog Comparator A Channel 1
.equ EVSYS_CHMUX_ACA_WIN_gc = (0x12<<0) ; Analog Comparator A Window
.equ EVSYS_CHMUX_ACB_CH0_gc = (0x13<<0) ; Analog Comparator B Channel 0
.equ EVSYS_CHMUX_ACB_CH1_gc = (0x14<<0) ; Analog Comparator B Channel 1
.equ EVSYS_CHMUX_ACB_WIN_gc = (0x15<<0) ; Analog Comparator B Window
.equ EVSYS_CHMUX_ADCA_CH0_gc = (0x20<<0) ; ADC A Channel 0
.equ EVSYS_CHMUX_ADCA_CH1_gc = (0x21<<0) ; ADC A Channel 1
.equ EVSYS_CHMUX_ADCA_CH2_gc = (0x22<<0) ; ADC A Channel 2
.equ EVSYS_CHMUX_ADCA_CH3_gc = (0x23<<0) ; ADC A Channel 3
.equ EVSYS_CHMUX_ADCB_CH0_gc = (0x24<<0) ; ADC B Channel 0
.equ EVSYS_CHMUX_ADCB_CH1_gc = (0x25<<0) ; ADC B Channel 1
.equ EVSYS_CHMUX_ADCB_CH2_gc = (0x26<<0) ; ADC B Channel 2
.equ EVSYS_CHMUX_ADCB_CH3_gc = (0x27<<0) ; ADC B Channel 3
.equ EVSYS_CHMUX_PORTA_PIN0_gc = (0x50<<0) ; Port A, Pin0
.equ EVSYS_CHMUX_PORTA_PIN1_gc = (0x51<<0) ; Port A, Pin1
.equ EVSYS_CHMUX_PORTA_PIN2_gc = (0x52<<0) ; Port A, Pin2
.equ EVSYS_CHMUX_PORTA_PIN3_gc = (0x53<<0) ; Port A, Pin3
.equ EVSYS_CHMUX_PORTA_PIN4_gc = (0x54<<0) ; Port A, Pin4
.equ EVSYS_CHMUX_PORTA_PIN5_gc = (0x55<<0) ; Port A, Pin5
.equ EVSYS_CHMUX_PORTA_PIN6_gc = (0x56<<0) ; Port A, Pin6
.equ EVSYS_CHMUX_PORTA_PIN7_gc = (0x57<<0) ; Port A, Pin7
.equ EVSYS_CHMUX_PORTB_PIN0_gc = (0x58<<0) ; Port B, Pin0
.equ EVSYS_CHMUX_PORTB_PIN1_gc = (0x59<<0) ; Port B, Pin1
.equ EVSYS_CHMUX_PORTB_PIN2_gc = (0x5A<<0) ; Port B, Pin2
.equ EVSYS_CHMUX_PORTB_PIN3_gc = (0x5B<<0) ; Port B, Pin3
.equ EVSYS_CHMUX_PORTB_PIN4_gc = (0x5C<<0) ; Port B, Pin4
.equ EVSYS_CHMUX_PORTB_PIN5_gc = (0x5D<<0) ; Port B, Pin5
.equ EVSYS_CHMUX_PORTB_PIN6_gc = (0x5E<<0) ; Port B, Pin6
.equ EVSYS_CHMUX_PORTB_PIN7_gc = (0x5F<<0) ; Port B, Pin7
.equ EVSYS_CHMUX_PORTC_PIN0_gc = (0x60<<0) ; Port C, Pin0
.equ EVSYS_CHMUX_PORTC_PIN1_gc = (0x61<<0) ; Port C, Pin1
.equ EVSYS_CHMUX_PORTC_PIN2_gc = (0x62<<0) ; Port C, Pin2
.equ EVSYS_CHMUX_PORTC_PIN3_gc = (0x63<<0) ; Port C, Pin3
.equ EVSYS_CHMUX_PORTC_PIN4_gc = (0x64<<0) ; Port C, Pin4
.equ EVSYS_CHMUX_PORTC_PIN5_gc = (0x65<<0) ; Port C, Pin5
.equ EVSYS_CHMUX_PORTC_PIN6_gc = (0x66<<0) ; Port C, Pin6
.equ EVSYS_CHMUX_PORTC_PIN7_gc = (0x67<<0) ; Port C, Pin7
.equ EVSYS_CHMUX_PORTD_PIN0_gc = (0x68<<0) ; Port D, Pin0
.equ EVSYS_CHMUX_PORTD_PIN1_gc = (0x69<<0) ; Port D, Pin1
.equ EVSYS_CHMUX_PORTD_PIN2_gc = (0x6A<<0) ; Port D, Pin2
.equ EVSYS_CHMUX_PORTD_PIN3_gc = (0x6B<<0) ; Port D, Pin3
.equ EVSYS_CHMUX_PORTD_PIN4_gc = (0x6C<<0) ; Port D, Pin4
.equ EVSYS_CHMUX_PORTD_PIN5_gc = (0x6D<<0) ; Port D, Pin5
.equ EVSYS_CHMUX_PORTD_PIN6_gc = (0x6E<<0) ; Port D, Pin6
.equ EVSYS_CHMUX_PORTD_PIN7_gc = (0x6F<<0) ; Port D, Pin7
.equ EVSYS_CHMUX_PORTE_PIN0_gc = (0x70<<0) ; Port E, Pin0
.equ EVSYS_CHMUX_PORTE_PIN1_gc = (0x71<<0) ; Port E, Pin1
.equ EVSYS_CHMUX_PORTE_PIN2_gc = (0x72<<0) ; Port E, Pin2
.equ EVSYS_CHMUX_PORTE_PIN3_gc = (0x73<<0) ; Port E, Pin3
.equ EVSYS_CHMUX_PORTE_PIN4_gc = (0x74<<0) ; Port E, Pin4
.equ EVSYS_CHMUX_PORTE_PIN5_gc = (0x75<<0) ; Port E, Pin5
.equ EVSYS_CHMUX_PORTE_PIN6_gc = (0x76<<0) ; Port E, Pin6
.equ EVSYS_CHMUX_PORTE_PIN7_gc = (0x77<<0) ; Port E, Pin7
.equ EVSYS_CHMUX_PORTF_PIN0_gc = (0x78<<0) ; Port F, Pin0
.equ EVSYS_CHMUX_PORTF_PIN1_gc = (0x79<<0) ; Port F, Pin1
.equ EVSYS_CHMUX_PORTF_PIN2_gc = (0x7A<<0) ; Port F, Pin2
.equ EVSYS_CHMUX_PORTF_PIN3_gc = (0x7B<<0) ; Port F, Pin3
.equ EVSYS_CHMUX_PORTF_PIN4_gc = (0x7C<<0) ; Port F, Pin4
.equ EVSYS_CHMUX_PORTF_PIN5_gc = (0x7D<<0) ; Port F, Pin5
.equ EVSYS_CHMUX_PORTF_PIN6_gc = (0x7E<<0) ; Port F, Pin6
.equ EVSYS_CHMUX_PORTF_PIN7_gc = (0x7F<<0) ; Port F, Pin7
.equ EVSYS_CHMUX_PRESCALER_1_gc = (0x80<<0) ; Prescaler, divide by 1
.equ EVSYS_CHMUX_PRESCALER_2_gc = (0x81<<0) ; Prescaler, divide by 2
.equ EVSYS_CHMUX_PRESCALER_4_gc = (0x82<<0) ; Prescaler, divide by 4
.equ EVSYS_CHMUX_PRESCALER_8_gc = (0x83<<0) ; Prescaler, divide by 8
.equ EVSYS_CHMUX_PRESCALER_16_gc = (0x84<<0) ; Prescaler, divide by 16
.equ EVSYS_CHMUX_PRESCALER_32_gc = (0x85<<0) ; Prescaler, divide by 32
.equ EVSYS_CHMUX_PRESCALER_64_gc = (0x86<<0) ; Prescaler, divide by 64
.equ EVSYS_CHMUX_PRESCALER_128_gc = (0x87<<0) ; Prescaler, divide by 128
.equ EVSYS_CHMUX_PRESCALER_256_gc = (0x88<<0) ; Prescaler, divide by 256
.equ EVSYS_CHMUX_PRESCALER_512_gc = (0x89<<0) ; Prescaler, divide by 512
.equ EVSYS_CHMUX_PRESCALER_1024_gc = (0x8A<<0) ; Prescaler, divide by 1024
.equ EVSYS_CHMUX_PRESCALER_2048_gc = (0x8B<<0) ; Prescaler, divide by 2048
.equ EVSYS_CHMUX_PRESCALER_4096_gc = (0x8C<<0) ; Prescaler, divide by 4096
.equ EVSYS_CHMUX_PRESCALER_8192_gc = (0x8D<<0) ; Prescaler, divide by 8192
.equ EVSYS_CHMUX_PRESCALER_16384_gc = (0x8E<<0) ; Prescaler, divide by 16384
.equ EVSYS_CHMUX_PRESCALER_32768_gc = (0x8F<<0) ; Prescaler, divide by 32768
.equ EVSYS_CHMUX_TCC0_OVF_gc = (0xC0<<0) ; Timer/Counter C0 Overflow
.equ EVSYS_CHMUX_TCC0_ERR_gc = (0xC1<<0) ; Timer/Counter C0 Error
.equ EVSYS_CHMUX_TCC0_CCA_gc = (0xC4<<0) ; Timer/Counter C0 Compare or Capture A
.equ EVSYS_CHMUX_TCC0_CCB_gc = (0xC5<<0) ; Timer/Counter C0 Compare or Capture B
.equ EVSYS_CHMUX_TCC0_CCC_gc = (0xC6<<0) ; Timer/Counter C0 Compare or Capture C
.equ EVSYS_CHMUX_TCC0_CCD_gc = (0xC7<<0) ; Timer/Counter C0 Compare or Capture D
.equ EVSYS_CHMUX_TCC1_OVF_gc = (0xC8<<0) ; Timer/Counter C1 Overflow
.equ EVSYS_CHMUX_TCC1_ERR_gc = (0xC9<<0) ; Timer/Counter C1 Error
.equ EVSYS_CHMUX_TCC1_CCA_gc = (0xCC<<0) ; Timer/Counter C1 Compare or Capture A
.equ EVSYS_CHMUX_TCC1_CCB_gc = (0xCD<<0) ; Timer/Counter C1 Compare or Capture B
.equ EVSYS_CHMUX_TCD0_OVF_gc = (0xD0<<0) ; Timer/Counter D0 Overflow
.equ EVSYS_CHMUX_TCD0_ERR_gc = (0xD1<<0) ; Timer/Counter D0 Error
.equ EVSYS_CHMUX_TCD0_CCA_gc = (0xD4<<0) ; Timer/Counter D0 Compare or Capture A
.equ EVSYS_CHMUX_TCD0_CCB_gc = (0xD5<<0) ; Timer/Counter D0 Compare or Capture B
.equ EVSYS_CHMUX_TCD0_CCC_gc = (0xD6<<0) ; Timer/Counter D0 Compare or Capture C
.equ EVSYS_CHMUX_TCD0_CCD_gc = (0xD7<<0) ; Timer/Counter D0 Compare or Capture D
.equ EVSYS_CHMUX_TCD1_OVF_gc = (0xD8<<0) ; Timer/Counter D1 Overflow
.equ EVSYS_CHMUX_TCD1_ERR_gc = (0xD9<<0) ; Timer/Counter D1 Error
.equ EVSYS_CHMUX_TCD1_CCA_gc = (0xDC<<0) ; Timer/Counter D1 Compare or Capture A
.equ EVSYS_CHMUX_TCD1_CCB_gc = (0xDD<<0) ; Timer/Counter D1 Compare or Capture B
.equ EVSYS_CHMUX_TCE0_OVF_gc = (0xE0<<0) ; Timer/Counter E0 Overflow
.equ EVSYS_CHMUX_TCE0_ERR_gc = (0xE1<<0) ; Timer/Counter E0 Error
.equ EVSYS_CHMUX_TCE0_CCA_gc = (0xE4<<0) ; Timer/Counter E0 Compare or Capture A
.equ EVSYS_CHMUX_TCE0_CCB_gc = (0xE5<<0) ; Timer/Counter E0 Compare or Capture B
.equ EVSYS_CHMUX_TCE0_CCC_gc = (0xE6<<0) ; Timer/Counter E0 Compare or Capture C
.equ EVSYS_CHMUX_TCE0_CCD_gc = (0xE7<<0) ; Timer/Counter E0 Compare or Capture D
.equ EVSYS_CHMUX_TCE1_OVF_gc = (0xE8<<0) ; Timer/Counter E1 Overflow
.equ EVSYS_CHMUX_TCE1_ERR_gc = (0xE9<<0) ; Timer/Counter E1 Error
.equ EVSYS_CHMUX_TCE1_CCA_gc = (0xEC<<0) ; Timer/Counter E1 Compare or Capture A
.equ EVSYS_CHMUX_TCE1_CCB_gc = (0xED<<0) ; Timer/Counter E1 Compare or Capture B
.equ EVSYS_CHMUX_TCF0_OVF_gc = (0xF0<<0) ; Timer/Counter F0 Overflow
.equ EVSYS_CHMUX_TCF0_ERR_gc = (0xF1<<0) ; Timer/Counter F0 Error
.equ EVSYS_CHMUX_TCF0_CCA_gc = (0xF4<<0) ; Timer/Counter F0 Compare or Capture A
.equ EVSYS_CHMUX_TCF0_CCB_gc = (0xF5<<0) ; Timer/Counter F0 Compare or Capture B
.equ EVSYS_CHMUX_TCF0_CCC_gc = (0xF6<<0) ; Timer/Counter F0 Compare or Capture C
.equ EVSYS_CHMUX_TCF0_CCD_gc = (0xF7<<0) ; Timer/Counter F0 Compare or Capture D
.equ EVSYS_CHMUX_TCF1_OVF_gc = (0xF8<<0) ; Timer/Counter F1 Overflow
.equ EVSYS_CHMUX_TCF1_ERR_gc = (0xF9<<0) ; Timer/Counter F1 Error
.equ EVSYS_CHMUX_TCF1_CCA_gc = (0xFC<<0) ; Timer/Counter F1 Compare or Capture A
.equ EVSYS_CHMUX_TCF1_CCB_gc = (0xFD<<0) ; Timer/Counter F1 Compare or Capture B


;***************************************************************************
;** NVM - Non Volatile Memory Controller
;***************************************************************************/

; NVM_CMD masks
.equ NVM_CMD_gm = 0x7F ; Command group mask
.equ NVM_CMD_gp = 0 ; Command group position
.equ NVM_CMD0_bm = (1<<0) ; Command bit 0 mask
.equ NVM_CMD0_bp = 0 ; Command bit 0 position
.equ NVM_CMD1_bm = (1<<1) ; Command bit 1 mask
.equ NVM_CMD1_bp = 1 ; Command bit 1 position
.equ NVM_CMD2_bm = (1<<2) ; Command bit 2 mask
.equ NVM_CMD2_bp = 2 ; Command bit 2 position
.equ NVM_CMD3_bm = (1<<3) ; Command bit 3 mask
.equ NVM_CMD3_bp = 3 ; Command bit 3 position
.equ NVM_CMD4_bm = (1<<4) ; Command bit 4 mask
.equ NVM_CMD4_bp = 4 ; Command bit 4 position
.equ NVM_CMD5_bm = (1<<5) ; Command bit 5 mask
.equ NVM_CMD5_bp = 5 ; Command bit 5 position
.equ NVM_CMD6_bm = (1<<6) ; Command bit 6 mask
.equ NVM_CMD6_bp = 6 ; Command bit 6 position

; NVM_CTRLA masks
.equ NVM_CMDEX_bm = 0x01 ; Command Execute bit mask
.equ NVM_CMDEX_bp = 0 ; Command Execute bit position

; NVM_CTRLB masks
.equ NVM_EEMAPEN_bm = 0x08 ; EEPROM Mapping Enable bit mask
.equ NVM_EEMAPEN_bp = 3 ; EEPROM Mapping Enable bit position
.equ NVM_FPRM_bm = 0x04 ; Flash Power Reduction Enable bit mask
.equ NVM_FPRM_bp = 2 ; Flash Power Reduction Enable bit position
.equ NVM_EPRM_bm = 0x02 ; EEPROM Power Reduction Enable bit mask
.equ NVM_EPRM_bp = 1 ; EEPROM Power Reduction Enable bit position
.equ NVM_SPMLOCK_bm = 0x01 ; SPM Lock bit mask
.equ NVM_SPMLOCK_bp = 0 ; SPM Lock bit position

; NVM_INTCTRL masks
.equ NVM_SPMLVL_gm = 0x0C ; SPM Interrupt Level group mask
.equ NVM_SPMLVL_gp = 2 ; SPM Interrupt Level group position
.equ NVM_SPMLVL0_bm = (1<<2) ; SPM Interrupt Level bit 0 mask
.equ NVM_SPMLVL0_bp = 2 ; SPM Interrupt Level bit 0 position
.equ NVM_SPMLVL1_bm = (1<<3) ; SPM Interrupt Level bit 1 mask
.equ NVM_SPMLVL1_bp = 3 ; SPM Interrupt Level bit 1 position
.equ NVM_EELVL_gm = 0x03 ; EEPROM Interrupt Level group mask
.equ NVM_EELVL_gp = 0 ; EEPROM Interrupt Level group position
.equ NVM_EELVL0_bm = (1<<0) ; EEPROM Interrupt Level bit 0 mask
.equ NVM_EELVL0_bp = 0 ; EEPROM Interrupt Level bit 0 position
.equ NVM_EELVL1_bm = (1<<1) ; EEPROM Interrupt Level bit 1 mask
.equ NVM_EELVL1_bp = 1 ; EEPROM Interrupt Level bit 1 position

; NVM_STATUS masks
.equ NVM_NVMBUSY_bm = 0x80 ; Non-volatile Memory Busy bit mask
.equ NVM_NVMBUSY_bp = 7 ; Non-volatile Memory Busy bit position
.equ NVM_FBUSY_bm = 0x40 ; Flash Memory Busy bit mask
.equ NVM_FBUSY_bp = 6 ; Flash Memory Busy bit position
.equ NVM_EELOAD_bm = 0x02 ; EEPROM Page Buffer Active Loading bit mask
.equ NVM_EELOAD_bp = 1 ; EEPROM Page Buffer Active Loading bit position
.equ NVM_FLOAD_bm = 0x01 ; Flash Page Buffer Active Loading bit mask
.equ NVM_FLOAD_bp = 0 ; Flash Page Buffer Active Loading bit position

; NVM_LOCKBITS masks
.equ NVM_BLBB_gm = 0xC0 ; Boot Lock Bits - Boot Section group mask
.equ NVM_BLBB_gp = 6 ; Boot Lock Bits - Boot Section group position
.equ NVM_BLBB0_bm = (1<<6) ; Boot Lock Bits - Boot Section bit 0 mask
.equ NVM_BLBB0_bp = 6 ; Boot Lock Bits - Boot Section bit 0 position
.equ NVM_BLBB1_bm = (1<<7) ; Boot Lock Bits - Boot Section bit 1 mask
.equ NVM_BLBB1_bp = 7 ; Boot Lock Bits - Boot Section bit 1 position
.equ NVM_BLBA_gm = 0x30 ; Boot Lock Bits - Application Section group mask
.equ NVM_BLBA_gp = 4 ; Boot Lock Bits - Application Section group position
.equ NVM_BLBA0_bm = (1<<4) ; Boot Lock Bits - Application Section bit 0 mask
.equ NVM_BLBA0_bp = 4 ; Boot Lock Bits - Application Section bit 0 position
.equ NVM_BLBA1_bm = (1<<5) ; Boot Lock Bits - Application Section bit 1 mask
.equ NVM_BLBA1_bp = 5 ; Boot Lock Bits - Application Section bit 1 position
.equ NVM_BLBAT_gm = 0x0C ; Boot Lock Bits - Application Table group mask
.equ NVM_BLBAT_gp = 2 ; Boot Lock Bits - Application Table group position
.equ NVM_BLBAT0_bm = (1<<2) ; Boot Lock Bits - Application Table bit 0 mask
.equ NVM_BLBAT0_bp = 2 ; Boot Lock Bits - Application Table bit 0 position
.equ NVM_BLBAT1_bm = (1<<3) ; Boot Lock Bits - Application Table bit 1 mask
.equ NVM_BLBAT1_bp = 3 ; Boot Lock Bits - Application Table bit 1 position
.equ NVM_LB_gm = 0x03 ; Lock Bits group mask
.equ NVM_LB_gp = 0 ; Lock Bits group position
.equ NVM_LB0_bm = (1<<0) ; Lock Bits bit 0 mask
.equ NVM_LB0_bp = 0 ; Lock Bits bit 0 position
.equ NVM_LB1_bm = (1<<1) ; Lock Bits bit 1 mask
.equ NVM_LB1_bp = 1 ; Lock Bits bit 1 position
 
; NVM Command
.equ NVM_CMD_NO_OPERATION_gc = (0x00<<0) ; Noop/Ordinary LPM
.equ NVM_CMD_READ_USER_SIG_ROW_gc = (0x01<<0) ; Read user signature row
.equ NVM_CMD_READ_CALIB_ROW_gc = (0x02<<0) ; Read calibration row
.equ NVM_CMD_READ_EEPROM_gc = (0x06<<0) ; Read EEPROM
.equ NVM_CMD_READ_FUSES_gc = (0x07<<0) ; Read fuse byte
.equ NVM_CMD_WRITE_LOCK_BITS_gc = (0x08<<0) ; Write lock bits
.equ NVM_CMD_ERASE_USER_SIG_ROW_gc = (0x18<<0) ; Erase user signature row
.equ NVM_CMD_WRITE_USER_SIG_ROW_gc = (0x1A<<0) ; Write user signature row
.equ NVM_CMD_ERASE_APP_gc = (0x20<<0) ; Erase Application Section
.equ NVM_CMD_ERASE_APP_PAGE_gc = (0x22<<0) ; Erase Application Section page
.equ NVM_CMD_LOAD_FLASH_BUFFER_gc = (0x23<<0) ; Load Flash page buffer
.equ NVM_CMD_WRITE_APP_PAGE_gc = (0x24<<0) ; Write Application Section page
.equ NVM_CMD_ERASE_WRITE_APP_PAGE_gc = (0x25<<0) ; Erase-and-write Application Section page
.equ NVM_CMD_ERASE_FLASH_BUFFER_gc = (0x26<<0) ; Erase/flush Flash page buffer
.equ NVM_CMD_ERASE_BOOT_PAGE_gc = (0x2A<<0) ; Erase Boot Section page
.equ NVM_CMD_ERASE_FLASH_PAGE_gc = (0x2B<<0) ; Erase Flash Page
.equ NVM_CMD_WRITE_BOOT_PAGE_gc = (0x2C<<0) ; Write Boot Section page
.equ NVM_CMD_ERASE_WRITE_BOOT_PAGE_gc = (0x2D<<0) ; Erase-and-write Boot Section page
.equ NVM_CMD_WRITE_FLASH_PAGE_gc = (0x2E<<0) ; Write Flash Page
.equ NVM_CMD_ERASE_WRITE_FLASH_PAGE_gc = (0x2F<<0) ; Erase-and-write Flash Page
.equ NVM_CMD_ERASE_EEPROM_gc = (0x30<<0) ; Erase EEPROM
.equ NVM_CMD_ERASE_EEPROM_PAGE_gc = (0x32<<0) ; Erase EEPROM page
.equ NVM_CMD_LOAD_EEPROM_BUFFER_gc = (0x33<<0) ; Load EEPROM page buffer
.equ NVM_CMD_WRITE_EEPROM_PAGE_gc = (0x34<<0) ; Write EEPROM page
.equ NVM_CMD_ERASE_WRITE_EEPROM_PAGE_gc = (0x35<<0) ; Erase-and-write EEPROM page
.equ NVM_CMD_ERASE_EEPROM_BUFFER_gc = (0x36<<0) ; Erase/flush EEPROM page buffer
.equ NVM_CMD_APP_CRC_gc = (0x38<<0) ; Application section CRC
.equ NVM_CMD_BOOT_CRC_gc = (0x39<<0) ;  Boot Section CRC
.equ NVM_CMD_FLASH_RANGE_CRC_gc = (0x3A<<0) ; Flash Range CRC
.equ NVM_CMD_CHIP_ERASE_gc = (0x40<<0) ; Erase Chip
.equ NVM_CMD_READ_NVM_gc = (0x43<<0) ; Read NVM
.equ NVM_CMD_WRITE_FUSE_gc = (0x4C<<0) ; Write Fuse byte
.equ NVM_CMD_ERASE_BOOT_gc = (0x68<<0) ; Erase Boot Section
.equ NVM_CMD_FLASH_CRC_gc = (0x78<<0) ; Flash CRC

; SPM ready interrupt level
.equ NVM_SPMLVL_OFF_gc = (0x00<<2) ; Interrupt disabled
.equ NVM_SPMLVL_LO_gc = (0x01<<2) ; Low level
.equ NVM_SPMLVL_MED_gc = (0x02<<2) ; Medium level
.equ NVM_SPMLVL_HI_gc = (0x03<<2) ; High level

; EEPROM ready interrupt level
.equ NVM_EELVL_OFF_gc = (0x00<<0) ; Interrupt disabled
.equ NVM_EELVL_LO_gc = (0x01<<0) ; Low level
.equ NVM_EELVL_MED_gc = (0x02<<0) ; Medium level
.equ NVM_EELVL_HI_gc = (0x03<<0) ; High level

; Boot lock bits - boot setcion
.equ NVM_BLBB_RWLOCK_gc = (0x00<<6) ; Read and write not allowed
.equ NVM_BLBB_RLOCK_gc = (0x01<<6) ; Read not allowed
.equ NVM_BLBB_WLOCK_gc = (0x02<<6) ; Write not allowed
.equ NVM_BLBB_NOLOCK_gc = (0x03<<6) ; No locks

; Boot lock bits - application section
.equ NVM_BLBA_RWLOCK_gc = (0x00<<4) ; Read and write not allowed
.equ NVM_BLBA_RLOCK_gc = (0x01<<4) ; Read not allowed
.equ NVM_BLBA_WLOCK_gc = (0x02<<4) ; Write not allowed
.equ NVM_BLBA_NOLOCK_gc = (0x03<<4) ; No locks

; Boot lock bits - application table section
.equ NVM_BLBAT_RWLOCK_gc = (0x00<<2) ; Read and write not allowed
.equ NVM_BLBAT_RLOCK_gc = (0x01<<2) ; Read not allowed
.equ NVM_BLBAT_WLOCK_gc = (0x02<<2) ; Write not allowed
.equ NVM_BLBAT_NOLOCK_gc = (0x03<<2) ; No locks

; Lock bits
.equ NVM_LB_RWLOCK_gc = (0x00<<0) ; Read and write not allowed
.equ NVM_LB_WLOCK_gc = (0x02<<0) ; Write not allowed
.equ NVM_LB_NOLOCK_gc = (0x03<<0) ; No locks


;***************************************************************************
;** ADC - Analog/Digital Converter
;***************************************************************************/

; ADC_CH_CTRL masks
.equ ADC_CH_START_bm = 0x80 ; Channel Start Conversion bit mask
.equ ADC_CH_START_bp = 7 ; Channel Start Conversion bit position
.equ ADC_CH_GAIN_gm = 0x1C ; Gain Factor group mask
.equ ADC_CH_GAIN_gp = 2 ; Gain Factor group position
.equ ADC_CH_GAIN0_bm = (1<<2) ; Gain Factor bit 0 mask
.equ ADC_CH_GAIN0_bp = 2 ; Gain Factor bit 0 position
.equ ADC_CH_GAIN1_bm = (1<<3) ; Gain Factor bit 1 mask
.equ ADC_CH_GAIN1_bp = 3 ; Gain Factor bit 1 position
.equ ADC_CH_GAIN2_bm = (1<<4) ; Gain Factor bit 2 mask
.equ ADC_CH_GAIN2_bp = 4 ; Gain Factor bit 2 position
.equ ADC_CH_INPUTMODE_gm = 0x03 ; Input Mode Select group mask
.equ ADC_CH_INPUTMODE_gp = 0 ; Input Mode Select group position
.equ ADC_CH_INPUTMODE0_bm = (1<<0) ; Input Mode Select bit 0 mask
.equ ADC_CH_INPUTMODE0_bp = 0 ; Input Mode Select bit 0 position
.equ ADC_CH_INPUTMODE1_bm = (1<<1) ; Input Mode Select bit 1 mask
.equ ADC_CH_INPUTMODE1_bp = 1 ; Input Mode Select bit 1 position

; ADC_CH_MUXCTRL masks
.equ ADC_CH_MUXPOS_gm = 0x78 ; MUX selection on Positive ADC input group mask
.equ ADC_CH_MUXPOS_gp = 3 ; MUX selection on Positive ADC input group position
.equ ADC_CH_MUXPOS0_bm = (1<<3) ; MUX selection on Positive ADC input bit 0 mask
.equ ADC_CH_MUXPOS0_bp = 3 ; MUX selection on Positive ADC input bit 0 position
.equ ADC_CH_MUXPOS1_bm = (1<<4) ; MUX selection on Positive ADC input bit 1 mask
.equ ADC_CH_MUXPOS1_bp = 4 ; MUX selection on Positive ADC input bit 1 position
.equ ADC_CH_MUXPOS2_bm = (1<<5) ; MUX selection on Positive ADC input bit 2 mask
.equ ADC_CH_MUXPOS2_bp = 5 ; MUX selection on Positive ADC input bit 2 position
.equ ADC_CH_MUXPOS3_bm = (1<<6) ; MUX selection on Positive ADC input bit 3 mask
.equ ADC_CH_MUXPOS3_bp = 6 ; MUX selection on Positive ADC input bit 3 position
.equ ADC_CH_MUXINT_gm = 0x78 ; MUX selection on Internal ADC input group mask
.equ ADC_CH_MUXINT_gp = 3 ; MUX selection on Internal ADC input group position
.equ ADC_CH_MUXINT0_bm = (1<<3) ; MUX selection on Internal ADC input bit 0 mask
.equ ADC_CH_MUXINT0_bp = 3 ; MUX selection on Internal ADC input bit 0 position
.equ ADC_CH_MUXINT1_bm = (1<<4) ; MUX selection on Internal ADC input bit 1 mask
.equ ADC_CH_MUXINT1_bp = 4 ; MUX selection on Internal ADC input bit 1 position
.equ ADC_CH_MUXINT2_bm = (1<<5) ; MUX selection on Internal ADC input bit 2 mask
.equ ADC_CH_MUXINT2_bp = 5 ; MUX selection on Internal ADC input bit 2 position
.equ ADC_CH_MUXINT3_bm = (1<<6) ; MUX selection on Internal ADC input bit 3 mask
.equ ADC_CH_MUXINT3_bp = 6 ; MUX selection on Internal ADC input bit 3 position
.equ ADC_CH_MUXNEG_gm = 0x03 ; MUX selection on Negative ADC input group mask
.equ ADC_CH_MUXNEG_gp = 0 ; MUX selection on Negative ADC input group position
.equ ADC_CH_MUXNEG0_bm = (1<<0) ; MUX selection on Negative ADC input bit 0 mask
.equ ADC_CH_MUXNEG0_bp = 0 ; MUX selection on Negative ADC input bit 0 position
.equ ADC_CH_MUXNEG1_bm = (1<<1) ; MUX selection on Negative ADC input bit 1 mask
.equ ADC_CH_MUXNEG1_bp = 1 ; MUX selection on Negative ADC input bit 1 position

; ADC_CH_INTCTRL masks
.equ ADC_CH_INTMODE_gm = 0x0C ; Interrupt Mode group mask
.equ ADC_CH_INTMODE_gp = 2 ; Interrupt Mode group position
.equ ADC_CH_INTMODE0_bm = (1<<2) ; Interrupt Mode bit 0 mask
.equ ADC_CH_INTMODE0_bp = 2 ; Interrupt Mode bit 0 position
.equ ADC_CH_INTMODE1_bm = (1<<3) ; Interrupt Mode bit 1 mask
.equ ADC_CH_INTMODE1_bp = 3 ; Interrupt Mode bit 1 position
.equ ADC_CH_INTLVL_gm = 0x03 ; Interrupt Level group mask
.equ ADC_CH_INTLVL_gp = 0 ; Interrupt Level group position
.equ ADC_CH_INTLVL0_bm = (1<<0) ; Interrupt Level bit 0 mask
.equ ADC_CH_INTLVL0_bp = 0 ; Interrupt Level bit 0 position
.equ ADC_CH_INTLVL1_bm = (1<<1) ; Interrupt Level bit 1 mask
.equ ADC_CH_INTLVL1_bp = 1 ; Interrupt Level bit 1 position

; ADC_CH_INTFLAGS masks
.equ ADC_CH_CHIF_bm = 0x01 ; Channel Interrupt Flag bit mask
.equ ADC_CH_CHIF_bp = 0 ; Channel Interrupt Flag bit position

; ADC_CH_SCAN masks
.equ ADC_CH_OFFSET_gm = 0xF0 ; Positive MUX setting offset group mask
.equ ADC_CH_OFFSET_gp = 4 ; Positive MUX setting offset group position
.equ ADC_CH_OFFSET0_bm = (1<<4) ; Positive MUX setting offset bit 0 mask
.equ ADC_CH_OFFSET0_bp = 4 ; Positive MUX setting offset bit 0 position
.equ ADC_CH_OFFSET1_bm = (1<<5) ; Positive MUX setting offset bit 1 mask
.equ ADC_CH_OFFSET1_bp = 5 ; Positive MUX setting offset bit 1 position
.equ ADC_CH_OFFSET2_bm = (1<<6) ; Positive MUX setting offset bit 2 mask
.equ ADC_CH_OFFSET2_bp = 6 ; Positive MUX setting offset bit 2 position
.equ ADC_CH_OFFSET3_bm = (1<<7) ; Positive MUX setting offset bit 3 mask
.equ ADC_CH_OFFSET3_bp = 7 ; Positive MUX setting offset bit 3 position
.equ ADC_CH_SCANNUM_gm = 0x0F ; Number of Channels included in scan group mask
.equ ADC_CH_SCANNUM_gp = 0 ; Number of Channels included in scan group position
.equ ADC_CH_SCANNUM0_bm = (1<<0) ; Number of Channels included in scan bit 0 mask
.equ ADC_CH_SCANNUM0_bp = 0 ; Number of Channels included in scan bit 0 position
.equ ADC_CH_SCANNUM1_bm = (1<<1) ; Number of Channels included in scan bit 1 mask
.equ ADC_CH_SCANNUM1_bp = 1 ; Number of Channels included in scan bit 1 position
.equ ADC_CH_SCANNUM2_bm = (1<<2) ; Number of Channels included in scan bit 2 mask
.equ ADC_CH_SCANNUM2_bp = 2 ; Number of Channels included in scan bit 2 position
.equ ADC_CH_SCANNUM3_bm = (1<<3) ; Number of Channels included in scan bit 3 mask
.equ ADC_CH_SCANNUM3_bp = 3 ; Number of Channels included in scan bit 3 position

; ADC_CTRLA masks
.equ ADC_DMASEL_gm = 0xC0 ; DMA Selection group mask
.equ ADC_DMASEL_gp = 6 ; DMA Selection group position
.equ ADC_DMASEL0_bm = (1<<6) ; DMA Selection bit 0 mask
.equ ADC_DMASEL0_bp = 6 ; DMA Selection bit 0 position
.equ ADC_DMASEL1_bm = (1<<7) ; DMA Selection bit 1 mask
.equ ADC_DMASEL1_bp = 7 ; DMA Selection bit 1 position
.equ ADC_CH3START_bm = 0x20 ; Channel 3 Start Conversion bit mask
.equ ADC_CH3START_bp = 5 ; Channel 3 Start Conversion bit position
.equ ADC_CH2START_bm = 0x10 ; Channel 2 Start Conversion bit mask
.equ ADC_CH2START_bp = 4 ; Channel 2 Start Conversion bit position
.equ ADC_CH1START_bm = 0x08 ; Channel 1 Start Conversion bit mask
.equ ADC_CH1START_bp = 3 ; Channel 1 Start Conversion bit position
.equ ADC_CH0START_bm = 0x04 ; Channel 0 Start Conversion bit mask
.equ ADC_CH0START_bp = 2 ; Channel 0 Start Conversion bit position
.equ ADC_FLUSH_bm = 0x02 ; Flush Pipeline bit mask
.equ ADC_FLUSH_bp = 1 ; Flush Pipeline bit position
.equ ADC_ENABLE_bm = 0x01 ; Enable ADC bit mask
.equ ADC_ENABLE_bp = 0 ; Enable ADC bit position

; ADC_CTRLB masks
.equ ADC_IMPMODE_bm = 0x80 ; Gain Stage Impedance Mode bit mask
.equ ADC_IMPMODE_bp = 7 ; Gain Stage Impedance Mode bit position
.equ ADC_CURRENT_gm = 0x60 ; Current Limitation group mask
.equ ADC_CURRENT_gp = 5 ; Current Limitation group position
.equ ADC_CURRENT0_bm = (1<<5) ; Current Limitation bit 0 mask
.equ ADC_CURRENT0_bp = 5 ; Current Limitation bit 0 position
.equ ADC_CURRENT1_bm = (1<<6) ; Current Limitation bit 1 mask
.equ ADC_CURRENT1_bp = 6 ; Current Limitation bit 1 position
.equ ADC_CONMODE_bm = 0x10 ; Conversion Mode bit mask
.equ ADC_CONMODE_bp = 4 ; Conversion Mode bit position
.equ ADC_FREERUN_bm = 0x08 ; Free Running Mode Enable bit mask
.equ ADC_FREERUN_bp = 3 ; Free Running Mode Enable bit position
.equ ADC_RESOLUTION_gm = 0x06 ; Result Resolution group mask
.equ ADC_RESOLUTION_gp = 1 ; Result Resolution group position
.equ ADC_RESOLUTION0_bm = (1<<1) ; Result Resolution bit 0 mask
.equ ADC_RESOLUTION0_bp = 1 ; Result Resolution bit 0 position
.equ ADC_RESOLUTION1_bm = (1<<2) ; Result Resolution bit 1 mask
.equ ADC_RESOLUTION1_bp = 2 ; Result Resolution bit 1 position

; ADC_REFCTRL masks
.equ ADC_REFSEL_gm = 0x70 ; Reference Selection group mask
.equ ADC_REFSEL_gp = 4 ; Reference Selection group position
.equ ADC_REFSEL0_bm = (1<<4) ; Reference Selection bit 0 mask
.equ ADC_REFSEL0_bp = 4 ; Reference Selection bit 0 position
.equ ADC_REFSEL1_bm = (1<<5) ; Reference Selection bit 1 mask
.equ ADC_REFSEL1_bp = 5 ; Reference Selection bit 1 position
.equ ADC_REFSEL2_bm = (1<<6) ; Reference Selection bit 2 mask
.equ ADC_REFSEL2_bp = 6 ; Reference Selection bit 2 position
.equ ADC_BANDGAP_bm = 0x02 ; Bandgap enable bit mask
.equ ADC_BANDGAP_bp = 1 ; Bandgap enable bit position
.equ ADC_TEMPREF_bm = 0x01 ; Temperature Reference Enable bit mask
.equ ADC_TEMPREF_bp = 0 ; Temperature Reference Enable bit position

; ADC_EVCTRL masks
.equ ADC_SWEEP_gm = 0xC0 ; Channel Sweep Selection group mask
.equ ADC_SWEEP_gp = 6 ; Channel Sweep Selection group position
.equ ADC_SWEEP0_bm = (1<<6) ; Channel Sweep Selection bit 0 mask
.equ ADC_SWEEP0_bp = 6 ; Channel Sweep Selection bit 0 position
.equ ADC_SWEEP1_bm = (1<<7) ; Channel Sweep Selection bit 1 mask
.equ ADC_SWEEP1_bp = 7 ; Channel Sweep Selection bit 1 position
.equ ADC_EVSEL_gm = 0x38 ; Event Input Select group mask
.equ ADC_EVSEL_gp = 3 ; Event Input Select group position
.equ ADC_EVSEL0_bm = (1<<3) ; Event Input Select bit 0 mask
.equ ADC_EVSEL0_bp = 3 ; Event Input Select bit 0 position
.equ ADC_EVSEL1_bm = (1<<4) ; Event Input Select bit 1 mask
.equ ADC_EVSEL1_bp = 4 ; Event Input Select bit 1 position
.equ ADC_EVSEL2_bm = (1<<5) ; Event Input Select bit 2 mask
.equ ADC_EVSEL2_bp = 5 ; Event Input Select bit 2 position
.equ ADC_EVACT_gm = 0x07 ; Event Action Select group mask
.equ ADC_EVACT_gp = 0 ; Event Action Select group position
.equ ADC_EVACT0_bm = (1<<0) ; Event Action Select bit 0 mask
.equ ADC_EVACT0_bp = 0 ; Event Action Select bit 0 position
.equ ADC_EVACT1_bm = (1<<1) ; Event Action Select bit 1 mask
.equ ADC_EVACT1_bp = 1 ; Event Action Select bit 1 position
.equ ADC_EVACT2_bm = (1<<2) ; Event Action Select bit 2 mask
.equ ADC_EVACT2_bp = 2 ; Event Action Select bit 2 position

; ADC_PRESCALER masks
.equ ADC_PRESCALER_gm = 0x07 ; Clock Prescaler Selection group mask
.equ ADC_PRESCALER_gp = 0 ; Clock Prescaler Selection group position
.equ ADC_PRESCALER0_bm = (1<<0) ; Clock Prescaler Selection bit 0 mask
.equ ADC_PRESCALER0_bp = 0 ; Clock Prescaler Selection bit 0 position
.equ ADC_PRESCALER1_bm = (1<<1) ; Clock Prescaler Selection bit 1 mask
.equ ADC_PRESCALER1_bp = 1 ; Clock Prescaler Selection bit 1 position
.equ ADC_PRESCALER2_bm = (1<<2) ; Clock Prescaler Selection bit 2 mask
.equ ADC_PRESCALER2_bp = 2 ; Clock Prescaler Selection bit 2 position

; ADC_INTFLAGS masks
.equ ADC_CH3IF_bm = 0x08 ; Channel 3 Interrupt Flag bit mask
.equ ADC_CH3IF_bp = 3 ; Channel 3 Interrupt Flag bit position
.equ ADC_CH2IF_bm = 0x04 ; Channel 2 Interrupt Flag bit mask
.equ ADC_CH2IF_bp = 2 ; Channel 2 Interrupt Flag bit position
.equ ADC_CH1IF_bm = 0x02 ; Channel 1 Interrupt Flag bit mask
.equ ADC_CH1IF_bp = 1 ; Channel 1 Interrupt Flag bit position
.equ ADC_CH0IF_bm = 0x01 ; Channel 0 Interrupt Flag bit mask
.equ ADC_CH0IF_bp = 0 ; Channel 0 Interrupt Flag bit position
 
; Positive input multiplexer selection
.equ ADC_CH_MUXPOS_PIN0_gc = (0x00<<3) ; Input pin 0
.equ ADC_CH_MUXPOS_PIN1_gc = (0x01<<3) ; Input pin 1
.equ ADC_CH_MUXPOS_PIN2_gc = (0x02<<3) ; Input pin 2
.equ ADC_CH_MUXPOS_PIN3_gc = (0x03<<3) ; Input pin 3
.equ ADC_CH_MUXPOS_PIN4_gc = (0x04<<3) ; Input pin 4
.equ ADC_CH_MUXPOS_PIN5_gc = (0x05<<3) ; Input pin 5
.equ ADC_CH_MUXPOS_PIN6_gc = (0x06<<3) ; Input pin 6
.equ ADC_CH_MUXPOS_PIN7_gc = (0x07<<3) ; Input pin 7
.equ ADC_CH_MUXPOS_PIN8_gc = (0x08<<3) ; Input pin 8
.equ ADC_CH_MUXPOS_PIN9_gc = (0x09<<3) ; Input pin 9
.equ ADC_CH_MUXPOS_PIN10_gc = (0x0A<<3) ; Input pin 10
.equ ADC_CH_MUXPOS_PIN11_gc = (0x0B<<3) ; Input pin 11
.equ ADC_CH_MUXPOS_PIN12_gc = (0x0C<<3) ; Input pin 12
.equ ADC_CH_MUXPOS_PIN13_gc = (0x0D<<3) ; Input pin 13
.equ ADC_CH_MUXPOS_PIN14_gc = (0x0E<<3) ; Input pin 14
.equ ADC_CH_MUXPOS_PIN15_gc = (0x0F<<3) ; Input pin 15

; Internal input multiplexer selections
.equ ADC_CH_MUXINT_TEMP_gc = (0x00<<3) ; Temperature Reference
.equ ADC_CH_MUXINT_BANDGAP_gc = (0x01<<3) ; Bandgap Reference
.equ ADC_CH_MUXINT_SCALEDVCC_gc = (0x02<<3) ; 1/10 scaled VCC
.equ ADC_CH_MUXINT_DAC_gc = (0x03<<3) ; DAC output

; Negative input multiplexer selection
.equ ADC_CH_MUXNEG_PIN0_gc = (0x00<<0) ; Input pin 0
.equ ADC_CH_MUXNEG_PIN1_gc = (0x01<<0) ; Input pin 1
.equ ADC_CH_MUXNEG_PIN2_gc = (0x02<<0) ; Input pin 2
.equ ADC_CH_MUXNEG_PIN3_gc = (0x03<<0) ; Input pin 3
.equ ADC_CH_MUXNEG_PIN4_gc = (0x00<<0) ; Input pin 4
.equ ADC_CH_MUXNEG_PIN5_gc = (0x01<<0) ; Input pin 5
.equ ADC_CH_MUXNEG_PIN6_gc = (0x02<<0) ; Input pin 6
.equ ADC_CH_MUXNEG_PIN7_gc = (0x03<<0) ; Input pin 7

; Input mode
.equ ADC_CH_INPUTMODE_INTERNAL_gc = (0x00<<0) ; Internal inputs, no gain
.equ ADC_CH_INPUTMODE_SINGLEENDED_gc = (0x01<<0) ; Single-ended input, no gain
.equ ADC_CH_INPUTMODE_DIFF_gc = (0x02<<0) ; Differential input, no gain
.equ ADC_CH_INPUTMODE_DIFFWGAIN_gc = (0x03<<0) ; Differential input, with gain

; Gain factor
.equ ADC_CH_GAIN_1X_gc = (0x00<<2) ; 1x gain
.equ ADC_CH_GAIN_2X_gc = (0x01<<2) ; 2x gain
.equ ADC_CH_GAIN_4X_gc = (0x02<<2) ; 4x gain
.equ ADC_CH_GAIN_8X_gc = (0x03<<2) ; 8x gain
.equ ADC_CH_GAIN_16X_gc = (0x04<<2) ; 16x gain
.equ ADC_CH_GAIN_32X_gc = (0x05<<2) ; 32x gain
.equ ADC_CH_GAIN_64X_gc = (0x06<<2) ; 64x gain
.equ ADC_CH_GAIN_DIV2_gc = (0x07<<2) ; x/2 gain

; Conversion result resolution
.equ ADC_RESOLUTION_12BIT_gc = (0x00<<1) ; 12-bit right-adjusted result
.equ ADC_RESOLUTION_8BIT_gc = (0x02<<1) ; 8-bit right-adjusted result
.equ ADC_RESOLUTION_LEFT12BIT_gc = (0x03<<1) ; 12-bit left-adjusted result

; Current Limitation Mode
.equ ADC_CURRENT_NO_gc = (0x00<<5) ; No Current Reduction
.equ ADC_CURRENT_SMALL_gc = (0x01<<5) ; 10% current reduction
.equ ADC_CURRENT_MEDIUM_gc = (0x02<<5) ; 20% current reduction
.equ ADC_CURRENT_LARGE_gc = (0x03<<5) ; 30% current reduction

; Voltage reference selection
.equ ADC_REFSEL_INT1V_gc = (0x00<<4) ; Internal 1V
.equ ADC_REFSEL_VCC_gc = (0x01<<4) ; Internal VCC / 1.6
.equ ADC_REFSEL_AREFA_gc = (0x02<<4) ; External reference on PORT A
.equ ADC_REFSEL_AREFB_gc = (0x03<<4) ; External reference on PORT B
.equ ADC_REFSEL_VCCDIV2_gc = (0x04<<4) ; Internal VCC / 2

; Channel sweep selection
.equ ADC_SWEEP_0_gc = (0x00<<6) ; ADC Channel 0
.equ ADC_SWEEP_01_gc = (0x01<<6) ; ADC Channel 0,1
.equ ADC_SWEEP_012_gc = (0x02<<6) ; ADC Channel 0,1,2
.equ ADC_SWEEP_0123_gc = (0x03<<6) ; ADC Channel 0,1,2,3

; Event channel input selection
.equ ADC_EVSEL_0123_gc = (0x00<<3) ; Event Channel 0,1,2,3
.equ ADC_EVSEL_1234_gc = (0x01<<3) ; Event Channel 1,2,3,4
.equ ADC_EVSEL_2345_gc = (0x02<<3) ; Event Channel 2,3,4,5
.equ ADC_EVSEL_3456_gc = (0x03<<3) ; Event Channel 3,4,5,6
.equ ADC_EVSEL_4567_gc = (0x04<<3) ; Event Channel 4,5,6,7
.equ ADC_EVSEL_567_gc = (0x05<<3) ; Event Channel 5,6,7
.equ ADC_EVSEL_67_gc = (0x06<<3) ; Event Channel 6,7
.equ ADC_EVSEL_7_gc = (0x07<<3) ; Event Channel 7

; Event action selection
.equ ADC_EVACT_NONE_gc = (0x00<<0) ; No event action
.equ ADC_EVACT_CH0_gc = (0x01<<0) ; First event triggers channel 0
.equ ADC_EVACT_CH01_gc = (0x02<<0) ; First two events trigger channel 0,1
.equ ADC_EVACT_CH012_gc = (0x03<<0) ; First three events trigger channel 0,1,2
.equ ADC_EVACT_CH0123_gc = (0x04<<0) ; Events trigger channel 0,1,2,3
.equ ADC_EVACT_SWEEP_gc = (0x05<<0) ; First event triggers sweep
.equ ADC_EVACT_SYNCHSWEEP_gc = (0x06<<0) ; First event triggers synchronized sweep

; Interupt mode
.equ ADC_CH_INTMODE_COMPLETE_gc = (0x00<<2) ; Interrupt on conversion complete
.equ ADC_CH_INTMODE_BELOW_gc = (0x01<<2) ; Interrupt on result below compare value
.equ ADC_CH_INTMODE_ABOVE_gc = (0x03<<2) ; Interrupt on result above compare value

; Interrupt level
.equ ADC_CH_INTLVL_OFF_gc = (0x00<<0) ; Interrupt disabled
.equ ADC_CH_INTLVL_LO_gc = (0x01<<0) ; Low level
.equ ADC_CH_INTLVL_MED_gc = (0x02<<0) ; Medium level
.equ ADC_CH_INTLVL_HI_gc = (0x03<<0) ; High level

; DMA request selection
.equ ADC_DMASEL_OFF_gc = (0x00<<6) ; Combined DMA request OFF
.equ ADC_DMASEL_CH01_gc = (0x01<<6) ; ADC Channel 0 or 1
.equ ADC_DMASEL_CH012_gc = (0x02<<6) ; ADC Channel 0 or 1 or 2
.equ ADC_DMASEL_CH0123_gc = (0x03<<6) ; ADC Channel 0 or 1 or 2 or 3

; Clock prescaler
.equ ADC_PRESCALER_DIV4_gc = (0x00<<0) ; Divide clock by 4
.equ ADC_PRESCALER_DIV8_gc = (0x01<<0) ; Divide clock by 8
.equ ADC_PRESCALER_DIV16_gc = (0x02<<0) ; Divide clock by 16
.equ ADC_PRESCALER_DIV32_gc = (0x03<<0) ; Divide clock by 32
.equ ADC_PRESCALER_DIV64_gc = (0x04<<0) ; Divide clock by 64
.equ ADC_PRESCALER_DIV128_gc = (0x05<<0) ; Divide clock by 128
.equ ADC_PRESCALER_DIV256_gc = (0x06<<0) ; Divide clock by 256
.equ ADC_PRESCALER_DIV512_gc = (0x07<<0) ; Divide clock by 512


;***************************************************************************
;** DAC - Digital/Analog Converter
;***************************************************************************/

; DAC_CTRLA masks
.equ DAC_IDOEN_bm = 0x10 ; Internal Output Enable bit mask
.equ DAC_IDOEN_bp = 4 ; Internal Output Enable bit position
.equ DAC_CH1EN_bm = 0x08 ; Channel 1 Output Enable bit mask
.equ DAC_CH1EN_bp = 3 ; Channel 1 Output Enable bit position
.equ DAC_CH0EN_bm = 0x04 ; Channel 0 Output Enable bit mask
.equ DAC_CH0EN_bp = 2 ; Channel 0 Output Enable bit position
.equ DAC_LPMODE_bm = 0x02 ; Low Power Mode bit mask
.equ DAC_LPMODE_bp = 1 ; Low Power Mode bit position
.equ DAC_ENABLE_bm = 0x01 ; Enable bit mask
.equ DAC_ENABLE_bp = 0 ; Enable bit position

; DAC_CTRLB masks
.equ DAC_CHSEL_gm = 0x60 ; Channel Select group mask
.equ DAC_CHSEL_gp = 5 ; Channel Select group position
.equ DAC_CHSEL0_bm = (1<<5) ; Channel Select bit 0 mask
.equ DAC_CHSEL0_bp = 5 ; Channel Select bit 0 position
.equ DAC_CHSEL1_bm = (1<<6) ; Channel Select bit 1 mask
.equ DAC_CHSEL1_bp = 6 ; Channel Select bit 1 position
.equ DAC_CH1TRIG_bm = 0x02 ; Channel 1 Event Trig Enable bit mask
.equ DAC_CH1TRIG_bp = 1 ; Channel 1 Event Trig Enable bit position
.equ DAC_CH0TRIG_bm = 0x01 ; Channel 0 Event Trig Enable bit mask
.equ DAC_CH0TRIG_bp = 0 ; Channel 0 Event Trig Enable bit position

; DAC_CTRLC masks
.equ DAC_REFSEL_gm = 0x18 ; Reference Select group mask
.equ DAC_REFSEL_gp = 3 ; Reference Select group position
.equ DAC_REFSEL0_bm = (1<<3) ; Reference Select bit 0 mask
.equ DAC_REFSEL0_bp = 3 ; Reference Select bit 0 position
.equ DAC_REFSEL1_bm = (1<<4) ; Reference Select bit 1 mask
.equ DAC_REFSEL1_bp = 4 ; Reference Select bit 1 position
.equ DAC_LEFTADJ_bm = 0x01 ; Left-adjust Result bit mask
.equ DAC_LEFTADJ_bp = 0 ; Left-adjust Result bit position

; DAC_EVCTRL masks
.equ DAC_EVSPLIT_bm = 0x08 ; Separate Event Channel Input for Channel 1 bit mask
.equ DAC_EVSPLIT_bp = 3 ; Separate Event Channel Input for Channel 1 bit position
.equ DAC_EVSEL_gm = 0x07 ; Event Input Selection group mask
.equ DAC_EVSEL_gp = 0 ; Event Input Selection group position
.equ DAC_EVSEL0_bm = (1<<0) ; Event Input Selection bit 0 mask
.equ DAC_EVSEL0_bp = 0 ; Event Input Selection bit 0 position
.equ DAC_EVSEL1_bm = (1<<1) ; Event Input Selection bit 1 mask
.equ DAC_EVSEL1_bp = 1 ; Event Input Selection bit 1 position
.equ DAC_EVSEL2_bm = (1<<2) ; Event Input Selection bit 2 mask
.equ DAC_EVSEL2_bp = 2 ; Event Input Selection bit 2 position

; DAC_TIMCTRL masks
.equ DAC_CONINTVAL_gm = 0x70 ; Conversion Intercal group mask
.equ DAC_CONINTVAL_gp = 4 ; Conversion Intercal group position
.equ DAC_CONINTVAL0_bm = (1<<4) ; Conversion Intercal bit 0 mask
.equ DAC_CONINTVAL0_bp = 4 ; Conversion Intercal bit 0 position
.equ DAC_CONINTVAL1_bm = (1<<5) ; Conversion Intercal bit 1 mask
.equ DAC_CONINTVAL1_bp = 5 ; Conversion Intercal bit 1 position
.equ DAC_CONINTVAL2_bm = (1<<6) ; Conversion Intercal bit 2 mask
.equ DAC_CONINTVAL2_bp = 6 ; Conversion Intercal bit 2 position
.equ DAC_REFRESH_gm = 0x0F ; Refresh Timing Control group mask
.equ DAC_REFRESH_gp = 0 ; Refresh Timing Control group position
.equ DAC_REFRESH0_bm = (1<<0) ; Refresh Timing Control bit 0 mask
.equ DAC_REFRESH0_bp = 0 ; Refresh Timing Control bit 0 position
.equ DAC_REFRESH1_bm = (1<<1) ; Refresh Timing Control bit 1 mask
.equ DAC_REFRESH1_bp = 1 ; Refresh Timing Control bit 1 position
.equ DAC_REFRESH2_bm = (1<<2) ; Refresh Timing Control bit 2 mask
.equ DAC_REFRESH2_bp = 2 ; Refresh Timing Control bit 2 position
.equ DAC_REFRESH3_bm = (1<<3) ; Refresh Timing Control bit 3 mask
.equ DAC_REFRESH3_bp = 3 ; Refresh Timing Control bit 3 position

; DAC_STATUS masks
.equ DAC_CH1DRE_bm = 0x02 ; Channel 1 Data Register Empty bit mask
.equ DAC_CH1DRE_bp = 1 ; Channel 1 Data Register Empty bit position
.equ DAC_CH0DRE_bm = 0x01 ; Channel 0 Data Register Empty bit mask
.equ DAC_CH0DRE_bp = 0 ; Channel 0 Data Register Empty bit position

; DAC_CH0GAINCAL masks
.equ DAC_CH0GAINCAL_gm = 0x7F ; Gain Calibration group mask
.equ DAC_CH0GAINCAL_gp = 0 ; Gain Calibration group position
.equ DAC_CH0GAINCAL0_bm = (1<<0) ; Gain Calibration bit 0 mask
.equ DAC_CH0GAINCAL0_bp = 0 ; Gain Calibration bit 0 position
.equ DAC_CH0GAINCAL1_bm = (1<<1) ; Gain Calibration bit 1 mask
.equ DAC_CH0GAINCAL1_bp = 1 ; Gain Calibration bit 1 position
.equ DAC_CH0GAINCAL2_bm = (1<<2) ; Gain Calibration bit 2 mask
.equ DAC_CH0GAINCAL2_bp = 2 ; Gain Calibration bit 2 position
.equ DAC_CH0GAINCAL3_bm = (1<<3) ; Gain Calibration bit 3 mask
.equ DAC_CH0GAINCAL3_bp = 3 ; Gain Calibration bit 3 position
.equ DAC_CH0GAINCAL4_bm = (1<<4) ; Gain Calibration bit 4 mask
.equ DAC_CH0GAINCAL4_bp = 4 ; Gain Calibration bit 4 position
.equ DAC_CH0GAINCAL5_bm = (1<<5) ; Gain Calibration bit 5 mask
.equ DAC_CH0GAINCAL5_bp = 5 ; Gain Calibration bit 5 position
.equ DAC_CH0GAINCAL6_bm = (1<<6) ; Gain Calibration bit 6 mask
.equ DAC_CH0GAINCAL6_bp = 6 ; Gain Calibration bit 6 position

; DAC_CH0OFFSETCAL masks
.equ DAC_CH0OFFSETCAL_gm = 0x7F ; Offset Calibration group mask
.equ DAC_CH0OFFSETCAL_gp = 0 ; Offset Calibration group position
.equ DAC_CH0OFFSETCAL0_bm = (1<<0) ; Offset Calibration bit 0 mask
.equ DAC_CH0OFFSETCAL0_bp = 0 ; Offset Calibration bit 0 position
.equ DAC_CH0OFFSETCAL1_bm = (1<<1) ; Offset Calibration bit 1 mask
.equ DAC_CH0OFFSETCAL1_bp = 1 ; Offset Calibration bit 1 position
.equ DAC_CH0OFFSETCAL2_bm = (1<<2) ; Offset Calibration bit 2 mask
.equ DAC_CH0OFFSETCAL2_bp = 2 ; Offset Calibration bit 2 position
.equ DAC_CH0OFFSETCAL3_bm = (1<<3) ; Offset Calibration bit 3 mask
.equ DAC_CH0OFFSETCAL3_bp = 3 ; Offset Calibration bit 3 position
.equ DAC_CH0OFFSETCAL4_bm = (1<<4) ; Offset Calibration bit 4 mask
.equ DAC_CH0OFFSETCAL4_bp = 4 ; Offset Calibration bit 4 position
.equ DAC_CH0OFFSETCAL5_bm = (1<<5) ; Offset Calibration bit 5 mask
.equ DAC_CH0OFFSETCAL5_bp = 5 ; Offset Calibration bit 5 position
.equ DAC_CH0OFFSETCAL6_bm = (1<<6) ; Offset Calibration bit 6 mask
.equ DAC_CH0OFFSETCAL6_bp = 6 ; Offset Calibration bit 6 position

; DAC_CH1GAINCAL masks
.equ DAC_CH1GAINCAL_gm = 0x7F ; Gain Calibration group mask
.equ DAC_CH1GAINCAL_gp = 0 ; Gain Calibration group position
.equ DAC_CH1GAINCAL0_bm = (1<<0) ; Gain Calibration bit 0 mask
.equ DAC_CH1GAINCAL0_bp = 0 ; Gain Calibration bit 0 position
.equ DAC_CH1GAINCAL1_bm = (1<<1) ; Gain Calibration bit 1 mask
.equ DAC_CH1GAINCAL1_bp = 1 ; Gain Calibration bit 1 position
.equ DAC_CH1GAINCAL2_bm = (1<<2) ; Gain Calibration bit 2 mask
.equ DAC_CH1GAINCAL2_bp = 2 ; Gain Calibration bit 2 position
.equ DAC_CH1GAINCAL3_bm = (1<<3) ; Gain Calibration bit 3 mask
.equ DAC_CH1GAINCAL3_bp = 3 ; Gain Calibration bit 3 position
.equ DAC_CH1GAINCAL4_bm = (1<<4) ; Gain Calibration bit 4 mask
.equ DAC_CH1GAINCAL4_bp = 4 ; Gain Calibration bit 4 position
.equ DAC_CH1GAINCAL5_bm = (1<<5) ; Gain Calibration bit 5 mask
.equ DAC_CH1GAINCAL5_bp = 5 ; Gain Calibration bit 5 position
.equ DAC_CH1GAINCAL6_bm = (1<<6) ; Gain Calibration bit 6 mask
.equ DAC_CH1GAINCAL6_bp = 6 ; Gain Calibration bit 6 position

; DAC_CH1OFFSETCAL masks
.equ DAC_CH1OFFSETCAL_gm = 0x7F ; Offset Calibration group mask
.equ DAC_CH1OFFSETCAL_gp = 0 ; Offset Calibration group position
.equ DAC_CH1OFFSETCAL0_bm = (1<<0) ; Offset Calibration bit 0 mask
.equ DAC_CH1OFFSETCAL0_bp = 0 ; Offset Calibration bit 0 position
.equ DAC_CH1OFFSETCAL1_bm = (1<<1) ; Offset Calibration bit 1 mask
.equ DAC_CH1OFFSETCAL1_bp = 1 ; Offset Calibration bit 1 position
.equ DAC_CH1OFFSETCAL2_bm = (1<<2) ; Offset Calibration bit 2 mask
.equ DAC_CH1OFFSETCAL2_bp = 2 ; Offset Calibration bit 2 position
.equ DAC_CH1OFFSETCAL3_bm = (1<<3) ; Offset Calibration bit 3 mask
.equ DAC_CH1OFFSETCAL3_bp = 3 ; Offset Calibration bit 3 position
.equ DAC_CH1OFFSETCAL4_bm = (1<<4) ; Offset Calibration bit 4 mask
.equ DAC_CH1OFFSETCAL4_bp = 4 ; Offset Calibration bit 4 position
.equ DAC_CH1OFFSETCAL5_bm = (1<<5) ; Offset Calibration bit 5 mask
.equ DAC_CH1OFFSETCAL5_bp = 5 ; Offset Calibration bit 5 position
.equ DAC_CH1OFFSETCAL6_bm = (1<<6) ; Offset Calibration bit 6 mask
.equ DAC_CH1OFFSETCAL6_bp = 6 ; Offset Calibration bit 6 position
 
; Output channel selection
.equ DAC_CHSEL_SINGLE_gc = (0x00<<5) ; Single channel operation (Channel 0 only)
.equ DAC_CHSEL_SINGLE1_gc = (0x01<<5) ; Single channel operation (Channel 1 only)
.equ DAC_CHSEL_DUAL_gc = (0x02<<5) ; Dual channel operation (Channel 0 and channel 1)

; Reference voltage selection
.equ DAC_REFSEL_INT1V_gc = (0x00<<3) ; Internal 1V 
.equ DAC_REFSEL_AVCC_gc = (0x01<<3) ; Analog supply voltage
.equ DAC_REFSEL_AREFA_gc = (0x02<<3) ; External reference on AREF on PORTA
.equ DAC_REFSEL_AREFB_gc = (0x03<<3) ; External reference on AREF on PORTB

; Event channel selection
.equ DAC_EVSEL_0_gc = (0x00<<0) ; Event Channel 0
.equ DAC_EVSEL_1_gc = (0x01<<0) ; Event Channel 1
.equ DAC_EVSEL_2_gc = (0x02<<0) ; Event Channel 2
.equ DAC_EVSEL_3_gc = (0x03<<0) ; Event Channel 3
.equ DAC_EVSEL_4_gc = (0x04<<0) ; Event Channel 4
.equ DAC_EVSEL_5_gc = (0x05<<0) ; Event Channel 5
.equ DAC_EVSEL_6_gc = (0x06<<0) ; Event Channel 6
.equ DAC_EVSEL_7_gc = (0x07<<0) ; Event Channel 7

; Conversion interval
.equ DAC_CONINTVAL_1CLK_gc = (0x00<<4) ; 1 CLK / 2 CLK in S/H mode
.equ DAC_CONINTVAL_2CLK_gc = (0x01<<4) ; 2 CLK / 3 CLK in S/H mode
.equ DAC_CONINTVAL_4CLK_gc = (0x02<<4) ; 4 CLK / 6 CLK in S/H mode
.equ DAC_CONINTVAL_8CLK_gc = (0x03<<4) ; 8 CLK / 12 CLK in S/H mode
.equ DAC_CONINTVAL_16CLK_gc = (0x04<<4) ; 16 CLK / 24 CLK in S/H mode
.equ DAC_CONINTVAL_32CLK_gc = (0x05<<4) ; 32 CLK / 48 CLK in S/H mode
.equ DAC_CONINTVAL_64CLK_gc = (0x06<<4) ; 64 CLK / 96 CLK in S/H mode
.equ DAC_CONINTVAL_128CLK_gc = (0x07<<4) ; 128 CLK / 192 CLK in S/H mode

; Refresh rate
.equ DAC_REFRESH_16CLK_gc = (0x00<<0) ; 16 CLK
.equ DAC_REFRESH_32CLK_gc = (0x01<<0) ; 32 CLK
.equ DAC_REFRESH_64CLK_gc = (0x02<<0) ; 64 CLK
.equ DAC_REFRESH_128CLK_gc = (0x03<<0) ; 128 CLK
.equ DAC_REFRESH_256CLK_gc = (0x04<<0) ; 256 CLK
.equ DAC_REFRESH_512CLK_gc = (0x05<<0) ; 512 CLK
.equ DAC_REFRESH_1024CLK_gc = (0x06<<0) ; 1024 CLK
.equ DAC_REFRESH_2048CLK_gc = (0x07<<0) ; 2048 CLK
.equ DAC_REFRESH_4096CLK_gc = (0x08<<0) ; 4096 CLK
.equ DAC_REFRESH_8192CLK_gc = (0x09<<0) ; 8192 CLK
.equ DAC_REFRESH_16384CLK_gc = (0x0A<<0) ; 16384 CLK
.equ DAC_REFRESH_32768CLK_gc = (0x0B<<0) ; 32768 CLK
.equ DAC_REFRESH_65536CLK_gc = (0x0C<<0) ; 65536 CLK
.equ DAC_REFRESH_OFF_gc = (0x0F<<0) ; Auto refresh OFF


;***************************************************************************
;** AC - Analog Comparator
;***************************************************************************/

; AC_AC0CTRL masks
.equ AC_INTMODE_gm = 0xC0 ; Interrupt Mode group mask
.equ AC_INTMODE_gp = 6 ; Interrupt Mode group position
.equ AC_INTMODE0_bm = (1<<6) ; Interrupt Mode bit 0 mask
.equ AC_INTMODE0_bp = 6 ; Interrupt Mode bit 0 position
.equ AC_INTMODE1_bm = (1<<7) ; Interrupt Mode bit 1 mask
.equ AC_INTMODE1_bp = 7 ; Interrupt Mode bit 1 position
.equ AC_INTLVL_gm = 0x30 ; Interrupt Level group mask
.equ AC_INTLVL_gp = 4 ; Interrupt Level group position
.equ AC_INTLVL0_bm = (1<<4) ; Interrupt Level bit 0 mask
.equ AC_INTLVL0_bp = 4 ; Interrupt Level bit 0 position
.equ AC_INTLVL1_bm = (1<<5) ; Interrupt Level bit 1 mask
.equ AC_INTLVL1_bp = 5 ; Interrupt Level bit 1 position
.equ AC_HSMODE_bm = 0x08 ; High-speed Mode bit mask
.equ AC_HSMODE_bp = 3 ; High-speed Mode bit position
.equ AC_HYSMODE_gm = 0x06 ; Hysteresis Mode group mask
.equ AC_HYSMODE_gp = 1 ; Hysteresis Mode group position
.equ AC_HYSMODE0_bm = (1<<1) ; Hysteresis Mode bit 0 mask
.equ AC_HYSMODE0_bp = 1 ; Hysteresis Mode bit 0 position
.equ AC_HYSMODE1_bm = (1<<2) ; Hysteresis Mode bit 1 mask
.equ AC_HYSMODE1_bp = 2 ; Hysteresis Mode bit 1 position
.equ AC_ENABLE_bm = 0x01 ; Enable bit mask
.equ AC_ENABLE_bp = 0 ; Enable bit position

; AC_AC1CTRL masks
; Masks for INTMODE aready defined
; Masks for INTLVL aready defined
; Masks for HSMODE aready defined
; Masks for HYSMODE aready defined
; Masks for ENABLE aready defined

; AC_AC0MUXCTRL masks
.equ AC_MUXPOS_gm = 0x38 ; MUX Positive Input group mask
.equ AC_MUXPOS_gp = 3 ; MUX Positive Input group position
.equ AC_MUXPOS0_bm = (1<<3) ; MUX Positive Input bit 0 mask
.equ AC_MUXPOS0_bp = 3 ; MUX Positive Input bit 0 position
.equ AC_MUXPOS1_bm = (1<<4) ; MUX Positive Input bit 1 mask
.equ AC_MUXPOS1_bp = 4 ; MUX Positive Input bit 1 position
.equ AC_MUXPOS2_bm = (1<<5) ; MUX Positive Input bit 2 mask
.equ AC_MUXPOS2_bp = 5 ; MUX Positive Input bit 2 position
.equ AC_MUXNEG_gm = 0x07 ; MUX Negative Input group mask
.equ AC_MUXNEG_gp = 0 ; MUX Negative Input group position
.equ AC_MUXNEG0_bm = (1<<0) ; MUX Negative Input bit 0 mask
.equ AC_MUXNEG0_bp = 0 ; MUX Negative Input bit 0 position
.equ AC_MUXNEG1_bm = (1<<1) ; MUX Negative Input bit 1 mask
.equ AC_MUXNEG1_bp = 1 ; MUX Negative Input bit 1 position
.equ AC_MUXNEG2_bm = (1<<2) ; MUX Negative Input bit 2 mask
.equ AC_MUXNEG2_bp = 2 ; MUX Negative Input bit 2 position

; AC_AC1MUXCTRL masks
; Masks for MUXPOS aready defined
; Masks for MUXNEG aready defined

; AC_CTRLA masks
.equ AC_AC1OUT_bm = 0x02 ; Analog Comparator 1 Output Enable bit mask
.equ AC_AC1OUT_bp = 1 ; Analog Comparator 1 Output Enable bit position
.equ AC_AC0OUT_bm = 0x01 ; Analog Comparator 0 Output Enable bit mask
.equ AC_AC0OUT_bp = 0 ; Analog Comparator 0 Output Enable bit position

; AC_CTRLB masks
.equ AC_SCALEFAC_gm = 0x3F ; VCC Voltage Scaler Factor group mask
.equ AC_SCALEFAC_gp = 0 ; VCC Voltage Scaler Factor group position
.equ AC_SCALEFAC0_bm = (1<<0) ; VCC Voltage Scaler Factor bit 0 mask
.equ AC_SCALEFAC0_bp = 0 ; VCC Voltage Scaler Factor bit 0 position
.equ AC_SCALEFAC1_bm = (1<<1) ; VCC Voltage Scaler Factor bit 1 mask
.equ AC_SCALEFAC1_bp = 1 ; VCC Voltage Scaler Factor bit 1 position
.equ AC_SCALEFAC2_bm = (1<<2) ; VCC Voltage Scaler Factor bit 2 mask
.equ AC_SCALEFAC2_bp = 2 ; VCC Voltage Scaler Factor bit 2 position
.equ AC_SCALEFAC3_bm = (1<<3) ; VCC Voltage Scaler Factor bit 3 mask
.equ AC_SCALEFAC3_bp = 3 ; VCC Voltage Scaler Factor bit 3 position
.equ AC_SCALEFAC4_bm = (1<<4) ; VCC Voltage Scaler Factor bit 4 mask
.equ AC_SCALEFAC4_bp = 4 ; VCC Voltage Scaler Factor bit 4 position
.equ AC_SCALEFAC5_bm = (1<<5) ; VCC Voltage Scaler Factor bit 5 mask
.equ AC_SCALEFAC5_bp = 5 ; VCC Voltage Scaler Factor bit 5 position

; AC_WINCTRL masks
.equ AC_WEN_bm = 0x10 ; Window Mode Enable bit mask
.equ AC_WEN_bp = 4 ; Window Mode Enable bit position
.equ AC_WINTMODE_gm = 0x0C ; Window Interrupt Mode group mask
.equ AC_WINTMODE_gp = 2 ; Window Interrupt Mode group position
.equ AC_WINTMODE0_bm = (1<<2) ; Window Interrupt Mode bit 0 mask
.equ AC_WINTMODE0_bp = 2 ; Window Interrupt Mode bit 0 position
.equ AC_WINTMODE1_bm = (1<<3) ; Window Interrupt Mode bit 1 mask
.equ AC_WINTMODE1_bp = 3 ; Window Interrupt Mode bit 1 position
.equ AC_WINTLVL_gm = 0x03 ; Window Interrupt Level group mask
.equ AC_WINTLVL_gp = 0 ; Window Interrupt Level group position
.equ AC_WINTLVL0_bm = (1<<0) ; Window Interrupt Level bit 0 mask
.equ AC_WINTLVL0_bp = 0 ; Window Interrupt Level bit 0 position
.equ AC_WINTLVL1_bm = (1<<1) ; Window Interrupt Level bit 1 mask
.equ AC_WINTLVL1_bp = 1 ; Window Interrupt Level bit 1 position

; AC_STATUS masks
.equ AC_WSTATE_gm = 0xC0 ; Window Mode State group mask
.equ AC_WSTATE_gp = 6 ; Window Mode State group position
.equ AC_WSTATE0_bm = (1<<6) ; Window Mode State bit 0 mask
.equ AC_WSTATE0_bp = 6 ; Window Mode State bit 0 position
.equ AC_WSTATE1_bm = (1<<7) ; Window Mode State bit 1 mask
.equ AC_WSTATE1_bp = 7 ; Window Mode State bit 1 position
.equ AC_AC1STATE_bm = 0x20 ; Analog Comparator 1 State bit mask
.equ AC_AC1STATE_bp = 5 ; Analog Comparator 1 State bit position
.equ AC_AC0STATE_bm = 0x10 ; Analog Comparator 0 State bit mask
.equ AC_AC0STATE_bp = 4 ; Analog Comparator 0 State bit position
.equ AC_WIF_bm = 0x04 ; Window Mode Interrupt Flag bit mask
.equ AC_WIF_bp = 2 ; Window Mode Interrupt Flag bit position
.equ AC_AC1IF_bm = 0x02 ; Analog Comparator 1 Interrupt Flag bit mask
.equ AC_AC1IF_bp = 1 ; Analog Comparator 1 Interrupt Flag bit position
.equ AC_AC0IF_bm = 0x01 ; Analog Comparator 0 Interrupt Flag bit mask
.equ AC_AC0IF_bp = 0 ; Analog Comparator 0 Interrupt Flag bit position
 
; Interrupt mode
.equ AC_INTMODE_BOTHEDGES_gc = (0x00<<6) ; Interrupt on both edges
.equ AC_INTMODE_FALLING_gc = (0x02<<6) ; Interrupt on falling edge
.equ AC_INTMODE_RISING_gc = (0x03<<6) ; Interrupt on rising edge

; Interrupt level
.equ AC_INTLVL_OFF_gc = (0x00<<4) ; Interrupt disabled
.equ AC_INTLVL_LO_gc = (0x01<<4) ; Low level
.equ AC_INTLVL_MED_gc = (0x02<<4) ; Medium level
.equ AC_INTLVL_HI_gc = (0x03<<4) ; High level

; Hysteresis mode selection
.equ AC_HYSMODE_NO_gc = (0x00<<1) ; No hysteresis
.equ AC_HYSMODE_SMALL_gc = (0x01<<1) ; Small hysteresis
.equ AC_HYSMODE_LARGE_gc = (0x02<<1) ; Large hysteresis

; Positive input multiplexer selection
.equ AC_MUXPOS_PIN0_gc = (0x00<<3) ; Pin 0
.equ AC_MUXPOS_PIN1_gc = (0x01<<3) ; Pin 1
.equ AC_MUXPOS_PIN2_gc = (0x02<<3) ; Pin 2
.equ AC_MUXPOS_PIN3_gc = (0x03<<3) ; Pin 3
.equ AC_MUXPOS_PIN4_gc = (0x04<<3) ; Pin 4
.equ AC_MUXPOS_PIN5_gc = (0x05<<3) ; Pin 5
.equ AC_MUXPOS_PIN6_gc = (0x06<<3) ; Pin 6
.equ AC_MUXPOS_DAC_gc = (0x07<<3) ; DAC output

; Negative input multiplexer selection
.equ AC_MUXNEG_PIN0_gc = (0x00<<0) ; Pin 0
.equ AC_MUXNEG_PIN1_gc = (0x01<<0) ; Pin 1
.equ AC_MUXNEG_PIN3_gc = (0x02<<0) ; Pin 3
.equ AC_MUXNEG_PIN5_gc = (0x03<<0) ; Pin 5
.equ AC_MUXNEG_PIN7_gc = (0x04<<0) ; Pin 7
.equ AC_MUXNEG_DAC_gc = (0x05<<0) ; DAC output
.equ AC_MUXNEG_BANDGAP_gc = (0x06<<0) ; Bandgap Reference
.equ AC_MUXNEG_SCALER_gc = (0x07<<0) ; Internal voltage scaler

; Windows interrupt mode
.equ AC_WINTMODE_ABOVE_gc = (0x00<<2) ; Interrupt on above window
.equ AC_WINTMODE_INSIDE_gc = (0x01<<2) ; Interrupt on inside window
.equ AC_WINTMODE_BELOW_gc = (0x02<<2) ; Interrupt on below window
.equ AC_WINTMODE_OUTSIDE_gc = (0x03<<2) ; Interrupt on outside window

; Window interrupt level
.equ AC_WINTLVL_OFF_gc = (0x00<<0) ; Interrupt disabled
.equ AC_WINTLVL_LO_gc = (0x01<<0) ; Low priority
.equ AC_WINTLVL_MED_gc = (0x02<<0) ; Medium priority
.equ AC_WINTLVL_HI_gc = (0x03<<0) ; High priority

; Window mode state
.equ AC_WSTATE_ABOVE_gc = (0x00<<6) ; Signal above window
.equ AC_WSTATE_INSIDE_gc = (0x01<<6) ; Signal inside window
.equ AC_WSTATE_BELOW_gc = (0x02<<6) ; Signal below window


;***************************************************************************
;** RTC - Real-Time Clounter
;***************************************************************************/

; RTC_CTRL masks
.equ RTC_PRESCALER_gm = 0x07 ; Prescaling Factor group mask
.equ RTC_PRESCALER_gp = 0 ; Prescaling Factor group position
.equ RTC_PRESCALER0_bm = (1<<0) ; Prescaling Factor bit 0 mask
.equ RTC_PRESCALER0_bp = 0 ; Prescaling Factor bit 0 position
.equ RTC_PRESCALER1_bm = (1<<1) ; Prescaling Factor bit 1 mask
.equ RTC_PRESCALER1_bp = 1 ; Prescaling Factor bit 1 position
.equ RTC_PRESCALER2_bm = (1<<2) ; Prescaling Factor bit 2 mask
.equ RTC_PRESCALER2_bp = 2 ; Prescaling Factor bit 2 position

; RTC_STATUS masks
.equ RTC_SYNCBUSY_bm = 0x01 ; Synchronization Busy Flag bit mask
.equ RTC_SYNCBUSY_bp = 0 ; Synchronization Busy Flag bit position

; RTC_INTCTRL masks
.equ RTC_COMPINTLVL_gm = 0x0C ; Compare Match Interrupt Level group mask
.equ RTC_COMPINTLVL_gp = 2 ; Compare Match Interrupt Level group position
.equ RTC_COMPINTLVL0_bm = (1<<2) ; Compare Match Interrupt Level bit 0 mask
.equ RTC_COMPINTLVL0_bp = 2 ; Compare Match Interrupt Level bit 0 position
.equ RTC_COMPINTLVL1_bm = (1<<3) ; Compare Match Interrupt Level bit 1 mask
.equ RTC_COMPINTLVL1_bp = 3 ; Compare Match Interrupt Level bit 1 position
.equ RTC_OVFINTLVL_gm = 0x03 ; Overflow Interrupt Level group mask
.equ RTC_OVFINTLVL_gp = 0 ; Overflow Interrupt Level group position
.equ RTC_OVFINTLVL0_bm = (1<<0) ; Overflow Interrupt Level bit 0 mask
.equ RTC_OVFINTLVL0_bp = 0 ; Overflow Interrupt Level bit 0 position
.equ RTC_OVFINTLVL1_bm = (1<<1) ; Overflow Interrupt Level bit 1 mask
.equ RTC_OVFINTLVL1_bp = 1 ; Overflow Interrupt Level bit 1 position

; RTC_INTFLAGS masks
.equ RTC_COMPIF_bm = 0x02 ; Compare Match Interrupt Flag bit mask
.equ RTC_COMPIF_bp = 1 ; Compare Match Interrupt Flag bit position
.equ RTC_OVFIF_bm = 0x01 ; Overflow Interrupt Flag bit mask
.equ RTC_OVFIF_bp = 0 ; Overflow Interrupt Flag bit position
 
; Prescaler Factor
.equ RTC_PRESCALER_OFF_gc = (0x00<<0) ; RTC Off
.equ RTC_PRESCALER_DIV1_gc = (0x01<<0) ; RTC Clock
.equ RTC_PRESCALER_DIV2_gc = (0x02<<0) ; RTC Clock / 2
.equ RTC_PRESCALER_DIV8_gc = (0x03<<0) ; RTC Clock / 8
.equ RTC_PRESCALER_DIV16_gc = (0x04<<0) ; RTC Clock / 16
.equ RTC_PRESCALER_DIV64_gc = (0x05<<0) ; RTC Clock / 64
.equ RTC_PRESCALER_DIV256_gc = (0x06<<0) ; RTC Clock / 256
.equ RTC_PRESCALER_DIV1024_gc = (0x07<<0) ; RTC Clock / 1024

; Compare Interrupt level
.equ RTC_COMPINTLVL_OFF_gc = (0x00<<2) ; Interrupt Disabled
.equ RTC_COMPINTLVL_LO_gc = (0x01<<2) ; Low Level
.equ RTC_COMPINTLVL_MED_gc = (0x02<<2) ; Medium Level
.equ RTC_COMPINTLVL_HI_gc = (0x03<<2) ; High Level

; Overflow Interrupt level
.equ RTC_OVFINTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ RTC_OVFINTLVL_LO_gc = (0x01<<0) ; Low Level
.equ RTC_OVFINTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ RTC_OVFINTLVL_HI_gc = (0x03<<0) ; High Level


;***************************************************************************
;** TWI - Two-Wire Interface
;***************************************************************************/

; TWI_MASTER_CTRLA masks
.equ TWI_MASTER_INTLVL_gm = 0xC0 ; Interrupt Level group mask
.equ TWI_MASTER_INTLVL_gp = 6 ; Interrupt Level group position
.equ TWI_MASTER_INTLVL0_bm = (1<<6) ; Interrupt Level bit 0 mask
.equ TWI_MASTER_INTLVL0_bp = 6 ; Interrupt Level bit 0 position
.equ TWI_MASTER_INTLVL1_bm = (1<<7) ; Interrupt Level bit 1 mask
.equ TWI_MASTER_INTLVL1_bp = 7 ; Interrupt Level bit 1 position
.equ TWI_MASTER_RIEN_bm = 0x20 ; Read Interrupt Enable bit mask
.equ TWI_MASTER_RIEN_bp = 5 ; Read Interrupt Enable bit position
.equ TWI_MASTER_WIEN_bm = 0x10 ; Write Interrupt Enable bit mask
.equ TWI_MASTER_WIEN_bp = 4 ; Write Interrupt Enable bit position
.equ TWI_MASTER_ENABLE_bm = 0x08 ; Enable TWI Master bit mask
.equ TWI_MASTER_ENABLE_bp = 3 ; Enable TWI Master bit position

; TWI_MASTER_CTRLB masks
.equ TWI_MASTER_TIMEOUT_gm = 0x0C ; Inactive Bus Timeout group mask
.equ TWI_MASTER_TIMEOUT_gp = 2 ; Inactive Bus Timeout group position
.equ TWI_MASTER_TIMEOUT0_bm = (1<<2) ; Inactive Bus Timeout bit 0 mask
.equ TWI_MASTER_TIMEOUT0_bp = 2 ; Inactive Bus Timeout bit 0 position
.equ TWI_MASTER_TIMEOUT1_bm = (1<<3) ; Inactive Bus Timeout bit 1 mask
.equ TWI_MASTER_TIMEOUT1_bp = 3 ; Inactive Bus Timeout bit 1 position
.equ TWI_MASTER_QCEN_bm = 0x02 ; Quick Command Enable bit mask
.equ TWI_MASTER_QCEN_bp = 1 ; Quick Command Enable bit position
.equ TWI_MASTER_SMEN_bm = 0x01 ; Smart Mode Enable bit mask
.equ TWI_MASTER_SMEN_bp = 0 ; Smart Mode Enable bit position

; TWI_MASTER_CTRLC masks
.equ TWI_MASTER_ACKACT_bm = 0x04 ; Acknowledge Action bit mask
.equ TWI_MASTER_ACKACT_bp = 2 ; Acknowledge Action bit position
.equ TWI_MASTER_CMD_gm = 0x03 ; Command group mask
.equ TWI_MASTER_CMD_gp = 0 ; Command group position
.equ TWI_MASTER_CMD0_bm = (1<<0) ; Command bit 0 mask
.equ TWI_MASTER_CMD0_bp = 0 ; Command bit 0 position
.equ TWI_MASTER_CMD1_bm = (1<<1) ; Command bit 1 mask
.equ TWI_MASTER_CMD1_bp = 1 ; Command bit 1 position

; TWI_MASTER_STATUS masks
.equ TWI_MASTER_RIF_bm = 0x80 ; Read Interrupt Flag bit mask
.equ TWI_MASTER_RIF_bp = 7 ; Read Interrupt Flag bit position
.equ TWI_MASTER_WIF_bm = 0x40 ; Write Interrupt Flag bit mask
.equ TWI_MASTER_WIF_bp = 6 ; Write Interrupt Flag bit position
.equ TWI_MASTER_CLKHOLD_bm = 0x20 ; Clock Hold bit mask
.equ TWI_MASTER_CLKHOLD_bp = 5 ; Clock Hold bit position
.equ TWI_MASTER_RXACK_bm = 0x10 ; Received Acknowledge bit mask
.equ TWI_MASTER_RXACK_bp = 4 ; Received Acknowledge bit position
.equ TWI_MASTER_ARBLOST_bm = 0x08 ; Arbitration Lost bit mask
.equ TWI_MASTER_ARBLOST_bp = 3 ; Arbitration Lost bit position
.equ TWI_MASTER_BUSERR_bm = 0x04 ; Bus Error bit mask
.equ TWI_MASTER_BUSERR_bp = 2 ; Bus Error bit position
.equ TWI_MASTER_BUSSTATE_gm = 0x03 ; Bus State group mask
.equ TWI_MASTER_BUSSTATE_gp = 0 ; Bus State group position
.equ TWI_MASTER_BUSSTATE0_bm = (1<<0) ; Bus State bit 0 mask
.equ TWI_MASTER_BUSSTATE0_bp = 0 ; Bus State bit 0 position
.equ TWI_MASTER_BUSSTATE1_bm = (1<<1) ; Bus State bit 1 mask
.equ TWI_MASTER_BUSSTATE1_bp = 1 ; Bus State bit 1 position

; TWI_SLAVE_CTRLA masks
.equ TWI_SLAVE_INTLVL_gm = 0xC0 ; Interrupt Level group mask
.equ TWI_SLAVE_INTLVL_gp = 6 ; Interrupt Level group position
.equ TWI_SLAVE_INTLVL0_bm = (1<<6) ; Interrupt Level bit 0 mask
.equ TWI_SLAVE_INTLVL0_bp = 6 ; Interrupt Level bit 0 position
.equ TWI_SLAVE_INTLVL1_bm = (1<<7) ; Interrupt Level bit 1 mask
.equ TWI_SLAVE_INTLVL1_bp = 7 ; Interrupt Level bit 1 position
.equ TWI_SLAVE_DIEN_bm = 0x20 ; Data Interrupt Enable bit mask
.equ TWI_SLAVE_DIEN_bp = 5 ; Data Interrupt Enable bit position
.equ TWI_SLAVE_APIEN_bm = 0x10 ; Address/Stop Interrupt Enable bit mask
.equ TWI_SLAVE_APIEN_bp = 4 ; Address/Stop Interrupt Enable bit position
.equ TWI_SLAVE_ENABLE_bm = 0x08 ; Enable TWI Slave bit mask
.equ TWI_SLAVE_ENABLE_bp = 3 ; Enable TWI Slave bit position
.equ TWI_SLAVE_PIEN_bm = 0x04 ; Stop Interrupt Enable bit mask
.equ TWI_SLAVE_PIEN_bp = 2 ; Stop Interrupt Enable bit position
.equ TWI_SLAVE_PMEN_bm = 0x02 ; Promiscuous Mode Enable bit mask
.equ TWI_SLAVE_PMEN_bp = 1 ; Promiscuous Mode Enable bit position
.equ TWI_SLAVE_SMEN_bm = 0x01 ; Smart Mode Enable bit mask
.equ TWI_SLAVE_SMEN_bp = 0 ; Smart Mode Enable bit position

; TWI_SLAVE_CTRLB masks
.equ TWI_SLAVE_ACKACT_bm = 0x04 ; Acknowledge Action bit mask
.equ TWI_SLAVE_ACKACT_bp = 2 ; Acknowledge Action bit position
.equ TWI_SLAVE_CMD_gm = 0x03 ; Command group mask
.equ TWI_SLAVE_CMD_gp = 0 ; Command group position
.equ TWI_SLAVE_CMD0_bm = (1<<0) ; Command bit 0 mask
.equ TWI_SLAVE_CMD0_bp = 0 ; Command bit 0 position
.equ TWI_SLAVE_CMD1_bm = (1<<1) ; Command bit 1 mask
.equ TWI_SLAVE_CMD1_bp = 1 ; Command bit 1 position

; TWI_SLAVE_STATUS masks
.equ TWI_SLAVE_DIF_bm = 0x80 ; Data Interrupt Flag bit mask
.equ TWI_SLAVE_DIF_bp = 7 ; Data Interrupt Flag bit position
.equ TWI_SLAVE_APIF_bm = 0x40 ; Address/Stop Interrupt Flag bit mask
.equ TWI_SLAVE_APIF_bp = 6 ; Address/Stop Interrupt Flag bit position
.equ TWI_SLAVE_CLKHOLD_bm = 0x20 ; Clock Hold bit mask
.equ TWI_SLAVE_CLKHOLD_bp = 5 ; Clock Hold bit position
.equ TWI_SLAVE_RXACK_bm = 0x10 ; Received Acknowledge bit mask
.equ TWI_SLAVE_RXACK_bp = 4 ; Received Acknowledge bit position
.equ TWI_SLAVE_COLL_bm = 0x08 ; Collision bit mask
.equ TWI_SLAVE_COLL_bp = 3 ; Collision bit position
.equ TWI_SLAVE_BUSERR_bm = 0x04 ; Bus Error bit mask
.equ TWI_SLAVE_BUSERR_bp = 2 ; Bus Error bit position
.equ TWI_SLAVE_DIR_bm = 0x02 ; Read/Write Direction bit mask
.equ TWI_SLAVE_DIR_bp = 1 ; Read/Write Direction bit position
.equ TWI_SLAVE_AP_bm = 0x01 ; Slave Address or Stop bit mask
.equ TWI_SLAVE_AP_bp = 0 ; Slave Address or Stop bit position

; TWI_SLAVE_ADDRMASK masks
.equ TWI_SLAVE_ADDRMASK_gm = 0xFE ; Address Mask group mask
.equ TWI_SLAVE_ADDRMASK_gp = 1 ; Address Mask group position
.equ TWI_SLAVE_ADDRMASK0_bm = (1<<1) ; Address Mask bit 0 mask
.equ TWI_SLAVE_ADDRMASK0_bp = 1 ; Address Mask bit 0 position
.equ TWI_SLAVE_ADDRMASK1_bm = (1<<2) ; Address Mask bit 1 mask
.equ TWI_SLAVE_ADDRMASK1_bp = 2 ; Address Mask bit 1 position
.equ TWI_SLAVE_ADDRMASK2_bm = (1<<3) ; Address Mask bit 2 mask
.equ TWI_SLAVE_ADDRMASK2_bp = 3 ; Address Mask bit 2 position
.equ TWI_SLAVE_ADDRMASK3_bm = (1<<4) ; Address Mask bit 3 mask
.equ TWI_SLAVE_ADDRMASK3_bp = 4 ; Address Mask bit 3 position
.equ TWI_SLAVE_ADDRMASK4_bm = (1<<5) ; Address Mask bit 4 mask
.equ TWI_SLAVE_ADDRMASK4_bp = 5 ; Address Mask bit 4 position
.equ TWI_SLAVE_ADDRMASK5_bm = (1<<6) ; Address Mask bit 5 mask
.equ TWI_SLAVE_ADDRMASK5_bp = 6 ; Address Mask bit 5 position
.equ TWI_SLAVE_ADDRMASK6_bm = (1<<7) ; Address Mask bit 6 mask
.equ TWI_SLAVE_ADDRMASK6_bp = 7 ; Address Mask bit 6 position
.equ TWI_SLAVE_ADDREN_bm = 0x01 ; Address Enable bit mask
.equ TWI_SLAVE_ADDREN_bp = 0 ; Address Enable bit position

; TWI_CTRL masks
.equ TWI_SDAHOLD_gm = 0x06 ; SDA Hold Time Enable group mask
.equ TWI_SDAHOLD_gp = 1 ; SDA Hold Time Enable group position
.equ TWI_SDAHOLD0_bm = (1<<1) ; SDA Hold Time Enable bit 0 mask
.equ TWI_SDAHOLD0_bp = 1 ; SDA Hold Time Enable bit 0 position
.equ TWI_SDAHOLD1_bm = (1<<2) ; SDA Hold Time Enable bit 1 mask
.equ TWI_SDAHOLD1_bp = 2 ; SDA Hold Time Enable bit 1 position
.equ TWI_EDIEN_bm = 0x01 ; External Driver Interface Enable bit mask
.equ TWI_EDIEN_bp = 0 ; External Driver Interface Enable bit position
 
; SDA Hold Time
.equ TWI_SDAHOLD_OFF_gc = (0x00<<1) ; SDA Hold Time off
.equ TWI_SDAHOLD_50NS_gc = (0x01<<1) ; SDA Hold Time 50 ns
.equ TWI_SDAHOLD_300NS_gc = (0x02<<1) ; SDA Hold Time 300 ns
.equ TWI_SDAHOLD_400NS_gc = (0x03<<1) ; SDA Hold Time 400 ns

; Master Interrupt Level
.equ TWI_MASTER_INTLVL_OFF_gc = (0x00<<6) ; Interrupt Disabled
.equ TWI_MASTER_INTLVL_LO_gc = (0x01<<6) ; Low Level
.equ TWI_MASTER_INTLVL_MED_gc = (0x02<<6) ; Medium Level
.equ TWI_MASTER_INTLVL_HI_gc = (0x03<<6) ; High Level

; Inactive Timeout
.equ TWI_MASTER_TIMEOUT_DISABLED_gc = (0x00<<2) ; Bus Timeout Disabled
.equ TWI_MASTER_TIMEOUT_50US_gc = (0x01<<2) ; 50 Microseconds
.equ TWI_MASTER_TIMEOUT_100US_gc = (0x02<<2) ; 100 Microseconds
.equ TWI_MASTER_TIMEOUT_200US_gc = (0x03<<2) ; 200 Microseconds

; Master Command
.equ TWI_MASTER_CMD_NOACT_gc = (0x00<<0) ; No Action
.equ TWI_MASTER_CMD_REPSTART_gc = (0x01<<0) ; Issue Repeated Start Condition
.equ TWI_MASTER_CMD_RECVTRANS_gc = (0x02<<0) ; Receive or Transmit Data
.equ TWI_MASTER_CMD_STOP_gc = (0x03<<0) ; Issue Stop Condition

; Master Bus State
.equ TWI_MASTER_BUSSTATE_UNKNOWN_gc = (0x00<<0) ; Unknown Bus State
.equ TWI_MASTER_BUSSTATE_IDLE_gc = (0x01<<0) ; Bus is Idle
.equ TWI_MASTER_BUSSTATE_OWNER_gc = (0x02<<0) ; This Module Controls The Bus
.equ TWI_MASTER_BUSSTATE_BUSY_gc = (0x03<<0) ; The Bus is Busy

; Slave Interrupt Level
.equ TWI_SLAVE_INTLVL_OFF_gc = (0x00<<6) ; Interrupt Disabled
.equ TWI_SLAVE_INTLVL_LO_gc = (0x01<<6) ; Low Level
.equ TWI_SLAVE_INTLVL_MED_gc = (0x02<<6) ; Medium Level
.equ TWI_SLAVE_INTLVL_HI_gc = (0x03<<6) ; High Level

; Slave Command
.equ TWI_SLAVE_CMD_NOACT_gc = (0x00<<0) ; No Action
.equ TWI_SLAVE_CMD_COMPTRANS_gc = (0x02<<0) ; Used To Complete a Transaction
.equ TWI_SLAVE_CMD_RESPONSE_gc = (0x03<<0) ; Used in Response to Address/Data Interrupt


;***************************************************************************
;** USB - USB
;***************************************************************************/

; USB_EP_STATUS masks
.equ USB_EP_STALLF_bm = 0x80 ; Endpoint Stall Flag bit mask
.equ USB_EP_STALLF_bp = 7 ; Endpoint Stall Flag bit position
.equ USB_EP_CRC_bm = 0x80 ; CRC Error Flag bit mask
.equ USB_EP_CRC_bp = 7 ; CRC Error Flag bit position
.equ USB_EP_UNF_bm = 0x40 ; Underflow Enpoint FLag bit mask
.equ USB_EP_UNF_bp = 6 ; Underflow Enpoint FLag bit position
.equ USB_EP_OVF_bm = 0x40 ; Overflow Enpoint Flag for Output Endpoints bit mask
.equ USB_EP_OVF_bp = 6 ; Overflow Enpoint Flag for Output Endpoints bit position
.equ USB_EP_TRNCOMPL0_bm = 0x20 ; Transaction Complete 0 Flag bit mask
.equ USB_EP_TRNCOMPL0_bp = 5 ; Transaction Complete 0 Flag bit position
.equ USB_EP_TRNCOMPL1_bm = 0x10 ; Transaction Complete 1 Flag bit mask
.equ USB_EP_TRNCOMPL1_bp = 4 ; Transaction Complete 1 Flag bit position
.equ USB_EP_SETUP_bm = 0x10 ; SETUP Transaction Complete Flag bit mask
.equ USB_EP_SETUP_bp = 4 ; SETUP Transaction Complete Flag bit position
.equ USB_EP_BANK_bm = 0x08 ; Bank Select bit mask
.equ USB_EP_BANK_bp = 3 ; Bank Select bit position
.equ USB_EP_BUSNACK1_bm = 0x04 ; Data Buffer 1 Not Acknowledge bit mask
.equ USB_EP_BUSNACK1_bp = 2 ; Data Buffer 1 Not Acknowledge bit position
.equ USB_EP_BUSNACK0_bm = 0x02 ; Data Buffer 0 Not Acknowledge bit mask
.equ USB_EP_BUSNACK0_bp = 1 ; Data Buffer 0 Not Acknowledge bit position
.equ USB_EP_TOGGLE_bm = 0x01 ; Data Toggle bit mask
.equ USB_EP_TOGGLE_bp = 0 ; Data Toggle bit position

; USB_EP_CTRL masks
.equ USB_EP_TYPE_gm = 0xC0 ; Endpoint Type group mask
.equ USB_EP_TYPE_gp = 6 ; Endpoint Type group position
.equ USB_EP_TYPE0_bm = (1<<6) ; Endpoint Type bit 0 mask
.equ USB_EP_TYPE0_bp = 6 ; Endpoint Type bit 0 position
.equ USB_EP_TYPE1_bm = (1<<7) ; Endpoint Type bit 1 mask
.equ USB_EP_TYPE1_bp = 7 ; Endpoint Type bit 1 position
.equ USB_EP_MULTIPKT_bm = 0x20 ; Multi Packet Transfer Enable bit mask
.equ USB_EP_MULTIPKT_bp = 5 ; Multi Packet Transfer Enable bit position
.equ USB_EP_PINGPONG_bm = 0x10 ; Ping-Pong Enable bit mask
.equ USB_EP_PINGPONG_bp = 4 ; Ping-Pong Enable bit position
.equ USB_EP_INTDSBL_bm = 0x08 ; Interrupt Disable bit mask
.equ USB_EP_INTDSBL_bp = 3 ; Interrupt Disable bit position
.equ USB_EP_STALL_bm = 0x04 ; Data Stall bit mask
.equ USB_EP_STALL_bp = 2 ; Data Stall bit position
.equ USB_EP_BUFSIZE_gm = 0x07 ; Data Buffer Size group mask
.equ USB_EP_BUFSIZE_gp = 0 ; Data Buffer Size group position
.equ USB_EP_BUFSIZE0_bm = (1<<0) ; Data Buffer Size bit 0 mask
.equ USB_EP_BUFSIZE0_bp = 0 ; Data Buffer Size bit 0 position
.equ USB_EP_BUFSIZE1_bm = (1<<1) ; Data Buffer Size bit 1 mask
.equ USB_EP_BUFSIZE1_bp = 1 ; Data Buffer Size bit 1 position
.equ USB_EP_BUFSIZE2_bm = (1<<2) ; Data Buffer Size bit 2 mask
.equ USB_EP_BUFSIZE2_bp = 2 ; Data Buffer Size bit 2 position

; USB_CTRLA masks
.equ USB_ENABLE_bm = 0x80 ; USB Enable bit mask
.equ USB_ENABLE_bp = 7 ; USB Enable bit position
.equ USB_SPEED_bm = 0x40 ; Speed Select bit mask
.equ USB_SPEED_bp = 6 ; Speed Select bit position
.equ USB_FIFOEN_bm = 0x20 ; USB FIFO Enable bit mask
.equ USB_FIFOEN_bp = 5 ; USB FIFO Enable bit position
.equ USB_STFRNUM_bm = 0x10 ; Store Frame Number Enable bit mask
.equ USB_STFRNUM_bp = 4 ; Store Frame Number Enable bit position
.equ USB_MAXEP_gm = 0x0F ; Maximum Endpoint Addresses group mask
.equ USB_MAXEP_gp = 0 ; Maximum Endpoint Addresses group position
.equ USB_MAXEP0_bm = (1<<0) ; Maximum Endpoint Addresses bit 0 mask
.equ USB_MAXEP0_bp = 0 ; Maximum Endpoint Addresses bit 0 position
.equ USB_MAXEP1_bm = (1<<1) ; Maximum Endpoint Addresses bit 1 mask
.equ USB_MAXEP1_bp = 1 ; Maximum Endpoint Addresses bit 1 position
.equ USB_MAXEP2_bm = (1<<2) ; Maximum Endpoint Addresses bit 2 mask
.equ USB_MAXEP2_bp = 2 ; Maximum Endpoint Addresses bit 2 position
.equ USB_MAXEP3_bm = (1<<3) ; Maximum Endpoint Addresses bit 3 mask
.equ USB_MAXEP3_bp = 3 ; Maximum Endpoint Addresses bit 3 position

; USB_CTRLB masks
.equ USB_PULLRST_bm = 0x10 ; Pull during Reset bit mask
.equ USB_PULLRST_bp = 4 ; Pull during Reset bit position
.equ USB_RWAKEUP_bm = 0x04 ; Remote Wake-up bit mask
.equ USB_RWAKEUP_bp = 2 ; Remote Wake-up bit position
.equ USB_GNACK_bm = 0x02 ; Global NACK bit mask
.equ USB_GNACK_bp = 1 ; Global NACK bit position
.equ USB_ATTACH_bm = 0x01 ; Attach bit mask
.equ USB_ATTACH_bp = 0 ; Attach bit position

; USB_STATUS masks
.equ USB_URESUME_bm = 0x08 ; Upstream Resume bit mask
.equ USB_URESUME_bp = 3 ; Upstream Resume bit position
.equ USB_RESUME_bm = 0x04 ; Resume bit mask
.equ USB_RESUME_bp = 2 ; Resume bit position
.equ USB_SUSPEND_bm = 0x02 ; Bus Suspended bit mask
.equ USB_SUSPEND_bp = 1 ; Bus Suspended bit position
.equ USB_BUSRST_bm = 0x01 ; Bus Reset bit mask
.equ USB_BUSRST_bp = 0 ; Bus Reset bit position

; USB_ADDR masks
.equ USB_ADDR_gm = 0x7F ; Device Address group mask
.equ USB_ADDR_gp = 0 ; Device Address group position
.equ USB_ADDR0_bm = (1<<0) ; Device Address bit 0 mask
.equ USB_ADDR0_bp = 0 ; Device Address bit 0 position
.equ USB_ADDR1_bm = (1<<1) ; Device Address bit 1 mask
.equ USB_ADDR1_bp = 1 ; Device Address bit 1 position
.equ USB_ADDR2_bm = (1<<2) ; Device Address bit 2 mask
.equ USB_ADDR2_bp = 2 ; Device Address bit 2 position
.equ USB_ADDR3_bm = (1<<3) ; Device Address bit 3 mask
.equ USB_ADDR3_bp = 3 ; Device Address bit 3 position
.equ USB_ADDR4_bm = (1<<4) ; Device Address bit 4 mask
.equ USB_ADDR4_bp = 4 ; Device Address bit 4 position
.equ USB_ADDR5_bm = (1<<5) ; Device Address bit 5 mask
.equ USB_ADDR5_bp = 5 ; Device Address bit 5 position
.equ USB_ADDR6_bm = (1<<6) ; Device Address bit 6 mask
.equ USB_ADDR6_bp = 6 ; Device Address bit 6 position

; USB_FIFOWP masks
.equ USB_FIFOWP_gm = 0x1F ; FIFO Write Pointer group mask
.equ USB_FIFOWP_gp = 0 ; FIFO Write Pointer group position
.equ USB_FIFOWP0_bm = (1<<0) ; FIFO Write Pointer bit 0 mask
.equ USB_FIFOWP0_bp = 0 ; FIFO Write Pointer bit 0 position
.equ USB_FIFOWP1_bm = (1<<1) ; FIFO Write Pointer bit 1 mask
.equ USB_FIFOWP1_bp = 1 ; FIFO Write Pointer bit 1 position
.equ USB_FIFOWP2_bm = (1<<2) ; FIFO Write Pointer bit 2 mask
.equ USB_FIFOWP2_bp = 2 ; FIFO Write Pointer bit 2 position
.equ USB_FIFOWP3_bm = (1<<3) ; FIFO Write Pointer bit 3 mask
.equ USB_FIFOWP3_bp = 3 ; FIFO Write Pointer bit 3 position
.equ USB_FIFOWP4_bm = (1<<4) ; FIFO Write Pointer bit 4 mask
.equ USB_FIFOWP4_bp = 4 ; FIFO Write Pointer bit 4 position

; USB_FIFORP masks
.equ USB_FIFORP_gm = 0x1F ; FIFO Read Pointer group mask
.equ USB_FIFORP_gp = 0 ; FIFO Read Pointer group position
.equ USB_FIFORP0_bm = (1<<0) ; FIFO Read Pointer bit 0 mask
.equ USB_FIFORP0_bp = 0 ; FIFO Read Pointer bit 0 position
.equ USB_FIFORP1_bm = (1<<1) ; FIFO Read Pointer bit 1 mask
.equ USB_FIFORP1_bp = 1 ; FIFO Read Pointer bit 1 position
.equ USB_FIFORP2_bm = (1<<2) ; FIFO Read Pointer bit 2 mask
.equ USB_FIFORP2_bp = 2 ; FIFO Read Pointer bit 2 position
.equ USB_FIFORP3_bm = (1<<3) ; FIFO Read Pointer bit 3 mask
.equ USB_FIFORP3_bp = 3 ; FIFO Read Pointer bit 3 position
.equ USB_FIFORP4_bm = (1<<4) ; FIFO Read Pointer bit 4 mask
.equ USB_FIFORP4_bp = 4 ; FIFO Read Pointer bit 4 position

; USB_INTCTRLA masks
.equ USB_SOFIE_bm = 0x80 ; Start Of Frame Interrupt Enable bit mask
.equ USB_SOFIE_bp = 7 ; Start Of Frame Interrupt Enable bit position
.equ USB_BUSEVIE_bm = 0x40 ; Bus Event Interrupt Enable bit mask
.equ USB_BUSEVIE_bp = 6 ; Bus Event Interrupt Enable bit position
.equ USB_BUSERRIE_bm = 0x20 ; Bus Error Interrupt Enable bit mask
.equ USB_BUSERRIE_bp = 5 ; Bus Error Interrupt Enable bit position
.equ USB_STALLIE_bm = 0x10 ; STALL Interrupt Enable bit mask
.equ USB_STALLIE_bp = 4 ; STALL Interrupt Enable bit position
.equ USB_INTLVL_gm = 0x03 ; Interrupt Level group mask
.equ USB_INTLVL_gp = 0 ; Interrupt Level group position
.equ USB_INTLVL0_bm = (1<<0) ; Interrupt Level bit 0 mask
.equ USB_INTLVL0_bp = 0 ; Interrupt Level bit 0 position
.equ USB_INTLVL1_bm = (1<<1) ; Interrupt Level bit 1 mask
.equ USB_INTLVL1_bp = 1 ; Interrupt Level bit 1 position

; USB_INTCTRLB masks
.equ USB_TRNIE_bm = 0x02 ; Transaction Complete Interrupt Enable bit mask
.equ USB_TRNIE_bp = 1 ; Transaction Complete Interrupt Enable bit position
.equ USB_SETUPIE_bm = 0x01 ; SETUP Transaction Complete Interrupt Enable bit mask
.equ USB_SETUPIE_bp = 0 ; SETUP Transaction Complete Interrupt Enable bit position

; USB_INTFLAGSACLR masks
.equ USB_SOFIF_bm = 0x80 ; Start Of Frame Interrupt Flag bit mask
.equ USB_SOFIF_bp = 7 ; Start Of Frame Interrupt Flag bit position
.equ USB_SUSPENDIF_bm = 0x40 ; Suspend Interrupt Flag bit mask
.equ USB_SUSPENDIF_bp = 6 ; Suspend Interrupt Flag bit position
.equ USB_RESUMEIF_bm = 0x20 ; Resume Interrupt Flag bit mask
.equ USB_RESUMEIF_bp = 5 ; Resume Interrupt Flag bit position
.equ USB_RSTIF_bm = 0x10 ; Reset Interrupt Flag bit mask
.equ USB_RSTIF_bp = 4 ; Reset Interrupt Flag bit position
.equ USB_CRCIF_bm = 0x08 ; Isochronous CRC Error Interrupt Flag bit mask
.equ USB_CRCIF_bp = 3 ; Isochronous CRC Error Interrupt Flag bit position
.equ USB_UNFIF_bm = 0x04 ; Underflow Interrupt Flag bit mask
.equ USB_UNFIF_bp = 2 ; Underflow Interrupt Flag bit position
.equ USB_OVFIF_bm = 0x02 ; Overflow Interrupt Flag bit mask
.equ USB_OVFIF_bp = 1 ; Overflow Interrupt Flag bit position
.equ USB_STALLIF_bm = 0x01 ; STALL Interrupt Flag bit mask
.equ USB_STALLIF_bp = 0 ; STALL Interrupt Flag bit position

; USB_INTFLAGSASET masks
; Masks for SOFIF aready defined
; Masks for SUSPENDIF aready defined
; Masks for RESUMEIF aready defined
; Masks for RSTIF aready defined
; Masks for CRCIF aready defined
; Masks for UNFIF aready defined
; Masks for OVFIF aready defined
; Masks for STALLIF aready defined

; USB_INTFLAGSBCLR masks
.equ USB_TRNIF_bm = 0x02 ; Transaction Complete Interrupt Flag bit mask
.equ USB_TRNIF_bp = 1 ; Transaction Complete Interrupt Flag bit position
.equ USB_SETUPIF_bm = 0x01 ; SETUP Transaction Complete Interrupt Flag bit mask
.equ USB_SETUPIF_bp = 0 ; SETUP Transaction Complete Interrupt Flag bit position

; USB_INTFLAGSBSET masks
; Masks for TRNIF aready defined
; Masks for SETUPIF aready defined
 
; Interrupt level
.equ USB_INTLVL_OFF_gc = (0x00<<0) ; Interrupt disabled
.equ USB_INTLVL_LO_gc = (0x01<<0) ; Low level
.equ USB_INTLVL_MED_gc = (0x02<<0) ; Medium level
.equ USB_INTLVL_HI_gc = (0x03<<0) ; High level

; USB Endpoint Type
.equ USB_EP_TYPE_DISABLE_gc = (0x00<<6) ; Endpoint Disabled
.equ USB_EP_TYPE_CONTROL_gc = (0x01<<6) ; Control
.equ USB_EP_TYPE_BULK_gc = (0x02<<6) ; Bulk/Interrupt
.equ USB_EP_TYPE_ISOCHRONOUS_gc = (0x03<<6) ; Isochronous

; USB Endpoint Buffersize
.equ USB_EP_BUFSIZE_8_gc = (0x00<<0) ; 8 bytes buffer size
.equ USB_EP_BUFSIZE_16_gc = (0x01<<0) ; 16 bytes buffer size
.equ USB_EP_BUFSIZE_32_gc = (0x02<<0) ; 32 bytes buffer size
.equ USB_EP_BUFSIZE_64_gc = (0x03<<0) ; 64 bytes buffer size
.equ USB_EP_BUFSIZE_128_gc = (0x04<<0) ; 128 bytes buffer size
.equ USB_EP_BUFSIZE_256_gc = (0x05<<0) ; 256 bytes buffer size
.equ USB_EP_BUFSIZE_512_gc = (0x06<<0) ; 512 bytes buffer size
.equ USB_EP_BUFSIZE_1023_gc = (0x07<<0) ; 1023 bytes buffer size


;***************************************************************************
;** PORT - I/O Port Configuration
;***************************************************************************/

; PORT_INTCTRL masks
.equ PORT_INT1LVL_gm = 0x0C ; Port Interrupt 1 Level group mask
.equ PORT_INT1LVL_gp = 2 ; Port Interrupt 1 Level group position
.equ PORT_INT1LVL0_bm = (1<<2) ; Port Interrupt 1 Level bit 0 mask
.equ PORT_INT1LVL0_bp = 2 ; Port Interrupt 1 Level bit 0 position
.equ PORT_INT1LVL1_bm = (1<<3) ; Port Interrupt 1 Level bit 1 mask
.equ PORT_INT1LVL1_bp = 3 ; Port Interrupt 1 Level bit 1 position
.equ PORT_INT0LVL_gm = 0x03 ; Port Interrupt 0 Level group mask
.equ PORT_INT0LVL_gp = 0 ; Port Interrupt 0 Level group position
.equ PORT_INT0LVL0_bm = (1<<0) ; Port Interrupt 0 Level bit 0 mask
.equ PORT_INT0LVL0_bp = 0 ; Port Interrupt 0 Level bit 0 position
.equ PORT_INT0LVL1_bm = (1<<1) ; Port Interrupt 0 Level bit 1 mask
.equ PORT_INT0LVL1_bp = 1 ; Port Interrupt 0 Level bit 1 position

; PORT_INTFLAGS masks
.equ PORT_INT1IF_bm = 0x02 ; Port Interrupt 1 Flag bit mask
.equ PORT_INT1IF_bp = 1 ; Port Interrupt 1 Flag bit position
.equ PORT_INT0IF_bm = 0x01 ; Port Interrupt 0 Flag bit mask
.equ PORT_INT0IF_bp = 0 ; Port Interrupt 0 Flag bit position

; PORT_REMAP masks
.equ PORT_SPI_bm = 0x20 ; SPI bit mask
.equ PORT_SPI_bp = 5 ; SPI bit position
.equ PORT_USART0_bm = 0x10 ; USART0 bit mask
.equ PORT_USART0_bp = 4 ; USART0 bit position
.equ PORT_TC0D_bm = 0x08 ; Timer/Counter 0 Output Compare D bit mask
.equ PORT_TC0D_bp = 3 ; Timer/Counter 0 Output Compare D bit position
.equ PORT_TC0C_bm = 0x04 ; Timer/Counter 0 Output Compare C bit mask
.equ PORT_TC0C_bp = 2 ; Timer/Counter 0 Output Compare C bit position
.equ PORT_TC0B_bm = 0x02 ; Timer/Counter 0 Output Compare B bit mask
.equ PORT_TC0B_bp = 1 ; Timer/Counter 0 Output Compare B bit position
.equ PORT_TC0A_bm = 0x01 ; Timer/Counter 0 Output Compare A bit mask
.equ PORT_TC0A_bp = 0 ; Timer/Counter 0 Output Compare A bit position

; PORT_PIN0CTRL masks
.equ PORT_SRLEN_bm = 0x80 ; Slew Rate Enable bit mask
.equ PORT_SRLEN_bp = 7 ; Slew Rate Enable bit position
.equ PORT_INVEN_bm = 0x40 ; Inverted I/O Enable bit mask
.equ PORT_INVEN_bp = 6 ; Inverted I/O Enable bit position
.equ PORT_OPC_gm = 0x38 ; Output/Pull Configuration group mask
.equ PORT_OPC_gp = 3 ; Output/Pull Configuration group position
.equ PORT_OPC0_bm = (1<<3) ; Output/Pull Configuration bit 0 mask
.equ PORT_OPC0_bp = 3 ; Output/Pull Configuration bit 0 position
.equ PORT_OPC1_bm = (1<<4) ; Output/Pull Configuration bit 1 mask
.equ PORT_OPC1_bp = 4 ; Output/Pull Configuration bit 1 position
.equ PORT_OPC2_bm = (1<<5) ; Output/Pull Configuration bit 2 mask
.equ PORT_OPC2_bp = 5 ; Output/Pull Configuration bit 2 position
.equ PORT_ISC_gm = 0x07 ; Input/Sense Configuration group mask
.equ PORT_ISC_gp = 0 ; Input/Sense Configuration group position
.equ PORT_ISC0_bm = (1<<0) ; Input/Sense Configuration bit 0 mask
.equ PORT_ISC0_bp = 0 ; Input/Sense Configuration bit 0 position
.equ PORT_ISC1_bm = (1<<1) ; Input/Sense Configuration bit 1 mask
.equ PORT_ISC1_bp = 1 ; Input/Sense Configuration bit 1 position
.equ PORT_ISC2_bm = (1<<2) ; Input/Sense Configuration bit 2 mask
.equ PORT_ISC2_bp = 2 ; Input/Sense Configuration bit 2 position

; PORT_PIN1CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN2CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN3CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN4CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN5CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN6CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined

; PORT_PIN7CTRL masks
; Masks for SRLEN aready defined
; Masks for INVEN aready defined
; Masks for OPC aready defined
; Masks for ISC aready defined
 
; Port Interrupt 0 Level
.equ PORT_INT0LVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ PORT_INT0LVL_LO_gc = (0x01<<0) ; Low Level
.equ PORT_INT0LVL_MED_gc = (0x02<<0) ; Medium Level
.equ PORT_INT0LVL_HI_gc = (0x03<<0) ; High Level

; Port Interrupt 1 Level
.equ PORT_INT1LVL_OFF_gc = (0x00<<2) ; Interrupt Disabled
.equ PORT_INT1LVL_LO_gc = (0x01<<2) ; Low Level
.equ PORT_INT1LVL_MED_gc = (0x02<<2) ; Medium Level
.equ PORT_INT1LVL_HI_gc = (0x03<<2) ; High Level

; Output/Pull Configuration
.equ PORT_OPC_TOTEM_gc = (0x00<<3) ; Totempole
.equ PORT_OPC_BUSKEEPER_gc = (0x01<<3) ; Totempole w/ Bus keeper on Input and Output
.equ PORT_OPC_PULLDOWN_gc = (0x02<<3) ; Totempole w/ Pull-down on Input
.equ PORT_OPC_PULLUP_gc = (0x03<<3) ; Totempole w/ Pull-up on Input
.equ PORT_OPC_WIREDOR_gc = (0x04<<3) ; Wired OR
.equ PORT_OPC_WIREDAND_gc = (0x05<<3) ; Wired AND
.equ PORT_OPC_WIREDORPULL_gc = (0x06<<3) ; Wired OR w/ Pull-down
.equ PORT_OPC_WIREDANDPULL_gc = (0x07<<3) ; Wired AND w/ Pull-up

; Input/Sense Configuration
.equ PORT_ISC_BOTHEDGES_gc = (0x00<<0) ; Sense Both Edges
.equ PORT_ISC_RISING_gc = (0x01<<0) ; Sense Rising Edge
.equ PORT_ISC_FALLING_gc = (0x02<<0) ; Sense Falling Edge
.equ PORT_ISC_LEVEL_gc = (0x03<<0) ; Sense Level (Transparent For Events)
.equ PORT_ISC_INPUT_DISABLE_gc = (0x07<<0) ; Disable Digital Input Buffer


;***************************************************************************
;** TC - 16-bit Timer/Counter With PWM
;***************************************************************************/

; TC0_CTRLA masks
.equ TC0_CLKSEL_gm = 0x0F ; Clock Selection group mask
.equ TC0_CLKSEL_gp = 0 ; Clock Selection group position
.equ TC0_CLKSEL0_bm = (1<<0) ; Clock Selection bit 0 mask
.equ TC0_CLKSEL0_bp = 0 ; Clock Selection bit 0 position
.equ TC0_CLKSEL1_bm = (1<<1) ; Clock Selection bit 1 mask
.equ TC0_CLKSEL1_bp = 1 ; Clock Selection bit 1 position
.equ TC0_CLKSEL2_bm = (1<<2) ; Clock Selection bit 2 mask
.equ TC0_CLKSEL2_bp = 2 ; Clock Selection bit 2 position
.equ TC0_CLKSEL3_bm = (1<<3) ; Clock Selection bit 3 mask
.equ TC0_CLKSEL3_bp = 3 ; Clock Selection bit 3 position

; TC0_CTRLB masks
.equ TC0_CCDEN_bm = 0x80 ; Compare or Capture D Enable bit mask
.equ TC0_CCDEN_bp = 7 ; Compare or Capture D Enable bit position
.equ TC0_CCCEN_bm = 0x40 ; Compare or Capture C Enable bit mask
.equ TC0_CCCEN_bp = 6 ; Compare or Capture C Enable bit position
.equ TC0_CCBEN_bm = 0x20 ; Compare or Capture B Enable bit mask
.equ TC0_CCBEN_bp = 5 ; Compare or Capture B Enable bit position
.equ TC0_CCAEN_bm = 0x10 ; Compare or Capture A Enable bit mask
.equ TC0_CCAEN_bp = 4 ; Compare or Capture A Enable bit position
.equ TC0_WGMODE_gm = 0x07 ; Waveform generation mode group mask
.equ TC0_WGMODE_gp = 0 ; Waveform generation mode group position
.equ TC0_WGMODE0_bm = (1<<0) ; Waveform generation mode bit 0 mask
.equ TC0_WGMODE0_bp = 0 ; Waveform generation mode bit 0 position
.equ TC0_WGMODE1_bm = (1<<1) ; Waveform generation mode bit 1 mask
.equ TC0_WGMODE1_bp = 1 ; Waveform generation mode bit 1 position
.equ TC0_WGMODE2_bm = (1<<2) ; Waveform generation mode bit 2 mask
.equ TC0_WGMODE2_bp = 2 ; Waveform generation mode bit 2 position

; TC0_CTRLC masks
.equ TC0_CMPD_bm = 0x08 ; Compare D Output Value bit mask
.equ TC0_CMPD_bp = 3 ; Compare D Output Value bit position
.equ TC0_CMPC_bm = 0x04 ; Compare C Output Value bit mask
.equ TC0_CMPC_bp = 2 ; Compare C Output Value bit position
.equ TC0_CMPB_bm = 0x02 ; Compare B Output Value bit mask
.equ TC0_CMPB_bp = 1 ; Compare B Output Value bit position
.equ TC0_CMPA_bm = 0x01 ; Compare A Output Value bit mask
.equ TC0_CMPA_bp = 0 ; Compare A Output Value bit position

; TC0_CTRLD masks
.equ TC0_EVACT_gm = 0xE0 ; Event Action group mask
.equ TC0_EVACT_gp = 5 ; Event Action group position
.equ TC0_EVACT0_bm = (1<<5) ; Event Action bit 0 mask
.equ TC0_EVACT0_bp = 5 ; Event Action bit 0 position
.equ TC0_EVACT1_bm = (1<<6) ; Event Action bit 1 mask
.equ TC0_EVACT1_bp = 6 ; Event Action bit 1 position
.equ TC0_EVACT2_bm = (1<<7) ; Event Action bit 2 mask
.equ TC0_EVACT2_bp = 7 ; Event Action bit 2 position
.equ TC0_EVDLY_bm = 0x10 ; Event Delay bit mask
.equ TC0_EVDLY_bp = 4 ; Event Delay bit position
.equ TC0_EVSEL_gm = 0x0F ; Event Source Select group mask
.equ TC0_EVSEL_gp = 0 ; Event Source Select group position
.equ TC0_EVSEL0_bm = (1<<0) ; Event Source Select bit 0 mask
.equ TC0_EVSEL0_bp = 0 ; Event Source Select bit 0 position
.equ TC0_EVSEL1_bm = (1<<1) ; Event Source Select bit 1 mask
.equ TC0_EVSEL1_bp = 1 ; Event Source Select bit 1 position
.equ TC0_EVSEL2_bm = (1<<2) ; Event Source Select bit 2 mask
.equ TC0_EVSEL2_bp = 2 ; Event Source Select bit 2 position
.equ TC0_EVSEL3_bm = (1<<3) ; Event Source Select bit 3 mask
.equ TC0_EVSEL3_bp = 3 ; Event Source Select bit 3 position

; TC0_CTRLE masks
.equ TC0_BYTEM_gm = 0x03 ; Byte Mode group mask
.equ TC0_BYTEM_gp = 0 ; Byte Mode group position
.equ TC0_BYTEM0_bm = (1<<0) ; Byte Mode bit 0 mask
.equ TC0_BYTEM0_bp = 0 ; Byte Mode bit 0 position
.equ TC0_BYTEM1_bm = (1<<1) ; Byte Mode bit 1 mask
.equ TC0_BYTEM1_bp = 1 ; Byte Mode bit 1 position

; TC0_INTCTRLA masks
.equ TC0_ERRINTLVL_gm = 0x0C ; Error Interrupt Level group mask
.equ TC0_ERRINTLVL_gp = 2 ; Error Interrupt Level group position
.equ TC0_ERRINTLVL0_bm = (1<<2) ; Error Interrupt Level bit 0 mask
.equ TC0_ERRINTLVL0_bp = 2 ; Error Interrupt Level bit 0 position
.equ TC0_ERRINTLVL1_bm = (1<<3) ; Error Interrupt Level bit 1 mask
.equ TC0_ERRINTLVL1_bp = 3 ; Error Interrupt Level bit 1 position
.equ TC0_OVFINTLVL_gm = 0x03 ; Overflow interrupt level group mask
.equ TC0_OVFINTLVL_gp = 0 ; Overflow interrupt level group position
.equ TC0_OVFINTLVL0_bm = (1<<0) ; Overflow interrupt level bit 0 mask
.equ TC0_OVFINTLVL0_bp = 0 ; Overflow interrupt level bit 0 position
.equ TC0_OVFINTLVL1_bm = (1<<1) ; Overflow interrupt level bit 1 mask
.equ TC0_OVFINTLVL1_bp = 1 ; Overflow interrupt level bit 1 position

; TC0_INTCTRLB masks
.equ TC0_CCDINTLVL_gm = 0xC0 ; Compare or Capture D Interrupt Level group mask
.equ TC0_CCDINTLVL_gp = 6 ; Compare or Capture D Interrupt Level group position
.equ TC0_CCDINTLVL0_bm = (1<<6) ; Compare or Capture D Interrupt Level bit 0 mask
.equ TC0_CCDINTLVL0_bp = 6 ; Compare or Capture D Interrupt Level bit 0 position
.equ TC0_CCDINTLVL1_bm = (1<<7) ; Compare or Capture D Interrupt Level bit 1 mask
.equ TC0_CCDINTLVL1_bp = 7 ; Compare or Capture D Interrupt Level bit 1 position
.equ TC0_CCCINTLVL_gm = 0x30 ; Compare or Capture C Interrupt Level group mask
.equ TC0_CCCINTLVL_gp = 4 ; Compare or Capture C Interrupt Level group position
.equ TC0_CCCINTLVL0_bm = (1<<4) ; Compare or Capture C Interrupt Level bit 0 mask
.equ TC0_CCCINTLVL0_bp = 4 ; Compare or Capture C Interrupt Level bit 0 position
.equ TC0_CCCINTLVL1_bm = (1<<5) ; Compare or Capture C Interrupt Level bit 1 mask
.equ TC0_CCCINTLVL1_bp = 5 ; Compare or Capture C Interrupt Level bit 1 position
.equ TC0_CCBINTLVL_gm = 0x0C ; Compare or Capture B Interrupt Level group mask
.equ TC0_CCBINTLVL_gp = 2 ; Compare or Capture B Interrupt Level group position
.equ TC0_CCBINTLVL0_bm = (1<<2) ; Compare or Capture B Interrupt Level bit 0 mask
.equ TC0_CCBINTLVL0_bp = 2 ; Compare or Capture B Interrupt Level bit 0 position
.equ TC0_CCBINTLVL1_bm = (1<<3) ; Compare or Capture B Interrupt Level bit 1 mask
.equ TC0_CCBINTLVL1_bp = 3 ; Compare or Capture B Interrupt Level bit 1 position
.equ TC0_CCAINTLVL_gm = 0x03 ; Compare or Capture A Interrupt Level group mask
.equ TC0_CCAINTLVL_gp = 0 ; Compare or Capture A Interrupt Level group position
.equ TC0_CCAINTLVL0_bm = (1<<0) ; Compare or Capture A Interrupt Level bit 0 mask
.equ TC0_CCAINTLVL0_bp = 0 ; Compare or Capture A Interrupt Level bit 0 position
.equ TC0_CCAINTLVL1_bm = (1<<1) ; Compare or Capture A Interrupt Level bit 1 mask
.equ TC0_CCAINTLVL1_bp = 1 ; Compare or Capture A Interrupt Level bit 1 position

; TC0_CTRLFCLR masks
.equ TC0_CMD_gm = 0x0C ; Command group mask
.equ TC0_CMD_gp = 2 ; Command group position
.equ TC0_CMD0_bm = (1<<2) ; Command bit 0 mask
.equ TC0_CMD0_bp = 2 ; Command bit 0 position
.equ TC0_CMD1_bm = (1<<3) ; Command bit 1 mask
.equ TC0_CMD1_bp = 3 ; Command bit 1 position
.equ TC0_LUPD_bm = 0x02 ; Lock Update bit mask
.equ TC0_LUPD_bp = 1 ; Lock Update bit position
.equ TC0_DIR_bm = 0x01 ; Direction bit mask
.equ TC0_DIR_bp = 0 ; Direction bit position

; TC0_CTRLFSET masks
; Masks for CMD aready defined
; Masks for LUPD aready defined
; Masks for DIR aready defined

; TC0_CTRLGCLR masks
.equ TC0_CCDBV_bm = 0x10 ; Compare or Capture D Buffer Valid bit mask
.equ TC0_CCDBV_bp = 4 ; Compare or Capture D Buffer Valid bit position
.equ TC0_CCCBV_bm = 0x08 ; Compare or Capture C Buffer Valid bit mask
.equ TC0_CCCBV_bp = 3 ; Compare or Capture C Buffer Valid bit position
.equ TC0_CCBBV_bm = 0x04 ; Compare or Capture B Buffer Valid bit mask
.equ TC0_CCBBV_bp = 2 ; Compare or Capture B Buffer Valid bit position
.equ TC0_CCABV_bm = 0x02 ; Compare or Capture A Buffer Valid bit mask
.equ TC0_CCABV_bp = 1 ; Compare or Capture A Buffer Valid bit position
.equ TC0_PERBV_bm = 0x01 ; Period Buffer Valid bit mask
.equ TC0_PERBV_bp = 0 ; Period Buffer Valid bit position

; TC0_CTRLGSET masks
; Masks for CCDBV aready defined
; Masks for CCCBV aready defined
; Masks for CCBBV aready defined
; Masks for CCABV aready defined
; Masks for PERBV aready defined

; TC0_INTFLAGS masks
.equ TC0_CCDIF_bm = 0x80 ; Compare or Capture D Interrupt Flag bit mask
.equ TC0_CCDIF_bp = 7 ; Compare or Capture D Interrupt Flag bit position
.equ TC0_CCCIF_bm = 0x40 ; Compare or Capture C Interrupt Flag bit mask
.equ TC0_CCCIF_bp = 6 ; Compare or Capture C Interrupt Flag bit position
.equ TC0_CCBIF_bm = 0x20 ; Compare or Capture B Interrupt Flag bit mask
.equ TC0_CCBIF_bp = 5 ; Compare or Capture B Interrupt Flag bit position
.equ TC0_CCAIF_bm = 0x10 ; Compare or Capture A Interrupt Flag bit mask
.equ TC0_CCAIF_bp = 4 ; Compare or Capture A Interrupt Flag bit position
.equ TC0_ERRIF_bm = 0x02 ; Error Interrupt Flag bit mask
.equ TC0_ERRIF_bp = 1 ; Error Interrupt Flag bit position
.equ TC0_OVFIF_bm = 0x01 ; Overflow Interrupt Flag bit mask
.equ TC0_OVFIF_bp = 0 ; Overflow Interrupt Flag bit position

; TC1_CTRLA masks
.equ TC1_CLKSEL_gm = 0x0F ; Clock Selection group mask
.equ TC1_CLKSEL_gp = 0 ; Clock Selection group position
.equ TC1_CLKSEL0_bm = (1<<0) ; Clock Selection bit 0 mask
.equ TC1_CLKSEL0_bp = 0 ; Clock Selection bit 0 position
.equ TC1_CLKSEL1_bm = (1<<1) ; Clock Selection bit 1 mask
.equ TC1_CLKSEL1_bp = 1 ; Clock Selection bit 1 position
.equ TC1_CLKSEL2_bm = (1<<2) ; Clock Selection bit 2 mask
.equ TC1_CLKSEL2_bp = 2 ; Clock Selection bit 2 position
.equ TC1_CLKSEL3_bm = (1<<3) ; Clock Selection bit 3 mask
.equ TC1_CLKSEL3_bp = 3 ; Clock Selection bit 3 position

; TC1_CTRLB masks
.equ TC1_CCBEN_bm = 0x20 ; Compare or Capture B Enable bit mask
.equ TC1_CCBEN_bp = 5 ; Compare or Capture B Enable bit position
.equ TC1_CCAEN_bm = 0x10 ; Compare or Capture A Enable bit mask
.equ TC1_CCAEN_bp = 4 ; Compare or Capture A Enable bit position
.equ TC1_WGMODE_gm = 0x07 ; Waveform generation mode group mask
.equ TC1_WGMODE_gp = 0 ; Waveform generation mode group position
.equ TC1_WGMODE0_bm = (1<<0) ; Waveform generation mode bit 0 mask
.equ TC1_WGMODE0_bp = 0 ; Waveform generation mode bit 0 position
.equ TC1_WGMODE1_bm = (1<<1) ; Waveform generation mode bit 1 mask
.equ TC1_WGMODE1_bp = 1 ; Waveform generation mode bit 1 position
.equ TC1_WGMODE2_bm = (1<<2) ; Waveform generation mode bit 2 mask
.equ TC1_WGMODE2_bp = 2 ; Waveform generation mode bit 2 position

; TC1_CTRLC masks
.equ TC1_CMPB_bm = 0x02 ; Compare B Output Value bit mask
.equ TC1_CMPB_bp = 1 ; Compare B Output Value bit position
.equ TC1_CMPA_bm = 0x01 ; Compare A Output Value bit mask
.equ TC1_CMPA_bp = 0 ; Compare A Output Value bit position

; TC1_CTRLD masks
.equ TC1_EVACT_gm = 0xE0 ; Event Action group mask
.equ TC1_EVACT_gp = 5 ; Event Action group position
.equ TC1_EVACT0_bm = (1<<5) ; Event Action bit 0 mask
.equ TC1_EVACT0_bp = 5 ; Event Action bit 0 position
.equ TC1_EVACT1_bm = (1<<6) ; Event Action bit 1 mask
.equ TC1_EVACT1_bp = 6 ; Event Action bit 1 position
.equ TC1_EVACT2_bm = (1<<7) ; Event Action bit 2 mask
.equ TC1_EVACT2_bp = 7 ; Event Action bit 2 position
.equ TC1_EVDLY_bm = 0x10 ; Event Delay bit mask
.equ TC1_EVDLY_bp = 4 ; Event Delay bit position
.equ TC1_EVSEL_gm = 0x0F ; Event Source Select group mask
.equ TC1_EVSEL_gp = 0 ; Event Source Select group position
.equ TC1_EVSEL0_bm = (1<<0) ; Event Source Select bit 0 mask
.equ TC1_EVSEL0_bp = 0 ; Event Source Select bit 0 position
.equ TC1_EVSEL1_bm = (1<<1) ; Event Source Select bit 1 mask
.equ TC1_EVSEL1_bp = 1 ; Event Source Select bit 1 position
.equ TC1_EVSEL2_bm = (1<<2) ; Event Source Select bit 2 mask
.equ TC1_EVSEL2_bp = 2 ; Event Source Select bit 2 position
.equ TC1_EVSEL3_bm = (1<<3) ; Event Source Select bit 3 mask
.equ TC1_EVSEL3_bp = 3 ; Event Source Select bit 3 position

; TC1_CTRLE masks
.equ TC1_BYTEM_bm = 0x01 ; Byte Mode bit mask
.equ TC1_BYTEM_bp = 0 ; Byte Mode bit position

; TC1_INTCTRLA masks
.equ TC1_ERRINTLVL_gm = 0x0C ; Error Interrupt Level group mask
.equ TC1_ERRINTLVL_gp = 2 ; Error Interrupt Level group position
.equ TC1_ERRINTLVL0_bm = (1<<2) ; Error Interrupt Level bit 0 mask
.equ TC1_ERRINTLVL0_bp = 2 ; Error Interrupt Level bit 0 position
.equ TC1_ERRINTLVL1_bm = (1<<3) ; Error Interrupt Level bit 1 mask
.equ TC1_ERRINTLVL1_bp = 3 ; Error Interrupt Level bit 1 position
.equ TC1_OVFINTLVL_gm = 0x03 ; Overflow interrupt level group mask
.equ TC1_OVFINTLVL_gp = 0 ; Overflow interrupt level group position
.equ TC1_OVFINTLVL0_bm = (1<<0) ; Overflow interrupt level bit 0 mask
.equ TC1_OVFINTLVL0_bp = 0 ; Overflow interrupt level bit 0 position
.equ TC1_OVFINTLVL1_bm = (1<<1) ; Overflow interrupt level bit 1 mask
.equ TC1_OVFINTLVL1_bp = 1 ; Overflow interrupt level bit 1 position

; TC1_INTCTRLB masks
.equ TC1_CCBINTLVL_gm = 0x0C ; Compare or Capture B Interrupt Level group mask
.equ TC1_CCBINTLVL_gp = 2 ; Compare or Capture B Interrupt Level group position
.equ TC1_CCBINTLVL0_bm = (1<<2) ; Compare or Capture B Interrupt Level bit 0 mask
.equ TC1_CCBINTLVL0_bp = 2 ; Compare or Capture B Interrupt Level bit 0 position
.equ TC1_CCBINTLVL1_bm = (1<<3) ; Compare or Capture B Interrupt Level bit 1 mask
.equ TC1_CCBINTLVL1_bp = 3 ; Compare or Capture B Interrupt Level bit 1 position
.equ TC1_CCAINTLVL_gm = 0x03 ; Compare or Capture A Interrupt Level group mask
.equ TC1_CCAINTLVL_gp = 0 ; Compare or Capture A Interrupt Level group position
.equ TC1_CCAINTLVL0_bm = (1<<0) ; Compare or Capture A Interrupt Level bit 0 mask
.equ TC1_CCAINTLVL0_bp = 0 ; Compare or Capture A Interrupt Level bit 0 position
.equ TC1_CCAINTLVL1_bm = (1<<1) ; Compare or Capture A Interrupt Level bit 1 mask
.equ TC1_CCAINTLVL1_bp = 1 ; Compare or Capture A Interrupt Level bit 1 position

; TC1_CTRLFCLR masks
.equ TC1_CMD_gm = 0x0C ; Command group mask
.equ TC1_CMD_gp = 2 ; Command group position
.equ TC1_CMD0_bm = (1<<2) ; Command bit 0 mask
.equ TC1_CMD0_bp = 2 ; Command bit 0 position
.equ TC1_CMD1_bm = (1<<3) ; Command bit 1 mask
.equ TC1_CMD1_bp = 3 ; Command bit 1 position
.equ TC1_LUPD_bm = 0x02 ; Lock Update bit mask
.equ TC1_LUPD_bp = 1 ; Lock Update bit position
.equ TC1_DIR_bm = 0x01 ; Direction bit mask
.equ TC1_DIR_bp = 0 ; Direction bit position

; TC1_CTRLFSET masks
; Masks for CMD aready defined
; Masks for LUPD aready defined
; Masks for DIR aready defined

; TC1_CTRLGCLR masks
.equ TC1_CCBBV_bm = 0x04 ; Compare or Capture B Buffer Valid bit mask
.equ TC1_CCBBV_bp = 2 ; Compare or Capture B Buffer Valid bit position
.equ TC1_CCABV_bm = 0x02 ; Compare or Capture A Buffer Valid bit mask
.equ TC1_CCABV_bp = 1 ; Compare or Capture A Buffer Valid bit position
.equ TC1_PERBV_bm = 0x01 ; Period Buffer Valid bit mask
.equ TC1_PERBV_bp = 0 ; Period Buffer Valid bit position

; TC1_CTRLGSET masks
; Masks for CCBBV aready defined
; Masks for CCABV aready defined
; Masks for PERBV aready defined

; TC1_INTFLAGS masks
.equ TC1_CCBIF_bm = 0x20 ; Compare or Capture B Interrupt Flag bit mask
.equ TC1_CCBIF_bp = 5 ; Compare or Capture B Interrupt Flag bit position
.equ TC1_CCAIF_bm = 0x10 ; Compare or Capture A Interrupt Flag bit mask
.equ TC1_CCAIF_bp = 4 ; Compare or Capture A Interrupt Flag bit position
.equ TC1_ERRIF_bm = 0x02 ; Error Interrupt Flag bit mask
.equ TC1_ERRIF_bp = 1 ; Error Interrupt Flag bit position
.equ TC1_OVFIF_bm = 0x01 ; Overflow Interrupt Flag bit mask
.equ TC1_OVFIF_bp = 0 ; Overflow Interrupt Flag bit position
 
; Clock Selection
.equ TC_CLKSEL_OFF_gc = (0x00<<0) ; Timer Off
.equ TC_CLKSEL_DIV1_gc = (0x01<<0) ; System Clock
.equ TC_CLKSEL_DIV2_gc = (0x02<<0) ; System Clock / 2
.equ TC_CLKSEL_DIV4_gc = (0x03<<0) ; System Clock / 4
.equ TC_CLKSEL_DIV8_gc = (0x04<<0) ; System Clock / 8
.equ TC_CLKSEL_DIV64_gc = (0x05<<0) ; System Clock / 64
.equ TC_CLKSEL_DIV256_gc = (0x06<<0) ; System Clock / 256
.equ TC_CLKSEL_DIV1024_gc = (0x07<<0) ; System Clock / 1024
.equ TC_CLKSEL_EVCH0_gc = (0x08<<0) ; Event Channel 0
.equ TC_CLKSEL_EVCH1_gc = (0x09<<0) ; Event Channel 1
.equ TC_CLKSEL_EVCH2_gc = (0x0A<<0) ; Event Channel 2
.equ TC_CLKSEL_EVCH3_gc = (0x0B<<0) ; Event Channel 3
.equ TC_CLKSEL_EVCH4_gc = (0x0C<<0) ; Event Channel 4
.equ TC_CLKSEL_EVCH5_gc = (0x0D<<0) ; Event Channel 5
.equ TC_CLKSEL_EVCH6_gc = (0x0E<<0) ; Event Channel 6
.equ TC_CLKSEL_EVCH7_gc = (0x0F<<0) ; Event Channel 7

; Waveform Generation Mode
.equ TC_WGMODE_NORMAL_gc = (0x00<<0) ; Normal Mode
.equ TC_WGMODE_FRQ_gc = (0x01<<0) ; Frequency Generation Mode
.equ TC_WGMODE_SS_gc = (0x03<<0) ; Single Slope
.equ TC_WGMODE_DSTOP_gc = (0x05<<0) ; Dual Slope, Update on TOP
.equ TC_WGMODE_DS_T_gc = (0x05<<0) ; Dual Slope, Update on TOP
.equ TC_WGMODE_DSBOTH_gc = (0x06<<0) ; Dual Slope, Update on both TOP and BOTTOM
.equ TC_WGMODE_DS_TB_gc = (0x06<<0) ; Dual Slope, Update on both TOP and BOTTOM
.equ TC_WGMODE_DSBOTTOM_gc = (0x07<<0) ; Dual Slope, Update on BOTTOM
.equ TC_WGMODE_DS_B_gc = (0x07<<0) ; Dual Slope, Update on BOTTOM

; Byte Mode
.equ TC_BYTEM_NORMAL_gc = (0x00<<0) ; 16-bit mode
.equ TC_BYTEM_BYTEMODE_gc = (0x01<<0) ; Timer/Counter operating in byte mode only

; Event Action
.equ TC_EVACT_OFF_gc = (0x00<<5) ; No Event Action
.equ TC_EVACT_CAPT_gc = (0x01<<5) ; Input Capture
.equ TC_EVACT_UPDOWN_gc = (0x02<<5) ; Externally Controlled Up/Down Count
.equ TC_EVACT_QDEC_gc = (0x03<<5) ; Quadrature Decode
.equ TC_EVACT_RESTART_gc = (0x04<<5) ; Restart
.equ TC_EVACT_FRQ_gc = (0x05<<5) ; Frequency Capture
.equ TC_EVACT_PW_gc = (0x06<<5) ; Pulse-width Capture

; Event Selection
.equ TC_EVSEL_OFF_gc = (0x00<<0) ; No Event Source
.equ TC_EVSEL_CH0_gc = (0x08<<0) ; Event Channel 0
.equ TC_EVSEL_CH1_gc = (0x09<<0) ; Event Channel 1
.equ TC_EVSEL_CH2_gc = (0x0A<<0) ; Event Channel 2
.equ TC_EVSEL_CH3_gc = (0x0B<<0) ; Event Channel 3
.equ TC_EVSEL_CH4_gc = (0x0C<<0) ; Event Channel 4
.equ TC_EVSEL_CH5_gc = (0x0D<<0) ; Event Channel 5
.equ TC_EVSEL_CH6_gc = (0x0E<<0) ; Event Channel 6
.equ TC_EVSEL_CH7_gc = (0x0F<<0) ; Event Channel 7

; Error Interrupt Level
.equ TC_ERRINTLVL_OFF_gc = (0x00<<2) ; Interrupt Disabled
.equ TC_ERRINTLVL_LO_gc = (0x01<<2) ; Low Level
.equ TC_ERRINTLVL_MED_gc = (0x02<<2) ; Medium Level
.equ TC_ERRINTLVL_HI_gc = (0x03<<2) ; High Level

; Overflow Interrupt Level
.equ TC_OVFINTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ TC_OVFINTLVL_LO_gc = (0x01<<0) ; Low Level
.equ TC_OVFINTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ TC_OVFINTLVL_HI_gc = (0x03<<0) ; High Level

; Compare or Capture D Interrupt Level
.equ TC_CCDINTLVL_OFF_gc = (0x00<<6) ; Interrupt Disabled
.equ TC_CCDINTLVL_LO_gc = (0x01<<6) ; Low Level
.equ TC_CCDINTLVL_MED_gc = (0x02<<6) ; Medium Level
.equ TC_CCDINTLVL_HI_gc = (0x03<<6) ; High Level

; Compare or Capture C Interrupt Level
.equ TC_CCCINTLVL_OFF_gc = (0x00<<4) ; Interrupt Disabled
.equ TC_CCCINTLVL_LO_gc = (0x01<<4) ; Low Level
.equ TC_CCCINTLVL_MED_gc = (0x02<<4) ; Medium Level
.equ TC_CCCINTLVL_HI_gc = (0x03<<4) ; High Level

; Compare or Capture B Interrupt Level
.equ TC_CCBINTLVL_OFF_gc = (0x00<<2) ; Interrupt Disabled
.equ TC_CCBINTLVL_LO_gc = (0x01<<2) ; Low Level
.equ TC_CCBINTLVL_MED_gc = (0x02<<2) ; Medium Level
.equ TC_CCBINTLVL_HI_gc = (0x03<<2) ; High Level

; Compare or Capture A Interrupt Level
.equ TC_CCAINTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ TC_CCAINTLVL_LO_gc = (0x01<<0) ; Low Level
.equ TC_CCAINTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ TC_CCAINTLVL_HI_gc = (0x03<<0) ; High Level

; Timer/Counter Command
.equ TC_CMD_NONE_gc = (0x00<<2) ; No Command
.equ TC_CMD_UPDATE_gc = (0x01<<2) ; Force Update
.equ TC_CMD_RESTART_gc = (0x02<<2) ; Force Restart
.equ TC_CMD_RESET_gc = (0x03<<2) ; Force Hard Reset


;***************************************************************************
;** AWEX - Timer/Counter Advanced Waveform Extension
;***************************************************************************/

; AWEX_CTRL masks
.equ AWEX_PGM_bm = 0x20 ; Pattern Generation Mode bit mask
.equ AWEX_PGM_bp = 5 ; Pattern Generation Mode bit position
.equ AWEX_CWCM_bm = 0x10 ; Common Waveform Channel Mode bit mask
.equ AWEX_CWCM_bp = 4 ; Common Waveform Channel Mode bit position
.equ AWEX_DTICCDEN_bm = 0x08 ; Dead Time Insertion Compare Channel D Enable bit mask
.equ AWEX_DTICCDEN_bp = 3 ; Dead Time Insertion Compare Channel D Enable bit position
.equ AWEX_DTICCCEN_bm = 0x04 ; Dead Time Insertion Compare Channel C Enable bit mask
.equ AWEX_DTICCCEN_bp = 2 ; Dead Time Insertion Compare Channel C Enable bit position
.equ AWEX_DTICCBEN_bm = 0x02 ; Dead Time Insertion Compare Channel B Enable bit mask
.equ AWEX_DTICCBEN_bp = 1 ; Dead Time Insertion Compare Channel B Enable bit position
.equ AWEX_DTICCAEN_bm = 0x01 ; Dead Time Insertion Compare Channel A Enable bit mask
.equ AWEX_DTICCAEN_bp = 0 ; Dead Time Insertion Compare Channel A Enable bit position

; AWEX_FDCTRL masks
.equ AWEX_FDDBD_bm = 0x10 ; Fault Detect on Disable Break Disable bit mask
.equ AWEX_FDDBD_bp = 4 ; Fault Detect on Disable Break Disable bit position
.equ AWEX_FDMODE_bm = 0x04 ; Fault Detect Mode bit mask
.equ AWEX_FDMODE_bp = 2 ; Fault Detect Mode bit position
.equ AWEX_FDACT_gm = 0x03 ; Fault Detect Action group mask
.equ AWEX_FDACT_gp = 0 ; Fault Detect Action group position
.equ AWEX_FDACT0_bm = (1<<0) ; Fault Detect Action bit 0 mask
.equ AWEX_FDACT0_bp = 0 ; Fault Detect Action bit 0 position
.equ AWEX_FDACT1_bm = (1<<1) ; Fault Detect Action bit 1 mask
.equ AWEX_FDACT1_bp = 1 ; Fault Detect Action bit 1 position

; AWEX_STATUS masks
.equ AWEX_FDF_bm = 0x04 ; Fault Detect Flag bit mask
.equ AWEX_FDF_bp = 2 ; Fault Detect Flag bit position
.equ AWEX_DTHSBUFV_bm = 0x02 ; Dead Time High Side Buffer Valid bit mask
.equ AWEX_DTHSBUFV_bp = 1 ; Dead Time High Side Buffer Valid bit position
.equ AWEX_DTLSBUFV_bm = 0x01 ; Dead Time Low Side Buffer Valid bit mask
.equ AWEX_DTLSBUFV_bp = 0 ; Dead Time Low Side Buffer Valid bit position

; AWEX_STATUSSET masks
; Masks for FDF aready defined
; Masks for DTHSBUFV aready defined
; Masks for DTLSBUFV aready defined
 
; Fault Detect Action
.equ AWEX_FDACT_NONE_gc = (0x00<<0) ; No Fault Protection
.equ AWEX_FDACT_CLEAROE_gc = (0x01<<0) ; Clear Output Enable Bits
.equ AWEX_FDACT_CLEARDIR_gc = (0x03<<0) ; Clear I/O Port Direction Bits


;***************************************************************************
;** HIRES - Timer/Counter High-Resolution Extension
;***************************************************************************/

; HIRES_CTRLA masks
.equ HIRES_HREN_gm = 0x03 ; High Resolution Enable group mask
.equ HIRES_HREN_gp = 0 ; High Resolution Enable group position
.equ HIRES_HREN0_bm = (1<<0) ; High Resolution Enable bit 0 mask
.equ HIRES_HREN0_bp = 0 ; High Resolution Enable bit 0 position
.equ HIRES_HREN1_bm = (1<<1) ; High Resolution Enable bit 1 mask
.equ HIRES_HREN1_bp = 1 ; High Resolution Enable bit 1 position
 
; High Resolution Enable
.equ HIRES_HREN_NONE_gc = (0x00<<0) ; No Fault Protection
.equ HIRES_HREN_TC0_gc = (0x01<<0) ; Enable High Resolution on Timer/Counter 0
.equ HIRES_HREN_TC1_gc = (0x02<<0) ; Enable High Resolution on Timer/Counter 1
.equ HIRES_HREN_BOTH_gc = (0x03<<0) ; Enable High Resolution both Timer/Counters


;***************************************************************************
;** USART - Universal Asynchronous Receiver-Transmitter
;***************************************************************************/

; USART_STATUS masks
.equ USART_RXCIF_bm = 0x80 ; Receive Interrupt Flag bit mask
.equ USART_RXCIF_bp = 7 ; Receive Interrupt Flag bit position
.equ USART_TXCIF_bm = 0x40 ; Transmit Interrupt Flag bit mask
.equ USART_TXCIF_bp = 6 ; Transmit Interrupt Flag bit position
.equ USART_DREIF_bm = 0x20 ; Data Register Empty Flag bit mask
.equ USART_DREIF_bp = 5 ; Data Register Empty Flag bit position
.equ USART_FERR_bm = 0x10 ; Frame Error bit mask
.equ USART_FERR_bp = 4 ; Frame Error bit position
.equ USART_BUFOVF_bm = 0x08 ; Buffer Overflow bit mask
.equ USART_BUFOVF_bp = 3 ; Buffer Overflow bit position
.equ USART_PERR_bm = 0x04 ; Parity Error bit mask
.equ USART_PERR_bp = 2 ; Parity Error bit position
.equ USART_RXB8_bm = 0x01 ; Receive Bit 8 bit mask
.equ USART_RXB8_bp = 0 ; Receive Bit 8 bit position

; USART_CTRLA masks
.equ USART_RXCINTLVL_gm = 0x30 ; Receive Interrupt Level group mask
.equ USART_RXCINTLVL_gp = 4 ; Receive Interrupt Level group position
.equ USART_RXCINTLVL0_bm = (1<<4) ; Receive Interrupt Level bit 0 mask
.equ USART_RXCINTLVL0_bp = 4 ; Receive Interrupt Level bit 0 position
.equ USART_RXCINTLVL1_bm = (1<<5) ; Receive Interrupt Level bit 1 mask
.equ USART_RXCINTLVL1_bp = 5 ; Receive Interrupt Level bit 1 position
.equ USART_TXCINTLVL_gm = 0x0C ; Transmit Interrupt Level group mask
.equ USART_TXCINTLVL_gp = 2 ; Transmit Interrupt Level group position
.equ USART_TXCINTLVL0_bm = (1<<2) ; Transmit Interrupt Level bit 0 mask
.equ USART_TXCINTLVL0_bp = 2 ; Transmit Interrupt Level bit 0 position
.equ USART_TXCINTLVL1_bm = (1<<3) ; Transmit Interrupt Level bit 1 mask
.equ USART_TXCINTLVL1_bp = 3 ; Transmit Interrupt Level bit 1 position
.equ USART_DREINTLVL_gm = 0x03 ; Data Register Empty Interrupt Level group mask
.equ USART_DREINTLVL_gp = 0 ; Data Register Empty Interrupt Level group position
.equ USART_DREINTLVL0_bm = (1<<0) ; Data Register Empty Interrupt Level bit 0 mask
.equ USART_DREINTLVL0_bp = 0 ; Data Register Empty Interrupt Level bit 0 position
.equ USART_DREINTLVL1_bm = (1<<1) ; Data Register Empty Interrupt Level bit 1 mask
.equ USART_DREINTLVL1_bp = 1 ; Data Register Empty Interrupt Level bit 1 position

; USART_CTRLB masks
.equ USART_RXEN_bm = 0x10 ; Receiver Enable bit mask
.equ USART_RXEN_bp = 4 ; Receiver Enable bit position
.equ USART_TXEN_bm = 0x08 ; Transmitter Enable bit mask
.equ USART_TXEN_bp = 3 ; Transmitter Enable bit position
.equ USART_CLK2X_bm = 0x04 ; Double transmission speed bit mask
.equ USART_CLK2X_bp = 2 ; Double transmission speed bit position
.equ USART_MPCM_bm = 0x02 ; Multi-processor Communication Mode bit mask
.equ USART_MPCM_bp = 1 ; Multi-processor Communication Mode bit position
.equ USART_TXB8_bm = 0x01 ; Transmit bit 8 bit mask
.equ USART_TXB8_bp = 0 ; Transmit bit 8 bit position

; USART_CTRLC masks
.equ USART_CMODE_gm = 0xC0 ; Communication Mode group mask
.equ USART_CMODE_gp = 6 ; Communication Mode group position
.equ USART_CMODE0_bm = (1<<6) ; Communication Mode bit 0 mask
.equ USART_CMODE0_bp = 6 ; Communication Mode bit 0 position
.equ USART_CMODE1_bm = (1<<7) ; Communication Mode bit 1 mask
.equ USART_CMODE1_bp = 7 ; Communication Mode bit 1 position
.equ USART_PMODE_gm = 0x30 ; Parity Mode group mask
.equ USART_PMODE_gp = 4 ; Parity Mode group position
.equ USART_PMODE0_bm = (1<<4) ; Parity Mode bit 0 mask
.equ USART_PMODE0_bp = 4 ; Parity Mode bit 0 position
.equ USART_PMODE1_bm = (1<<5) ; Parity Mode bit 1 mask
.equ USART_PMODE1_bp = 5 ; Parity Mode bit 1 position
.equ USART_SBMODE_bm = 0x08 ; Stop Bit Mode bit mask
.equ USART_SBMODE_bp = 3 ; Stop Bit Mode bit position
.equ USART_CHSIZE_gm = 0x07 ; Character Size group mask
.equ USART_CHSIZE_gp = 0 ; Character Size group position
.equ USART_CHSIZE0_bm = (1<<0) ; Character Size bit 0 mask
.equ USART_CHSIZE0_bp = 0 ; Character Size bit 0 position
.equ USART_CHSIZE1_bm = (1<<1) ; Character Size bit 1 mask
.equ USART_CHSIZE1_bp = 1 ; Character Size bit 1 position
.equ USART_CHSIZE2_bm = (1<<2) ; Character Size bit 2 mask
.equ USART_CHSIZE2_bp = 2 ; Character Size bit 2 position

; USART_BAUDCTRLA masks
.equ USART_BSEL_gm = 0xFF ; Baud Rate Selection Bits [7:0] group mask
.equ USART_BSEL_gp = 0 ; Baud Rate Selection Bits [7:0] group position
.equ USART_BSEL0_bm = (1<<0) ; Baud Rate Selection Bits [7:0] bit 0 mask
.equ USART_BSEL0_bp = 0 ; Baud Rate Selection Bits [7:0] bit 0 position
.equ USART_BSEL1_bm = (1<<1) ; Baud Rate Selection Bits [7:0] bit 1 mask
.equ USART_BSEL1_bp = 1 ; Baud Rate Selection Bits [7:0] bit 1 position
.equ USART_BSEL2_bm = (1<<2) ; Baud Rate Selection Bits [7:0] bit 2 mask
.equ USART_BSEL2_bp = 2 ; Baud Rate Selection Bits [7:0] bit 2 position
.equ USART_BSEL3_bm = (1<<3) ; Baud Rate Selection Bits [7:0] bit 3 mask
.equ USART_BSEL3_bp = 3 ; Baud Rate Selection Bits [7:0] bit 3 position
.equ USART_BSEL4_bm = (1<<4) ; Baud Rate Selection Bits [7:0] bit 4 mask
.equ USART_BSEL4_bp = 4 ; Baud Rate Selection Bits [7:0] bit 4 position
.equ USART_BSEL5_bm = (1<<5) ; Baud Rate Selection Bits [7:0] bit 5 mask
.equ USART_BSEL5_bp = 5 ; Baud Rate Selection Bits [7:0] bit 5 position
.equ USART_BSEL6_bm = (1<<6) ; Baud Rate Selection Bits [7:0] bit 6 mask
.equ USART_BSEL6_bp = 6 ; Baud Rate Selection Bits [7:0] bit 6 position
.equ USART_BSEL7_bm = (1<<7) ; Baud Rate Selection Bits [7:0] bit 7 mask
.equ USART_BSEL7_bp = 7 ; Baud Rate Selection Bits [7:0] bit 7 position

; USART_BAUDCTRLB masks
.equ USART_BSCALE_gm = 0xF0 ; Baud Rate Scale group mask
.equ USART_BSCALE_gp = 4 ; Baud Rate Scale group position
.equ USART_BSCALE0_bm = (1<<4) ; Baud Rate Scale bit 0 mask
.equ USART_BSCALE0_bp = 4 ; Baud Rate Scale bit 0 position
.equ USART_BSCALE1_bm = (1<<5) ; Baud Rate Scale bit 1 mask
.equ USART_BSCALE1_bp = 5 ; Baud Rate Scale bit 1 position
.equ USART_BSCALE2_bm = (1<<6) ; Baud Rate Scale bit 2 mask
.equ USART_BSCALE2_bp = 6 ; Baud Rate Scale bit 2 position
.equ USART_BSCALE3_bm = (1<<7) ; Baud Rate Scale bit 3 mask
.equ USART_BSCALE3_bp = 7 ; Baud Rate Scale bit 3 position
; Masks for BSEL aready defined
 
; Receive Complete Interrupt level
.equ USART_RXCINTLVL_OFF_gc = (0x00<<4) ; Interrupt Disabled
.equ USART_RXCINTLVL_LO_gc = (0x01<<4) ; Low Level
.equ USART_RXCINTLVL_MED_gc = (0x02<<4) ; Medium Level
.equ USART_RXCINTLVL_HI_gc = (0x03<<4) ; High Level

; Transmit Complete Interrupt level
.equ USART_TXCINTLVL_OFF_gc = (0x00<<2) ; Interrupt Disabled
.equ USART_TXCINTLVL_LO_gc = (0x01<<2) ; Low Level
.equ USART_TXCINTLVL_MED_gc = (0x02<<2) ; Medium Level
.equ USART_TXCINTLVL_HI_gc = (0x03<<2) ; High Level

; Data Register Empty Interrupt level
.equ USART_DREINTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ USART_DREINTLVL_LO_gc = (0x01<<0) ; Low Level
.equ USART_DREINTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ USART_DREINTLVL_HI_gc = (0x03<<0) ; High Level

; Character Size
.equ USART_CHSIZE_5BIT_gc = (0x00<<0) ; Character size: 5 bit
.equ USART_CHSIZE_6BIT_gc = (0x01<<0) ; Character size: 6 bit
.equ USART_CHSIZE_7BIT_gc = (0x02<<0) ; Character size: 7 bit
.equ USART_CHSIZE_8BIT_gc = (0x03<<0) ; Character size: 8 bit
.equ USART_CHSIZE_9BIT_gc = (0x07<<0) ; Character size: 9 bit

; Communication Mode
.equ USART_CMODE_ASYNCHRONOUS_gc = (0x00<<6) ; Asynchronous Mode
.equ USART_CMODE_SYNCHRONOUS_gc = (0x01<<6) ; Synchronous Mode
.equ USART_CMODE_IRDA_gc = (0x02<<6) ; IrDA Mode
.equ USART_CMODE_MSPI_gc = (0x03<<6) ; Master SPI Mode

; Parity Mode
.equ USART_PMODE_DISABLED_gc = (0x00<<4) ; No Parity
.equ USART_PMODE_EVEN_gc = (0x02<<4) ; Even Parity
.equ USART_PMODE_ODD_gc = (0x03<<4) ; Odd Parity


;***************************************************************************
;** SPI - Serial Peripheral Interface
;***************************************************************************/

; SPI_CTRL masks
.equ SPI_CLK2X_bm = 0x80 ; Enable Double Speed bit mask
.equ SPI_CLK2X_bp = 7 ; Enable Double Speed bit position
.equ SPI_ENABLE_bm = 0x40 ; Enable Module bit mask
.equ SPI_ENABLE_bp = 6 ; Enable Module bit position
.equ SPI_DORD_bm = 0x20 ; Data Order Setting bit mask
.equ SPI_DORD_bp = 5 ; Data Order Setting bit position
.equ SPI_MASTER_bm = 0x10 ; Master Operation Enable bit mask
.equ SPI_MASTER_bp = 4 ; Master Operation Enable bit position
.equ SPI_MODE_gm = 0x0C ; SPI Mode group mask
.equ SPI_MODE_gp = 2 ; SPI Mode group position
.equ SPI_MODE0_bm = (1<<2) ; SPI Mode bit 0 mask
.equ SPI_MODE0_bp = 2 ; SPI Mode bit 0 position
.equ SPI_MODE1_bm = (1<<3) ; SPI Mode bit 1 mask
.equ SPI_MODE1_bp = 3 ; SPI Mode bit 1 position
.equ SPI_PRESCALER_gm = 0x03 ; Prescaler group mask
.equ SPI_PRESCALER_gp = 0 ; Prescaler group position
.equ SPI_PRESCALER0_bm = (1<<0) ; Prescaler bit 0 mask
.equ SPI_PRESCALER0_bp = 0 ; Prescaler bit 0 position
.equ SPI_PRESCALER1_bm = (1<<1) ; Prescaler bit 1 mask
.equ SPI_PRESCALER1_bp = 1 ; Prescaler bit 1 position

; SPI_INTCTRL masks
.equ SPI_INTLVL_gm = 0x03 ; Interrupt level group mask
.equ SPI_INTLVL_gp = 0 ; Interrupt level group position
.equ SPI_INTLVL0_bm = (1<<0) ; Interrupt level bit 0 mask
.equ SPI_INTLVL0_bp = 0 ; Interrupt level bit 0 position
.equ SPI_INTLVL1_bm = (1<<1) ; Interrupt level bit 1 mask
.equ SPI_INTLVL1_bp = 1 ; Interrupt level bit 1 position

; SPI_STATUS masks
.equ SPI_IF_bm = 0x80 ; Interrupt Flag bit mask
.equ SPI_IF_bp = 7 ; Interrupt Flag bit position
.equ SPI_WRCOL_bm = 0x40 ; Write Collision bit mask
.equ SPI_WRCOL_bp = 6 ; Write Collision bit position
 
; SPI Mode
.equ SPI_MODE_0_gc = (0x00<<2) ; SPI Mode 0
.equ SPI_MODE_1_gc = (0x01<<2) ; SPI Mode 1
.equ SPI_MODE_2_gc = (0x02<<2) ; SPI Mode 2
.equ SPI_MODE_3_gc = (0x03<<2) ; SPI Mode 3

; Prescaler setting
.equ SPI_PRESCALER_DIV4_gc = (0x00<<0) ; System Clock / 4
.equ SPI_PRESCALER_DIV16_gc = (0x01<<0) ; System Clock / 16
.equ SPI_PRESCALER_DIV64_gc = (0x02<<0) ; System Clock / 64
.equ SPI_PRESCALER_DIV128_gc = (0x03<<0) ; System Clock / 128

; Interrupt level
.equ SPI_INTLVL_OFF_gc = (0x00<<0) ; Interrupt Disabled
.equ SPI_INTLVL_LO_gc = (0x01<<0) ; Low Level
.equ SPI_INTLVL_MED_gc = (0x02<<0) ; Medium Level
.equ SPI_INTLVL_HI_gc = (0x03<<0) ; High Level


;***************************************************************************
;** IRCOM - IR Communication Module
;***************************************************************************/

; IRCOM_CTRL masks
.equ IRCOM_EVSEL_gm = 0x0F ; Event Channel Select group mask
.equ IRCOM_EVSEL_gp = 0 ; Event Channel Select group position
.equ IRCOM_EVSEL0_bm = (1<<0) ; Event Channel Select bit 0 mask
.equ IRCOM_EVSEL0_bp = 0 ; Event Channel Select bit 0 position
.equ IRCOM_EVSEL1_bm = (1<<1) ; Event Channel Select bit 1 mask
.equ IRCOM_EVSEL1_bp = 1 ; Event Channel Select bit 1 position
.equ IRCOM_EVSEL2_bm = (1<<2) ; Event Channel Select bit 2 mask
.equ IRCOM_EVSEL2_bp = 2 ; Event Channel Select bit 2 position
.equ IRCOM_EVSEL3_bm = (1<<3) ; Event Channel Select bit 3 mask
.equ IRCOM_EVSEL3_bp = 3 ; Event Channel Select bit 3 position
 
; Event channel selection
.equ IRDA_EVSEL_OFF_gc = (0x00<<0) ; No Event Source
.equ IRDA_EVSEL_0_gc = (0x08<<0) ; Event Channel 0
.equ IRDA_EVSEL_1_gc = (0x09<<0) ; Event Channel 1
.equ IRDA_EVSEL_2_gc = (0x0A<<0) ; Event Channel 2
.equ IRDA_EVSEL_3_gc = (0x0B<<0) ; Event Channel 3
.equ IRDA_EVSEL_4_gc = (0x0C<<0) ; Event Channel 4
.equ IRDA_EVSEL_5_gc = (0x0D<<0) ; Event Channel 5
.equ IRDA_EVSEL_6_gc = (0x0E<<0) ; Event Channel 6
.equ IRDA_EVSEL_7_gc = (0x0F<<0) ; Event Channel 7


;***************************************************************************
;** XMEGAA_FUSES - Fuses and Lockbits
;***************************************************************************/

; NVM_LOCKBITS_LOCKBITS masks
.equ NVM_LOCKBITS_BLBB_gm = 0xC0 ; Boot Lock Bits - Boot Section group mask
.equ NVM_LOCKBITS_BLBB_gp = 6 ; Boot Lock Bits - Boot Section group position
.equ NVM_LOCKBITS_BLBB0_bm = (1<<6) ; Boot Lock Bits - Boot Section bit 0 mask
.equ NVM_LOCKBITS_BLBB0_bp = 6 ; Boot Lock Bits - Boot Section bit 0 position
.equ NVM_LOCKBITS_BLBB1_bm = (1<<7) ; Boot Lock Bits - Boot Section bit 1 mask
.equ NVM_LOCKBITS_BLBB1_bp = 7 ; Boot Lock Bits - Boot Section bit 1 position
.equ NVM_LOCKBITS_BLBA_gm = 0x30 ; Boot Lock Bits - Application Section group mask
.equ NVM_LOCKBITS_BLBA_gp = 4 ; Boot Lock Bits - Application Section group position
.equ NVM_LOCKBITS_BLBA0_bm = (1<<4) ; Boot Lock Bits - Application Section bit 0 mask
.equ NVM_LOCKBITS_BLBA0_bp = 4 ; Boot Lock Bits - Application Section bit 0 position
.equ NVM_LOCKBITS_BLBA1_bm = (1<<5) ; Boot Lock Bits - Application Section bit 1 mask
.equ NVM_LOCKBITS_BLBA1_bp = 5 ; Boot Lock Bits - Application Section bit 1 position
.equ NVM_LOCKBITS_BLBAT_gm = 0x0C ; Boot Lock Bits - Application Table group mask
.equ NVM_LOCKBITS_BLBAT_gp = 2 ; Boot Lock Bits - Application Table group position
.equ NVM_LOCKBITS_BLBAT0_bm = (1<<2) ; Boot Lock Bits - Application Table bit 0 mask
.equ NVM_LOCKBITS_BLBAT0_bp = 2 ; Boot Lock Bits - Application Table bit 0 position
.equ NVM_LOCKBITS_BLBAT1_bm = (1<<3) ; Boot Lock Bits - Application Table bit 1 mask
.equ NVM_LOCKBITS_BLBAT1_bp = 3 ; Boot Lock Bits - Application Table bit 1 position
.equ NVM_LOCKBITS_LB_gm = 0x03 ; Lock Bits group mask
.equ NVM_LOCKBITS_LB_gp = 0 ; Lock Bits group position
.equ NVM_LOCKBITS_LB0_bm = (1<<0) ; Lock Bits bit 0 mask
.equ NVM_LOCKBITS_LB0_bp = 0 ; Lock Bits bit 0 position
.equ NVM_LOCKBITS_LB1_bm = (1<<1) ; Lock Bits bit 1 mask
.equ NVM_LOCKBITS_LB1_bp = 1 ; Lock Bits bit 1 position

; NVM_FUSES_FUSEBYTE0 masks
.equ NVM_FUSES_JTAGUSERID_gm = 0xFF ; JTAG User ID group mask
.equ NVM_FUSES_JTAGUSERID_gp = 0 ; JTAG User ID group position
.equ NVM_FUSES_JTAGUSERID0_bm = (1<<0) ; JTAG User ID bit 0 mask
.equ NVM_FUSES_JTAGUSERID0_bp = 0 ; JTAG User ID bit 0 position
.equ NVM_FUSES_JTAGUSERID1_bm = (1<<1) ; JTAG User ID bit 1 mask
.equ NVM_FUSES_JTAGUSERID1_bp = 1 ; JTAG User ID bit 1 position
.equ NVM_FUSES_JTAGUSERID2_bm = (1<<2) ; JTAG User ID bit 2 mask
.equ NVM_FUSES_JTAGUSERID2_bp = 2 ; JTAG User ID bit 2 position
.equ NVM_FUSES_JTAGUSERID3_bm = (1<<3) ; JTAG User ID bit 3 mask
.equ NVM_FUSES_JTAGUSERID3_bp = 3 ; JTAG User ID bit 3 position
.equ NVM_FUSES_JTAGUSERID4_bm = (1<<4) ; JTAG User ID bit 4 mask
.equ NVM_FUSES_JTAGUSERID4_bp = 4 ; JTAG User ID bit 4 position
.equ NVM_FUSES_JTAGUSERID5_bm = (1<<5) ; JTAG User ID bit 5 mask
.equ NVM_FUSES_JTAGUSERID5_bp = 5 ; JTAG User ID bit 5 position
.equ NVM_FUSES_JTAGUSERID6_bm = (1<<6) ; JTAG User ID bit 6 mask
.equ NVM_FUSES_JTAGUSERID6_bp = 6 ; JTAG User ID bit 6 position
.equ NVM_FUSES_JTAGUSERID7_bm = (1<<7) ; JTAG User ID bit 7 mask
.equ NVM_FUSES_JTAGUSERID7_bp = 7 ; JTAG User ID bit 7 position

; NVM_FUSES_FUSEBYTE1 masks
.equ NVM_FUSES_WDWP_gm = 0xF0 ; Watchdog Window Timeout Period group mask
.equ NVM_FUSES_WDWP_gp = 4 ; Watchdog Window Timeout Period group position
.equ NVM_FUSES_WDWP0_bm = (1<<4) ; Watchdog Window Timeout Period bit 0 mask
.equ NVM_FUSES_WDWP0_bp = 4 ; Watchdog Window Timeout Period bit 0 position
.equ NVM_FUSES_WDWP1_bm = (1<<5) ; Watchdog Window Timeout Period bit 1 mask
.equ NVM_FUSES_WDWP1_bp = 5 ; Watchdog Window Timeout Period bit 1 position
.equ NVM_FUSES_WDWP2_bm = (1<<6) ; Watchdog Window Timeout Period bit 2 mask
.equ NVM_FUSES_WDWP2_bp = 6 ; Watchdog Window Timeout Period bit 2 position
.equ NVM_FUSES_WDWP3_bm = (1<<7) ; Watchdog Window Timeout Period bit 3 mask
.equ NVM_FUSES_WDWP3_bp = 7 ; Watchdog Window Timeout Period bit 3 position
.equ NVM_FUSES_WDP_gm = 0x0F ; Watchdog Timeout Period group mask
.equ NVM_FUSES_WDP_gp = 0 ; Watchdog Timeout Period group position
.equ NVM_FUSES_WDP0_bm = (1<<0) ; Watchdog Timeout Period bit 0 mask
.equ NVM_FUSES_WDP0_bp = 0 ; Watchdog Timeout Period bit 0 position
.equ NVM_FUSES_WDP1_bm = (1<<1) ; Watchdog Timeout Period bit 1 mask
.equ NVM_FUSES_WDP1_bp = 1 ; Watchdog Timeout Period bit 1 position
.equ NVM_FUSES_WDP2_bm = (1<<2) ; Watchdog Timeout Period bit 2 mask
.equ NVM_FUSES_WDP2_bp = 2 ; Watchdog Timeout Period bit 2 position
.equ NVM_FUSES_WDP3_bm = (1<<3) ; Watchdog Timeout Period bit 3 mask
.equ NVM_FUSES_WDP3_bp = 3 ; Watchdog Timeout Period bit 3 position

; NVM_FUSES_FUSEBYTE2 masks
.equ NVM_FUSES_BOOTRST_bm = 0x40 ; Boot Loader Section Reset Vector bit mask
.equ NVM_FUSES_BOOTRST_bp = 6 ; Boot Loader Section Reset Vector bit position
.equ NVM_FUSES_TOSCSEL_bm = 0x20 ; Timer Oscillator pin location bit mask
.equ NVM_FUSES_TOSCSEL_bp = 5 ; Timer Oscillator pin location bit position
.equ NVM_FUSES_BODPD_gm = 0x03 ; BOD Operation in Power-Down Mode group mask
.equ NVM_FUSES_BODPD_gp = 0 ; BOD Operation in Power-Down Mode group position
.equ NVM_FUSES_BODPD0_bm = (1<<0) ; BOD Operation in Power-Down Mode bit 0 mask
.equ NVM_FUSES_BODPD0_bp = 0 ; BOD Operation in Power-Down Mode bit 0 position
.equ NVM_FUSES_BODPD1_bm = (1<<1) ; BOD Operation in Power-Down Mode bit 1 mask
.equ NVM_FUSES_BODPD1_bp = 1 ; BOD Operation in Power-Down Mode bit 1 position

; NVM_FUSES_FUSEBYTE4 masks
.equ NVM_FUSES_RSTDISBL_bm = 0x10 ; External Reset Disable bit mask
.equ NVM_FUSES_RSTDISBL_bp = 4 ; External Reset Disable bit position
.equ NVM_FUSES_SUT_gm = 0x0C ; Start-up Time group mask
.equ NVM_FUSES_SUT_gp = 2 ; Start-up Time group position
.equ NVM_FUSES_SUT0_bm = (1<<2) ; Start-up Time bit 0 mask
.equ NVM_FUSES_SUT0_bp = 2 ; Start-up Time bit 0 position
.equ NVM_FUSES_SUT1_bm = (1<<3) ; Start-up Time bit 1 mask
.equ NVM_FUSES_SUT1_bp = 3 ; Start-up Time bit 1 position
.equ NVM_FUSES_WDLOCK_bm = 0x02 ; Watchdog Timer Lock bit mask
.equ NVM_FUSES_WDLOCK_bp = 1 ; Watchdog Timer Lock bit position
.equ NVM_FUSES_JTAGEN_bm = 0x01 ; JTAG Interface Enable bit mask
.equ NVM_FUSES_JTAGEN_bp = 0 ; JTAG Interface Enable bit position

; NVM_FUSES_FUSEBYTE5 masks
.equ NVM_FUSES_BODACT_gm = 0x30 ; BOD Operation in Active Mode group mask
.equ NVM_FUSES_BODACT_gp = 4 ; BOD Operation in Active Mode group position
.equ NVM_FUSES_BODACT0_bm = (1<<4) ; BOD Operation in Active Mode bit 0 mask
.equ NVM_FUSES_BODACT0_bp = 4 ; BOD Operation in Active Mode bit 0 position
.equ NVM_FUSES_BODACT1_bm = (1<<5) ; BOD Operation in Active Mode bit 1 mask
.equ NVM_FUSES_BODACT1_bp = 5 ; BOD Operation in Active Mode bit 1 position
.equ NVM_FUSES_EESAVE_bm = 0x08 ; Preserve EEPROM Through Chip Erase bit mask
.equ NVM_FUSES_EESAVE_bp = 3 ; Preserve EEPROM Through Chip Erase bit position
.equ NVM_FUSES_BODLVL_gm = 0x07 ; Brown Out Detection Voltage Level group mask
.equ NVM_FUSES_BODLVL_gp = 0 ; Brown Out Detection Voltage Level group position
.equ NVM_FUSES_BODLVL0_bm = (1<<0) ; Brown Out Detection Voltage Level bit 0 mask
.equ NVM_FUSES_BODLVL0_bp = 0 ; Brown Out Detection Voltage Level bit 0 position
.equ NVM_FUSES_BODLVL1_bm = (1<<1) ; Brown Out Detection Voltage Level bit 1 mask
.equ NVM_FUSES_BODLVL1_bp = 1 ; Brown Out Detection Voltage Level bit 1 position
.equ NVM_FUSES_BODLVL2_bm = (1<<2) ; Brown Out Detection Voltage Level bit 2 mask
.equ NVM_FUSES_BODLVL2_bp = 2 ; Brown Out Detection Voltage Level bit 2 position
 
; Boot lock bits - boot setcion
.equ FUSE_BLBB_RWLOCK_gc = (0x00<<6) ; Read and write not allowed
.equ FUSE_BLBB_RLOCK_gc = (0x01<<6) ; Read not allowed
.equ FUSE_BLBB_WLOCK_gc = (0x02<<6) ; Write not allowed
.equ FUSE_BLBB_NOLOCK_gc = (0x03<<6) ; No locks

; Boot lock bits - application section
.equ FUSE_BLBA_RWLOCK_gc = (0x00<<4) ; Read and write not allowed
.equ FUSE_BLBA_RLOCK_gc = (0x01<<4) ; Read not allowed
.equ FUSE_BLBA_WLOCK_gc = (0x02<<4) ; Write not allowed
.equ FUSE_BLBA_NOLOCK_gc = (0x03<<4) ; No locks

; Boot lock bits - application table section
.equ FUSE_BLBAT_RWLOCK_gc = (0x00<<2) ; Read and write not allowed
.equ FUSE_BLBAT_RLOCK_gc = (0x01<<2) ; Read not allowed
.equ FUSE_BLBAT_WLOCK_gc = (0x02<<2) ; Write not allowed
.equ FUSE_BLBAT_NOLOCK_gc = (0x03<<2) ; No locks

; Lock bits
.equ FUSE_LB_RWLOCK_gc = (0x00<<0) ; Read and write not allowed
.equ FUSE_LB_WLOCK_gc = (0x02<<0) ; Write not allowed
.equ FUSE_LB_NOLOCK_gc = (0x03<<0) ; No locks

; Boot Loader Section Reset Vector
.equ BOOTRST_BOOTLDR_gc = (0x00<<6) ; Boot Loader Reset
.equ BOOTRST_APPLICATION_gc = (0x01<<6) ; Application Reset

; Timer Oscillator pin location
.equ TOSCSEL_ALTERNATE_gc = (0x00<<5) ; TOSC1 / TOSC2 on separate pins
.equ TOSCSEL_XTAL_gc = (0x01<<5) ; TOSC1 / TOSC2 shared with XTAL1 / XTAL2

; BOD operation
.equ BOD_SAMPLED_gc = (0x01<<0) ; BOD enabled in sampled mode
.equ BOD_CONTINUOUS_gc = (0x02<<0) ; BOD enabled continuously
.equ BOD_DISABLED_gc = (0x03<<0) ; BOD Disabled

; Watchdog (Window) Timeout Period
.equ WD_8CLK_gc = (0x00<<4) ; 8 cycles (8ms @ 3.3V)
.equ WD_16CLK_gc = (0x01<<4) ; 16 cycles (16ms @ 3.3V)
.equ WD_32CLK_gc = (0x02<<4) ; 32 cycles (32ms @ 3.3V)
.equ WD_64CLK_gc = (0x03<<4) ; 64 cycles (64ms @ 3.3V)
.equ WD_128CLK_gc = (0x04<<4) ; 128 cycles (0.125s @ 3.3V)
.equ WD_256CLK_gc = (0x05<<4) ; 256 cycles (0.25s @ 3.3V)
.equ WD_512CLK_gc = (0x06<<4) ; 512 cycles (0.5s @ 3.3V)
.equ WD_1KCLK_gc = (0x07<<4) ; 1K cycles (1s @ 3.3V)
.equ WD_2KCLK_gc = (0x08<<4) ; 2K cycles (2s @ 3.3V)
.equ WD_4KCLK_gc = (0x09<<4) ; 4K cycles (4s @ 3.3V)
.equ WD_8KCLK_gc = (0x0A<<4) ; 8K cycles (8s @ 3.3V)

; Start-up Time
.equ SUT_0MS_gc = (0x03<<2) ; 0 ms
.equ SUT_4MS_gc = (0x01<<2) ; 4 ms
.equ SUT_64MS_gc = (0x00<<2) ; 64 ms

; Brown Out Detection Voltage Level
.equ BODLVL_1V6_gc = (0x07<<0) ; 1.6 V
.equ BODLVL_1V8_gc = (0x06<<0) ; 1.8 V
.equ BODLVL_2V0_gc = (0x05<<0) ; 2.0 V
.equ BODLVL_2V2_gc = (0x04<<0) ; 2.2 V
.equ BODLVL_2V4_gc = (0x03<<0) ; 2.4 V
.equ BODLVL_2V6_gc = (0x02<<0) ; 2.6 V
.equ BODLVL_2V8_gc = (0x01<<0) ; 2.8 V
.equ BODLVL_3V0_gc = (0x00<<0) ; 3.0 V


;***************************************************************************
;** XMEGAA_SIGROW - Signature Row
;***************************************************************************/
 



; ***** CPU REGISTER DEFINITIONS *****************************************
.def	XH	= r27
.def	XL	= r26
.def	YH	= r29
.def	YL	= r28
.def	ZH	= r31
.def	ZL	= r30


; ***** DATA MEMORY DECLARATIONS *****************************************


#define PROGMEM_START 0x00000
#define PROGMEM_SIZE 0x11000
#define PROGMEM_END (0x00000 + 0x11000 - 1)

#define APP_SECTION_START 0x00000
#define APP_SECTION_SIZE 0x10000
#define APP_SECTION_END (0x00000 + 0x10000 - 1)

#define APPTABLE_SECTION_START 0x0F000
#define APPTABLE_SECTION_SIZE 0x1000
#define APPTABLE_SECTION_END (0x0F000 + 0x1000 - 1)

#define BOOT_SECTION_START 0x10000
#define BOOT_SECTION_SIZE 0x1000
#define BOOT_SECTION_END (0x10000 + 0x1000 - 1)

#define EEPROM_START 0x00000
#define EEPROM_SIZE 0x0800
#define EEPROM_END (0x00000 + 0x0800 - 1)

#define FUSE_START 0x0000
#define FUSE_SIZE 0x0006
#define FUSE_END (0x0000 + 0x0006 - 1)

#define LOCKBIT_START 0x0000
#define LOCKBIT_SIZE 0x0001
#define LOCKBIT_END (0x0000 + 0x0001 - 1)

#define SIGNATURES_START 0x0000
#define SIGNATURES_SIZE 0x0003
#define SIGNATURES_END (0x0000 + 0x0003 - 1)

#define USER_SIGNATURES_START 0x0000
#define USER_SIGNATURES_SIZE 0x0100
#define USER_SIGNATURES_END (0x0000 + 0x0100 - 1)

#define PROD_SIGNATURES_START 0x0000
#define PROD_SIGNATURES_SIZE 0x0034
#define PROD_SIGNATURES_END (0x0000 + 0x0034 - 1)

#define DATAMEM_START 0x0000
#define DATAMEM_SIZE 0x3000
#define DATAMEM_END (0x0000 + 0x3000 - 1)

#define IO_START 0x0000
#define IO_SIZE 0x1000
#define IO_END (0x0000 + 0x1000 - 1)

#define MAPPED_EEPROM_START 0x1000
#define MAPPED_EEPROM_SIZE 0x0800
#define MAPPED_EEPROM_END (0x1000 + 0x0800 - 1)

#define INTERNAL_SRAM_START 0x2000
#define INTERNAL_SRAM_SIZE 0x1000
#define INTERNAL_SRAM_END (0x2000 + 0x1000 - 1)


; Legacy definitions
.equ	FLASHEND    = (PROGMEM_END / 2)  ; Note: Word address
.equ	IOEND       = IO_END
.equ	SRAM_START	= INTERNAL_SRAM_START
.equ	SRAM_SIZE	= INTERNAL_SRAM_SIZE
.equ	RAMEND	    = INTERNAL_SRAM_END
.equ	E2END	    = EEPROM_END
.equ	EEPROMEND	= EEPROM_END


; Definitions used by the assembler
#pragma AVRPART MEMORY PROG_FLASH 0x11000
#pragma AVRPART MEMORY EEPROM 0x0800
#pragma AVRPART MEMORY INT_SRAM SIZE 0x1000
#pragma AVRPART MEMORY INT_SRAM START_ADDR 0x2000



; ***** INTERRUPT VECTORS, ABSOLUTE ADDRESSES ****************************

; OSC interrupt vectors
.equ OSC_OSCF_vect = 2 ; Oscillator Failure Interrupt (NMI)

; PORTC interrupt vectors
.equ PORTC_INT0_vect = 4 ; External Interrupt 0
.equ PORTC_INT1_vect = 6 ; External Interrupt 1

; PORTR interrupt vectors
.equ PORTR_INT0_vect = 8 ; External Interrupt 0
.equ PORTR_INT1_vect = 10 ; External Interrupt 1

; DMA interrupt vectors
.equ DMA_CH0_vect = 12 ; Channel 0 Interrupt
.equ DMA_CH1_vect = 14 ; Channel 1 Interrupt
.equ DMA_CH2_vect = 16 ; Channel 2 Interrupt
.equ DMA_CH3_vect = 18 ; Channel 3 Interrupt

; RTC interrupt vectors
.equ RTC_OVF_vect = 20 ; Overflow Interrupt
.equ RTC_COMP_vect = 22 ; Compare Interrupt

; TWIC interrupt vectors
.equ TWIC_TWIS_vect = 24 ; TWI Slave Interrupt
.equ TWIC_TWIM_vect = 26 ; TWI Master Interrupt

; TCC0 interrupt vectors
.equ TCC0_OVF_vect = 28 ; Overflow Interrupt
.equ TCC0_ERR_vect = 30 ; Error Interrupt
.equ TCC0_CCA_vect = 32 ; Compare or Capture A Interrupt
.equ TCC0_CCB_vect = 34 ; Compare or Capture B Interrupt
.equ TCC0_CCC_vect = 36 ; Compare or Capture C Interrupt
.equ TCC0_CCD_vect = 38 ; Compare or Capture D Interrupt

; TCC1 interrupt vectors
.equ TCC1_OVF_vect = 40 ; Overflow Interrupt
.equ TCC1_ERR_vect = 42 ; Error Interrupt
.equ TCC1_CCA_vect = 44 ; Compare or Capture A Interrupt
.equ TCC1_CCB_vect = 46 ; Compare or Capture B Interrupt

; SPIC interrupt vectors
.equ SPIC_INT_vect = 48 ; SPI Interrupt

; USARTC0 interrupt vectors
.equ USARTC0_RXC_vect = 50 ; Reception Complete Interrupt
.equ USARTC0_DRE_vect = 52 ; Data Register Empty Interrupt
.equ USARTC0_TXC_vect = 54 ; Transmission Complete Interrupt

; USARTC1 interrupt vectors
.equ USARTC1_RXC_vect = 56 ; Reception Complete Interrupt
.equ USARTC1_DRE_vect = 58 ; Data Register Empty Interrupt
.equ USARTC1_TXC_vect = 60 ; Transmission Complete Interrupt

; AES interrupt vectors
.equ AES_INT_vect = 62 ; AES Interrupt

; NVM interrupt vectors
.equ NVM_EE_vect = 64 ; EE Interrupt
.equ NVM_SPM_vect = 66 ; SPM Interrupt

; PORTB interrupt vectors
.equ PORTB_INT0_vect = 68 ; External Interrupt 0
.equ PORTB_INT1_vect = 70 ; External Interrupt 1

; ACB interrupt vectors
.equ ACB_AC0_vect = 72 ; AC0 Interrupt
.equ ACB_AC1_vect = 74 ; AC1 Interrupt
.equ ACB_ACW_vect = 76 ; ACW Window Mode Interrupt

; ADCB interrupt vectors
.equ ADCB_CH0_vect = 78 ; Interrupt 0
.equ ADCB_CH1_vect = 80 ; Interrupt 1
.equ ADCB_CH2_vect = 82 ; Interrupt 2
.equ ADCB_CH3_vect = 84 ; Interrupt 3

; PORTE interrupt vectors
.equ PORTE_INT0_vect = 86 ; External Interrupt 0
.equ PORTE_INT1_vect = 88 ; External Interrupt 1

; TWIE interrupt vectors
.equ TWIE_TWIS_vect = 90 ; TWI Slave Interrupt
.equ TWIE_TWIM_vect = 92 ; TWI Master Interrupt

; TCE0 interrupt vectors
.equ TCE0_OVF_vect = 94 ; Overflow Interrupt
.equ TCE0_ERR_vect = 96 ; Error Interrupt
.equ TCE0_CCA_vect = 98 ; Compare or Capture A Interrupt
.equ TCE0_CCB_vect = 100 ; Compare or Capture B Interrupt
.equ TCE0_CCC_vect = 102 ; Compare or Capture C Interrupt
.equ TCE0_CCD_vect = 104 ; Compare or Capture D Interrupt

; TCE1 interrupt vectors
.equ TCE1_OVF_vect = 106 ; Overflow Interrupt
.equ TCE1_ERR_vect = 108 ; Error Interrupt
.equ TCE1_CCA_vect = 110 ; Compare or Capture A Interrupt
.equ TCE1_CCB_vect = 112 ; Compare or Capture B Interrupt

; SPIE interrupt vectors
.equ SPIE_INT_vect = 114 ; SPI Interrupt

; USARTE0 interrupt vectors
.equ USARTE0_RXC_vect = 116 ; Reception Complete Interrupt
.equ USARTE0_DRE_vect = 118 ; Data Register Empty Interrupt
.equ USARTE0_TXC_vect = 120 ; Transmission Complete Interrupt

; USARTE1 interrupt vectors
.equ USARTE1_RXC_vect = 122 ; Reception Complete Interrupt
.equ USARTE1_DRE_vect = 124 ; Data Register Empty Interrupt
.equ USARTE1_TXC_vect = 126 ; Transmission Complete Interrupt

; PORTD interrupt vectors
.equ PORTD_INT0_vect = 128 ; External Interrupt 0
.equ PORTD_INT1_vect = 130 ; External Interrupt 1

; PORTA interrupt vectors
.equ PORTA_INT0_vect = 132 ; External Interrupt 0
.equ PORTA_INT1_vect = 134 ; External Interrupt 1

; ACA interrupt vectors
.equ ACA_AC0_vect = 136 ; AC0 Interrupt
.equ ACA_AC1_vect = 138 ; AC1 Interrupt
.equ ACA_ACW_vect = 140 ; ACW Window Mode Interrupt

; ADCA interrupt vectors
.equ ADCA_CH0_vect = 142 ; Interrupt 0
.equ ADCA_CH1_vect = 144 ; Interrupt 1
.equ ADCA_CH2_vect = 146 ; Interrupt 2
.equ ADCA_CH3_vect = 148 ; Interrupt 3

; TCD0 interrupt vectors
.equ TCD0_OVF_vect = 154 ; Overflow Interrupt
.equ TCD0_ERR_vect = 156 ; Error Interrupt
.equ TCD0_CCA_vect = 158 ; Compare or Capture A Interrupt
.equ TCD0_CCB_vect = 160 ; Compare or Capture B Interrupt
.equ TCD0_CCC_vect = 162 ; Compare or Capture C Interrupt
.equ TCD0_CCD_vect = 164 ; Compare or Capture D Interrupt

; TCD1 interrupt vectors
.equ TCD1_OVF_vect = 166 ; Overflow Interrupt
.equ TCD1_ERR_vect = 168 ; Error Interrupt
.equ TCD1_CCA_vect = 170 ; Compare or Capture A Interrupt
.equ TCD1_CCB_vect = 172 ; Compare or Capture B Interrupt

; SPID interrupt vectors
.equ SPID_INT_vect = 174 ; SPI Interrupt

; USARTD0 interrupt vectors
.equ USARTD0_RXC_vect = 176 ; Reception Complete Interrupt
.equ USARTD0_DRE_vect = 178 ; Data Register Empty Interrupt
.equ USARTD0_TXC_vect = 180 ; Transmission Complete Interrupt

; USARTD1 interrupt vectors
.equ USARTD1_RXC_vect = 182 ; Reception Complete Interrupt
.equ USARTD1_DRE_vect = 184 ; Data Register Empty Interrupt
.equ USARTD1_TXC_vect = 186 ; Transmission Complete Interrupt

; PORTF interrupt vectors
.equ PORTF_INT0_vect = 208 ; External Interrupt 0
.equ PORTF_INT1_vect = 210 ; External Interrupt 1

; TCF0 interrupt vectors
.equ TCF0_OVF_vect = 216 ; Overflow Interrupt
.equ TCF0_ERR_vect = 218 ; Error Interrupt
.equ TCF0_CCA_vect = 220 ; Compare or Capture A Interrupt
.equ TCF0_CCB_vect = 222 ; Compare or Capture B Interrupt
.equ TCF0_CCC_vect = 224 ; Compare or Capture C Interrupt
.equ TCF0_CCD_vect = 226 ; Compare or Capture D Interrupt

; USARTF0 interrupt vectors
.equ USARTF0_RXC_vect = 238 ; Reception Complete Interrupt
.equ USARTF0_DRE_vect = 240 ; Data Register Empty Interrupt
.equ USARTF0_TXC_vect = 242 ; Transmission Complete Interrupt

; USB interrupt vectors
.equ USB_BUSEVENT_vect = 250 ; SOF, suspend, resume, reset bus event interrupts, crc, underflow, overflow and stall error interrupts
.equ USB_TRNCOMPL_vect = 252 ; Transaction complete interrupt



; ***** INTERRUPT VECTORS, MODULE BASES **********************************

.equ OSC_vbase = 2
.equ PORTC_vbase = 4
.equ PORTR_vbase = 8
.equ DMA_vbase = 12
.equ RTC_vbase = 20
.equ TWIC_vbase = 24
.equ TCC0_vbase = 28
.equ TCC1_vbase = 40
.equ SPIC_vbase = 48
.equ USARTC0_vbase = 50
.equ USARTC1_vbase = 56
.equ AES_vbase = 62
.equ NVM_vbase = 64
.equ PORTB_vbase = 68
.equ ACB_vbase = 72
.equ ADCB_vbase = 78
.equ PORTE_vbase = 86
.equ TWIE_vbase = 90
.equ TCE0_vbase = 94
.equ TCE1_vbase = 106
.equ SPIE_vbase = 114
.equ USARTE0_vbase = 116
.equ USARTE1_vbase = 122
.equ PORTD_vbase = 128
.equ PORTA_vbase = 132
.equ ACA_vbase = 136
.equ ADCA_vbase = 142
.equ TCD0_vbase = 154
.equ TCD1_vbase = 166
.equ SPID_vbase = 174
.equ USARTD0_vbase = 176
.equ USARTD1_vbase = 182
.equ PORTF_vbase = 208
.equ TCF0_vbase = 216
.equ USARTF0_vbase = 238
.equ USB_vbase = 250


; ***** INTERRUPT VECTORS, VECTOR OFFSETS *********************************

; OSC interrupt vector offsets

.equ OSC_OSCF_voffset = 0

; AES interrupt vector offsets

.equ AES_INT_voffset = 0

; DMA interrupt vector offsets

.equ DMA_CH0_voffset = 0
.equ DMA_CH1_voffset = 2
.equ DMA_CH2_voffset = 4
.equ DMA_CH3_voffset = 6

; NVM interrupt vector offsets

.equ NVM_EE_voffset = 0
.equ NVM_SPM_voffset = 2

; ADC interrupt vector offsets

.equ ADC_CH0_voffset = 0
.equ ADC_CH1_voffset = 2
.equ ADC_CH2_voffset = 4
.equ ADC_CH3_voffset = 6

; AC interrupt vector offsets

.equ AC_AC0_voffset = 0
.equ AC_AC1_voffset = 2
.equ AC_ACW_voffset = 4

; RTC interrupt vector offsets

.equ RTC_OVF_voffset = 0
.equ RTC_COMP_voffset = 2

; TWI interrupt vector offsets

.equ TWI_TWIS_voffset = 0
.equ TWI_TWIM_voffset = 2

; USB interrupt vector offsets

.equ USB_BUSEVENT_voffset = 0
.equ USB_TRNCOMPL_voffset = 2

; PORT interrupt vector offsets

.equ PORT_INT0_voffset = 0
.equ PORT_INT1_voffset = 2

; TC0 interrupt vector offsets

.equ TC0_OVF_voffset = 0
.equ TC0_ERR_voffset = 2
.equ TC0_CCA_voffset = 4
.equ TC0_CCB_voffset = 6
.equ TC0_CCC_voffset = 8
.equ TC0_CCD_voffset = 10

; TC1 interrupt vector offsets

.equ TC1_OVF_voffset = 0
.equ TC1_ERR_voffset = 2
.equ TC1_CCA_voffset = 4
.equ TC1_CCB_voffset = 6

; USART interrupt vector offsets

.equ USART_RXC_voffset = 0
.equ USART_DRE_voffset = 2
.equ USART_TXC_voffset = 4

; SPI interrupt vector offsets

.equ SPI_INT_voffset = 0



.equ INT_VECTORS_SIZE = 254 ; size in words


#endif  /* _ATxmega64A3UDEF_INC_ */

; ***** END OF FILE ******************************************************



