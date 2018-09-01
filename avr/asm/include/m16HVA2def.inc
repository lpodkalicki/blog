;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATmega16HVA2.xml ********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "m16HVA2def.inc"
;* Title             : Register/Bit Definitions for the ATmega16HVA2
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATmega16HVA2
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

#ifndef _M16HVA2DEF_INC_
#define _M16HVA2DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATmega16HVA2
#pragma AVRPART ADMIN PART_NAME ATmega16HVA2
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x0e

#pragma AVRPART CORE CORE_VERSION V2E


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	BPPLR	= 0xfe	; MEMORY MAPPED
.equ	BPCR	= 0xfd	; MEMORY MAPPED
.equ	BPHCTR	= 0xfc	; MEMORY MAPPED
.equ	BPOCTR	= 0xfb	; MEMORY MAPPED
.equ	BPSCTR	= 0xfa	; MEMORY MAPPED
.equ	BPCHCD	= 0xf9	; MEMORY MAPPED
.equ	BPDHCD	= 0xf8	; MEMORY MAPPED
.equ	BPCOCD	= 0xf7	; MEMORY MAPPED
.equ	BPDOCD	= 0xf6	; MEMORY MAPPED
.equ	BPSCD	= 0xf5	; MEMORY MAPPED
.equ	BPIFR	= 0xf3	; MEMORY MAPPED
.equ	BPIMSK	= 0xf2	; MEMORY MAPPED
.equ	FCSR	= 0xf0	; MEMORY MAPPED
.equ	CADICL	= 0xe8	; MEMORY MAPPED
.equ	CADICH	= 0xe9	; MEMORY MAPPED
.equ	CADRC	= 0xe6	; MEMORY MAPPED
.equ	CADCSRB	= 0xe5	; MEMORY MAPPED
.equ	CADCSRA	= 0xe4	; MEMORY MAPPED
.equ	CADAC3	= 0xe3	; MEMORY MAPPED
.equ	CADAC2	= 0xe2	; MEMORY MAPPED
.equ	CADAC1	= 0xe1	; MEMORY MAPPED
.equ	CADAC0	= 0xe0	; MEMORY MAPPED
.equ	BGCRR	= 0xd1	; MEMORY MAPPED
.equ	BGCCR	= 0xd0	; MEMORY MAPPED
.equ	ROCR	= 0xc8	; MEMORY MAPPED
.equ	OCR1B	= 0x89	; MEMORY MAPPED
.equ	OCR1A	= 0x88	; MEMORY MAPPED
.equ	TCNT1L	= 0x84	; MEMORY MAPPED
.equ	TCNT1H	= 0x85	; MEMORY MAPPED
.equ	TCCR1B	= 0x81	; MEMORY MAPPED
.equ	TCCR1A	= 0x80	; MEMORY MAPPED
.equ	DIDR0	= 0x7e	; MEMORY MAPPED
.equ	VADMUX	= 0x7c	; MEMORY MAPPED
.equ	VADCSR	= 0x7a	; MEMORY MAPPED
.equ	VADCL	= 0x78	; MEMORY MAPPED
.equ	VADCH	= 0x79	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	FOSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR0	= 0x64	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCSR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	DWDR	= 0x31
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
.equ	EEAR	= 0x21
.equ	EEDR	= 0x20
.equ	EECR	= 0x1f
.equ	GPIOR0	= 0x1e
.equ	EIMSK	= 0x1d
.equ	EIFR	= 0x1c
.equ	PCIFR	= 0x1b
.equ	OSICSR	= 0x17
.equ	TIFR1	= 0x16
.equ	TIFR0	= 0x15
.equ	PORTC	= 0x08
.equ	PINC	= 0x06
.equ	PORTB	= 0x05
.equ	DDRB	= 0x04
.equ	PINB	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

; ***** AD_CONVERTER *****************
; VADMUX - The VADC multiplexer Selection Register
.equ	VADMUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	VADMUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	VADMUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	VADMUX3	= 3	; Analog Channel and Gain Selection Bits

; VADCSR - The VADC Control and Status register
.equ	VADCCIE	= 0	; VADC Conversion Complete Interrupt Enable
.equ	VADCCIF	= 1	; VADC Conversion Complete Interrupt Flag
.equ	VADSC	= 2	; VADC Satrt Conversion
.equ	VADEN	= 3	; VADC Enable


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


; ***** BANDGAP **********************
; BGCRR - Bandgap Calibration of Resistor Ladder
.equ	BGCR0	= 0	; Bandgap Calibration of Resistor Ladder Bit 0
.equ	BGCR1	= 1	; Bandgap Calibration of Resistor Ladder Bit 1
.equ	BGCR2	= 2	; Bandgap Calibration of Resistor Ladder Bit 2
.equ	BGCR3	= 3	; Bandgap Calibration of Resistor Ladder Bit 3
.equ	BGCR4	= 4	; Bandgap Calibration of Resistor Ladder Bit 4
.equ	BGCR5	= 5	; Bandgap Calibration of Resistor Ladder Bit 5
.equ	BGCR6	= 6	; Bandgap Calibration of Resistor Ladder Bit 6
.equ	BGCR7	= 7	; Bandgap Calibration of Resistor Ladder Bit 7

; BGCCR - Bandgap Calibration Register
.equ	BGCC0	= 0	; BG Calibration of PTAT Current Bit 0
.equ	BGCC1	= 1	; BG Calibration of PTAT Current Bit 1
.equ	BGCC2	= 2	; BG Calibration of PTAT Current Bit 2
.equ	BGCC3	= 3	; BG Calibration of PTAT Current Bit 3
.equ	BGCC4	= 4	; BG Calibration of PTAT Current Bit 4
.equ	BGCC5	= 5	; BG Calibration of PTAT Current Bit 5
.equ	BGD	= 7	; Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled.


; ***** PORTC ************************
; PORTC - Port C Data Register
.equ	PORTC0	= 0	; Port C Data Register bit 0
.equ	PC0	= 0	; For compatibility

; PINC - Port C Input Pins
.equ	PINC0	= 0	; Port C Input pin 0


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


; ***** FET **************************
; FCSR - FET Control and Status Register
.equ	CFE	= 0	; Charge FET Enable
.equ	DFE	= 1	; Discharge FET Enable
.equ	CPS	= 2	; Current Protection Status
.equ	DUVRD	= 3	; Deep Under-Voltage Recovery Disable


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
; SPMCSR - Store Program Memory Control and Status Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	RFLB	= 3	; Read Fuse and Lock Bits
.equ	CTPB	= 4	; Clear Temporary Page Buffer
.equ	SIGRD	= 5	; Signature Row Read


; ***** PORTB ************************
; PORTB - Data Register, Port B
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

; PINB - Input Pins, Port B
.equ	PINB0	= 0	; 
.equ	PINB1	= 1	; 
.equ	PINB2	= 2	; 
.equ	PINB3	= 3	; 


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
.equ	PUD	= 4	; Pull-up disable
.equ	CKOE	= 5	; Clock Output Enable

; MCUSR - MCU Status Register
.equ	PORF	= 0	; Power-on reset flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BODRF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag
.equ	OCDRF	= 4	; OCD Reset Flag

; FOSCCAL - Fast Oscillator Calibration Value
.equ	FCAL0	= 0	; Oscillator Calibration Value Bit0
.equ	FCAL1	= 1	; Oscillator Calibration Value Bit1
.equ	FCAL2	= 2	; Oscillator Calibration Value Bit2
.equ	FCAL3	= 3	; Oscillator Calibration Value Bit3
.equ	FCAL4	= 4	; Oscillator Calibration Value Bit4
.equ	FCAL5	= 5	; Oscillator Calibration Value Bit5
.equ	FCAL6	= 6	; Oscillator Calibration Value Bit6
.equ	FCAL7	= 7	; Oscillator Calibration Value Bit7

; OSICSR - Oscillator Sampling Interface Control and Status Register
.equ	OSIEN	= 0	; Oscillator Sampling Interface Enable
.equ	OSIST	= 1	; Oscillator Sampling Interface Status
.equ	OSISEL0	= 4	; Oscillator Sampling Interface Select 0

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
.equ	PRVADC	= 0	; Power Reduction V-ADC
.equ	PRTIM0	= 1	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 2	; Power Reduction Timer/Counter1
.equ	PRSPI	= 3	; Power reduction SPI
.equ	PRVRM	= 5	; Power Reduction Voltage Regulator Monitor

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPCE	= 7	; Clock Prescaler Change Enable


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


; ***** COULOMB_COUNTER **************
; CADCSRA - CC-ADC Control and Status Register A
.equ	CADSE	= 0	; When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode.
.equ	CADSI0	= 1	; The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined.
.equ	CADSI1	= 2	; The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined.
.equ	CADAS0	= 3	; CC_ADC Accumulate Current Select Bit 0
.equ	CADAS1	= 4	; CC_ADC Accumulate Current Select Bit 1
.equ	CADUB	= 5	; CC_ADC Update Busy
.equ	CADPOL	= 6	; 
.equ	CADEN	= 7	; When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled.

; CADCSRB - CC-ADC Control and Status Register B
.equ	CADICIF	= 0	; CC-ADC Instantaneous Current Interrupt Flag
.equ	CADRCIF	= 1	; CC-ADC Accumulate Current Interrupt Flag
.equ	CADACIF	= 2	; CC-ADC Accumulate Current Interrupt Flag
.equ	CADICIE	= 4	; CAD Instantenous Current Interrupt Enable
.equ	CADRCIE	= 5	; Regular Current Interrupt Enable
.equ	CADACIE	= 6	; 

; CADAC3 - ADC Accumulate Current
.equ	CADAC24	= 0	; 
.equ	CADAC25	= 1	; 
.equ	CADAC26	= 2	; 
.equ	CADAC27	= 3	; 
.equ	CADAC28	= 4	; 
.equ	CADAC29	= 5	; 
.equ	CADAC30	= 6	; 
.equ	CADAC31	= 7	; 

; CADAC2 - ADC Accumulate Current
.equ	CADAC16	= 0	; 
.equ	CADAC17	= 1	; 
.equ	CADAC18	= 2	; 
.equ	CADAC19	= 3	; 
.equ	CADAC20	= 4	; 
.equ	CADAC21	= 5	; 
.equ	CADAC22	= 6	; 
.equ	CADAC23	= 7	; 

; CADAC1 - ADC Accumulate Current
.equ	CADAC08	= 0	; 
.equ	CADAC09	= 1	; 
.equ	CADAC10	= 2	; 
.equ	CADAC11	= 3	; 
.equ	CADAC12	= 4	; 
.equ	CADAC13	= 5	; 
.equ	CADAC14	= 6	; 
.equ	CADAC15	= 7	; 

; CADAC0 - ADC Accumulate Current
.equ	CADAC00	= 0	; 
.equ	CADAC01	= 1	; 
.equ	CADAC02	= 2	; 
.equ	CADAC03	= 3	; 
.equ	CADAC04	= 4	; 
.equ	CADAC05	= 5	; 
.equ	CADAC06	= 6	; 
.equ	CADAC07	= 7	; 

; CADRC - CC-ADC Regular Current
.equ	CADRC0	= 0	; 
.equ	CADRC1	= 1	; 
.equ	CADRC2	= 2	; 
.equ	CADRC3	= 3	; 
.equ	CADRC4	= 4	; 
.equ	CADRC5	= 5	; 
.equ	CADRC6	= 6	; 
.equ	CADRC7	= 7	; 


; ***** TIMER_COUNTER_0 **************
; TCCR0A - Timer/Counter0 Control Register
.equ	WGM00	= 0	; Clock Select0 bit 0
.equ	ICS0	= 3	; Input Capture Select
.equ	ICES0	= 4	; Input Capture Edge Select
.equ	ICNC0	= 5	; Input Capture Noise Canceler
.equ	ICEN0	= 6	; Input Capture Mode Enable
.equ	TCW0	= 7	; Timer/Counter Width

; TCCR0B - Timer/Counter0 Control Register
.equ	CS00	= 0	; Clock Select0 bit 0
.equ	CS01	= 1	; Clock Select0 bit 1
.equ	CS02	= 2	; Clock Select0 bit 2

; OCR0A - Output compare Register A
.equ	OCR0A0	= 0	; 
.equ	OCR0A1	= 1	; 
.equ	OCR0A2	= 2	; 
.equ	OCR0A3	= 3	; 
.equ	OCR0A4	= 4	; 
.equ	OCR0A5	= 5	; 
.equ	OCR0A6	= 6	; 
.equ	OCR0A7	= 7	; 

; OCR0B - Output compare Register B
.equ	OCR0B0	= 0	; 
.equ	OCR0B1	= 1	; 
.equ	OCR0B2	= 2	; 
.equ	OCR0B3	= 3	; 
.equ	OCR0B4	= 4	; 
.equ	OCR0B5	= 5	; 
.equ	OCR0B6	= 6	; 
.equ	OCR0B7	= 7	; 

; TIMSK0 - Timer/Counter Interrupt Mask Register
.equ	TOIE0	= 0	; Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Output Compare Interrupt Enable
.equ	OCIE0B	= 2	; Output Compare Interrupt Enable
.equ	ICIE0	= 3	; Timer/Counter n Input Capture Interrupt Enable

; TIFR0 - Timer/Counter Interrupt Flag register
.equ	TOV0	= 0	; Overflow Flag
.equ	OCF0A	= 1	; Output Compare Flag
.equ	OCF0B	= 2	; Output Compare Flag
.equ	ICF0	= 3	; Timer/Counter Interrupt Flag Register


; ***** VOLTAGE_REGULATOR ************
; ROCR - Regulator Operating Condition Register
.equ	ROCWIE	= 0	; ROC Warning Interrupt Enable
.equ	ROCWIF	= 1	; ROC Warning Interrupt Flag
.equ	ROCS	= 7	; ROC Status


; ***** BATTERY_PROTECTION ***********
; BPPLR - Battery Protection Parameter Lock Register
.equ	BPPL	= 0	; Battery Protection Parameter Lock
.equ	BPPLE	= 1	; Battery Protection Parameter Lock Enable

; BPCR - Battery Protection Control Register
.equ	CHCD	= 0	; Charge High-current Protection Disable
.equ	DHCD	= 1	; Discharge High-current Protection Disable
.equ	COCD	= 2	; Charge Over-current Protection Disabled
.equ	DOCD	= 3	; Discharge Over-current Protection Disabled
.equ	SCD	= 4	; Short Circuit Protection Disabled
.equ	PRMD	= 7	; Power Reduction Mode Disabled

; BPHCTR - Battery Protection Short-current Timing Register
.equ	HCPT0	= 0	; High-current Protection Timing bit 0
.equ	HCPT1	= 1	; High-current Protection Timing bit 1
.equ	HCPT2	= 2	; High-current Protection Timing bit 2
.equ	HCPT3	= 3	; High-current Protection Timing bit 3
.equ	HCPT4	= 4	; High-current Protection Timing bit 4
.equ	HCPT5	= 5	; High-current Protection Timing bit 5

; BPOCTR - Battery Protection Over-current Timing Register
.equ	OCPT0	= 0	; Over-current Protection Timing bit 0
.equ	OCPT1	= 1	; Over-current Protection Timing bit 1
.equ	OCPT2	= 2	; Over-current Protection Timing bit 2
.equ	OCPT3	= 3	; Over-current Protection Timing bit 3
.equ	OCPT4	= 4	; Over-current Protection Timing bit 4
.equ	OCPT5	= 5	; Over-current Protection Timing bit 5

; BPSCTR - Battery Protection Short-current Timing Register
.equ	SCPT0	= 0	; Short-current Protection Timing
.equ	SCPT1	= 1	; Short-current Protection Timing
.equ	SCPT2	= 2	; Short-current Protection Timing
.equ	SCPT3	= 3	; Short-current Protection Timing
.equ	SCPT4	= 4	; Short-current Protection Timing
.equ	SCPT5	= 5	; Short-current Protection Timing
.equ	SCPT6	= 6	; Short-current Protection Timing

; BPCHCD - Battery Protection Charge-High-current Detection Level Register
.equ	CHCDL0	= 0	; Charge High-current Detection Level
.equ	CHCDL1	= 1	; Charge High-current Detection Level
.equ	CHCDL2	= 2	; Charge High-current Detection Level
.equ	CHCDL3	= 3	; Charge High-current Detection Level
.equ	CHCDL4	= 4	; Charge High-current Detection Level
.equ	CHCDL5	= 5	; Charge High-current Detection Level
.equ	CHCDL6	= 6	; Charge High-current Detection Level
.equ	CHCDL7	= 7	; Charge High-current Detection Level

; BPDHCD - Battery Protection Discharge-High-current Detection Level Register
.equ	DHCDL0	= 0	; Discharge High-current Detection Level bit 0
.equ	DHCDL1	= 1	; Discharge High-current Detection Level bit 1
.equ	DHCDL2	= 2	; Discharge High-current Detection Level bit 2
.equ	DHCDL3	= 3	; Discharge High-current Detection Level bit 3
.equ	DHCDL4	= 4	; Discharge High-current Detection Level bit 4
.equ	DHCDL5	= 5	; Discharge High-current Detection Level bit 5
.equ	DHCDL6	= 6	; Discharge High-current Detection Level bit 6
.equ	DHCDL7	= 7	; Discharge High-current Detection Level bit 7

; BPCOCD - Battery Protection Charge-Over-current Detection Level Register
.equ	COCDL0	= 0	; Charge Over-current Detection Level
.equ	COCDL1	= 1	; Charge Over-current Detection Level
.equ	COCDL2	= 2	; Charge Over-current Detection Level
.equ	COCDL3	= 3	; Charge Over-current Detection Level
.equ	COCDL4	= 4	; Charge Over-current Detection Level
.equ	COCDL5	= 5	; Charge Over-current Detection Level
.equ	COCDL6	= 6	; Charge Over-current Detection Level
.equ	COCDL7	= 7	; Charge Over-current Detection Level

; BPDOCD - Battery Protection Discharge-Over-current Detection Level Register
.equ	DOCDL0	= 0	; Discharge Over-current Detection Level bit0
.equ	DOCDL1	= 1	; Discharge Over-current Detection Level bit1
.equ	DOCDL2	= 2	; Discharge Over-current Detection Level bit2
.equ	DOCDL3	= 3	; Discharge Over-current Detection Level bit3
.equ	DOCDL4	= 4	; Discharge Over-current Detection Level bit4
.equ	DOCDL5	= 5	; Discharge Over-current Detection Level bit5
.equ	DOCDL6	= 6	; Discharge Over-current Detection Level bit6
.equ	DOCDL7	= 7	; Discharge Over-current Detection Level bit7

; BPSCD - Battery Protection Short-Circuit Detection Level Register
.equ	SCDL0	= 0	; Short-circuit Detection Level bit 0
.equ	SCDL1	= 1	; Short-circuit Detection Level bit 1
.equ	SCDL2	= 2	; Short-circuit Detection Level bit 2
.equ	SCDL3	= 3	; Short-circuit Detection Level bit 3
.equ	SCDL4	= 4	; Short-circuit Detection Level bit 4
.equ	SCDL5	= 5	; Short-circuit Detection Level bit 5
.equ	SCDL6	= 6	; Short-circuit Detection Level bit 6
.equ	SCDL7	= 7	; Short-circuit Detection Level bit 7

; BPIFR - Battery Protection Interrupt Flag Register
.equ	CHCIF	= 0	; Charge High-current Protection Activated Interrupt
.equ	DHCIF	= 1	; Disharge High-current Protection Activated Interrupt
.equ	COCIF	= 2	; Charge Over-current Protection Activated Interrupt Flag
.equ	DOCIF	= 3	; Discharge Over-current Protection Activated Interrupt Flag
.equ	SCIF	= 4	; Short-circuit Protection Activated Interrupt Flag

; BPIMSK - Battery Protection Interrupt Mask Register
.equ	CHCIE	= 0	; Charger High-current Protection Activated Interrupt
.equ	DHCIE	= 1	; Discharger High-current Protection Activated Interrupt
.equ	COCIE	= 2	; Charge Over-current Protection Activated Interrupt Enable
.equ	DOCIE	= 3	; Discharge Over-current Protection Activated Interrupt Enable
.equ	SCIE	= 4	; Short-circuit Protection Activated Interrupt Enable


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0	; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; External Interrupt Sense Control 0 Bit 1
.equ	ISC10	= 2	; External Interrupt Sense Control 1 Bit 0
.equ	ISC11	= 3	; External Interrupt Sense Control 1 Bit 1
.equ	ISC20	= 4	; External Interrupt Sense Control 2 Bit 0
.equ	ISC21	= 5	; External Interrupt Sense Control 2 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable
.equ	INT2	= 2	; External Interrupt Request 2 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1
.equ	INTF2	= 2	; External Interrupt Flag 2

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lockbit
.equ	LB2	= 1	; Lockbit


; ***** FUSES ************************************************************
; LOW fuse bits
.equ	SUT0	= 0	; Select start-up time
.equ	SUT1	= 1	; Select start-up time
.equ	SUT2	= 2	; Select start-up time
.equ	SELFPRGEN	= 3	; Enable self programming
.equ	DWEN	= 4	; Enable debugWIRE
.equ	SPIEN	= 5	; Enable Serial programming and Data Downloading
.equ	EESAVE	= 6	; EEPROM memory is preserved through chip erase
.equ	WDTON	= 7	; Watchdog Timer Always On

; HIGH fuse bits
.equ	OSCSEL0	= 0	; Oscillator Select 0
.equ	OSCSEL1	= 1	; Oscillator Select 1
.equ	COMPMODE	= 2	; Compatibility mode



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
.equ	NRWW_STOP_ADDR	= 0x0
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x0
.equ	PAGESIZE	= 64



; ***** INTERRUPT VECTORS ************************************************
.equ	BPINTaddr	= 0x0002	; Battery Protection Interrupt
.equ	VREGMONaddr	= 0x0004	; Voltage regulator monitor interrupt
.equ	INT0addr	= 0x0006	; External Interrupt Request 0
.equ	INT1addr	= 0x0008	; External Interrupt Request 1
.equ	INT2addr	= 0x000a	; External Interrupt Request 2
.equ	PCI0addr	= 0x000c	; Pin Change Interrupt Request 0
.equ	WDTaddr	= 0x000e	; Watchdog Timeout Interrupt
.equ	ICP1addr	= 0x0010	; Timer 1 Input capture
.equ	OC1Aaddr	= 0x0012	; Timer 1 Compare Match A
.equ	OC1Baddr	= 0x0014	; Timer 1 Compare Match B
.equ	OVF1addr	= 0x0016	; Timer 1 overflow
.equ	ICP0addr	= 0x0018	; Timer 0 Input Capture
.equ	OC0Aaddr	= 0x001a	; Timer 0 Comapre Match A
.equ	OC0Baddr	= 0x001c	; Timer 0 Compare Match B
.equ	OVF0addr	= 0x001e	; Timer 0 Overflow
.equ	SPIaddr	= 0x0020	; SPI Serial transfer complete
.equ	VADCaddr	= 0x0022	; Voltage ADC Conversion Complete
.equ	CADICaddr	= 0x0024	; Coulomb Counter ADC Conversion Complete
.equ	CADRCaddr	= 0x0026	; Coloumb Counter ADC Regular Current
.equ	CADACaddr	= 0x0028	; Coloumb Counter ADC Accumulator
.equ	ERDYaddr	= 0x002a	; EEPROM Ready

.equ	INT_VECTORS_SIZE	= 44	; size in words

#endif  /* _M16HVA2DEF_INC_ */

; ***** END OF FILE ******************************************************
