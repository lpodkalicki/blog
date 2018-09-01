;***** THIS IS A MACHINE GENERATED FILE - DO NOT EDIT ********************
;***** Created: 2011-02-09 12:03 ******* Source: ATtiny167.xml ***********
;*************************************************************************
;* A P P L I C A T I O N   N O T E   F O R   T H E   A V R   F A M I L Y
;* 
;* Number            : AVR000
;* File Name         : "tn167def.inc"
;* Title             : Register/Bit Definitions for the ATtiny167
;* Date              : 2011-02-09
;* Version           : 2.35
;* Support E-mail    : avr@atmel.com
;* Target MCU        : ATtiny167
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

#ifndef _TN167DEF_INC_
#define _TN167DEF_INC_


#pragma partinc 0

; ***** SPECIFY DEVICE ***************************************************
.device ATtiny167
#pragma AVRPART ADMIN PART_NAME ATtiny167
.equ	SIGNATURE_000	= 0x1e
.equ	SIGNATURE_001	= 0x94
.equ	SIGNATURE_002	= 0x87

#pragma AVRPART CORE CORE_VERSION V2
#pragma AVRPART CORE NEW_INSTRUCTIONS lpm rd,z+


; ***** I/O REGISTER DEFINITIONS *****************************************
; NOTE:
; Definitions marked "MEMORY MAPPED"are extended I/O ports
; and cannot be used with IN/OUT instructions
.equ	LINDAT	= 0xd2	; MEMORY MAPPED
.equ	LINSEL	= 0xd1	; MEMORY MAPPED
.equ	LINIDR	= 0xd0	; MEMORY MAPPED
.equ	LINDLR	= 0xcf	; MEMORY MAPPED
.equ	LINBRRH	= 0xce	; MEMORY MAPPED
.equ	LINBRRL	= 0xcd	; MEMORY MAPPED
.equ	LINBTR	= 0xcc	; MEMORY MAPPED
.equ	LINERR	= 0xcb	; MEMORY MAPPED
.equ	LINENIR	= 0xca	; MEMORY MAPPED
.equ	LINSIR	= 0xc9	; MEMORY MAPPED
.equ	LINCR	= 0xc8	; MEMORY MAPPED
.equ	USIPP	= 0xbc	; MEMORY MAPPED
.equ	USIBR	= 0xbb	; MEMORY MAPPED
.equ	USIDR	= 0xba	; MEMORY MAPPED
.equ	USISR	= 0xb9	; MEMORY MAPPED
.equ	USICR	= 0xb8	; MEMORY MAPPED
.equ	ASSR	= 0xb6	; MEMORY MAPPED
.equ	OCR1BL	= 0x8a	; MEMORY MAPPED
.equ	OCR1BH	= 0x8b	; MEMORY MAPPED
.equ	OCR1AL	= 0x88	; MEMORY MAPPED
.equ	OCR1AH	= 0x89	; MEMORY MAPPED
.equ	ICR1L	= 0x86	; MEMORY MAPPED
.equ	ICR1H	= 0x87	; MEMORY MAPPED
.equ	TCNT1L	= 0x84	; MEMORY MAPPED
.equ	TCNT1H	= 0x85	; MEMORY MAPPED
.equ	TCCR1D	= 0x83	; MEMORY MAPPED
.equ	TCCR1C	= 0x82	; MEMORY MAPPED
.equ	TCCR1B	= 0x81	; MEMORY MAPPED
.equ	TCCR1A	= 0x80	; MEMORY MAPPED
.equ	DIDR1	= 0x7f	; MEMORY MAPPED
.equ	DIDR0	= 0x7e	; MEMORY MAPPED
.equ	ADMUX	= 0x7c	; MEMORY MAPPED
.equ	ADCSRB	= 0x7b	; MEMORY MAPPED
.equ	ADCSRA	= 0x7a	; MEMORY MAPPED
.equ	ADCH	= 0x79	; MEMORY MAPPED
.equ	ADCL	= 0x78	; MEMORY MAPPED
.equ	AMISCR	= 0x77	; MEMORY MAPPED
.equ	TIMSK1	= 0x6f	; MEMORY MAPPED
.equ	TIMSK0	= 0x6e	; MEMORY MAPPED
.equ	PCMSK1	= 0x6c	; MEMORY MAPPED
.equ	PCMSK0	= 0x6b	; MEMORY MAPPED
.equ	EICRA	= 0x69	; MEMORY MAPPED
.equ	PCICR	= 0x68	; MEMORY MAPPED
.equ	OSCCAL	= 0x66	; MEMORY MAPPED
.equ	PRR	= 0x64	; MEMORY MAPPED
.equ	CLKSELR	= 0x63	; MEMORY MAPPED
.equ	CLKCSR	= 0x62	; MEMORY MAPPED
.equ	CLKPR	= 0x61	; MEMORY MAPPED
.equ	WDTCR	= 0x60	; MEMORY MAPPED
.equ	SREG	= 0x3f
.equ	SPL	= 0x3d
.equ	SPH	= 0x3e
.equ	SPMCSR	= 0x37
.equ	MCUCR	= 0x35
.equ	MCUSR	= 0x34
.equ	SMCR	= 0x33
.equ	DWDR	= 0x31
.equ	ACSR	= 0x30
.equ	SPDR	= 0x2e
.equ	SPSR	= 0x2d
.equ	SPCR	= 0x2c
.equ	GPIOR2	= 0x2b
.equ	GPIOR1	= 0x2a
.equ	OCR0A	= 0x28
.equ	TCNT0	= 0x27
.equ	TCCR0B	= 0x26
.equ	TCCR0A	= 0x25
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
.equ	PORTCR	= 0x12
.equ	PORTB	= 0x05
.equ	DDRB	= 0x04
.equ	PINB	= 0x03
.equ	PORTA	= 0x02
.equ	DDRA	= 0x01
.equ	PINA	= 0x00


; ***** BIT DEFINITIONS **************************************************

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
.equ	PORTA4	= 4	; Port A Data Register bit 4
.equ	PA4	= 4	; For compatibility
.equ	PORTA5	= 5	; Port A Data Register bit 5
.equ	PA5	= 5	; For compatibility
.equ	PORTA6	= 6	; Port A Data Register bit 6
.equ	PA6	= 6	; For compatibility
.equ	PORTA7	= 7	; Port A Data Register bit 7
.equ	PA7	= 7	; For compatibility

; DDRA - Port A Data Direction Register
.equ	DDA0	= 0	; Data Direction Register, Port A, bit 0
.equ	DDA1	= 1	; Data Direction Register, Port A, bit 1
.equ	DDA2	= 2	; Data Direction Register, Port A, bit 2
.equ	DDA3	= 3	; Data Direction Register, Port A, bit 3
.equ	DDA4	= 4	; Data Direction Register, Port A, bit 4
.equ	DDA5	= 5	; Data Direction Register, Port A, bit 5
.equ	DDA6	= 6	; Data Direction Register, Port A, bit 6
.equ	DDA7	= 7	; Data Direction Register, Port A, bit 7

; PINA - Port A Input Pins
.equ	PINA0	= 0	; Input Pins, Port A bit 0
.equ	PINA1	= 1	; Input Pins, Port A bit 1
.equ	PINA2	= 2	; Input Pins, Port A bit 2
.equ	PINA3	= 3	; Input Pins, Port A bit 3
.equ	PINA4	= 4	; Input Pins, Port A bit 4
.equ	PINA5	= 5	; Input Pins, Port A bit 5
.equ	PINA6	= 6	; Input Pins, Port A bit 6
.equ	PINA7	= 7	; Input Pins, Port A bit 7


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


; ***** USI **************************
; USIPP - USI Pin Position
.equ	USIPOS	= 0	; USI Pin Position

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


; ***** TIMER_COUNTER_0 **************
; TIMSK0 - Timer/Counter0 Interrupt Mask register
.equ	TOIE0	= 0	; Timer/Counter0 Overflow Interrupt Enable
.equ	OCIE0A	= 1	; Timer/Counter0 Output Compare Match A Interrupt Enable

; TIFR0 - Timer/Counter0 Interrupt Flag Register
.equ	TOV0	= 0	; Timer/Counter0 Overflow Flag
.equ	OCF0A	= 1	; Output Compare Flag 0A

; TCCR0A - Timer/Counter0 Control Register A
.equ	WGM00	= 0	; Waveform Genration Mode bit 0
.equ	WGM01	= 1	; Waveform Genration Mode bit 1
.equ	COM0A0	= 6	; Compare Output Mode bit 0
.equ	COM0A1	= 7	; Compare Output Mode bit 1

; TCCR0B - Timer/Counter0 Control Register B
.equ	CS00	= 0	; Clock Select bit 0
.equ	CS01	= 1	; Clock Select bit 1
.equ	CS02	= 2	; Clock Select bit 2
.equ	FOC0A	= 7	; Force Output Compare A

; TCNT0 - Timer/Counter0
.equ	TCNT00	= 0	; Timer/Counter 0 bit 0
.equ	TCNT01	= 1	; Timer/Counter 0 bit 1
.equ	TCNT02	= 2	; Timer/Counter 0 bit 2
.equ	TCNT03	= 3	; Timer/Counter 0 bit 3
.equ	TCNT04	= 4	; Timer/Counter 0 bit 4
.equ	TCNT05	= 5	; Timer/Counter 0 bit 5
.equ	TCNT06	= 6	; Timer/Counter 0 bit 6
.equ	TCNT07	= 7	; Timer/Counter 0 bit 7

; OCR0A - Timer/Counter0 Output Compare Register A
.equ	OCR00	= 0	; Timer/Counter0 Output Compare Register Bit 0
.equ	OCR01	= 1	; Timer/Counter0 Output Compare Register Bit 1
.equ	OCR02	= 2	; Timer/Counter0 Output Compare Register Bit 2
.equ	OCR03	= 3	; Timer/Counter0 Output Compare Register Bit 3
.equ	OCR04	= 4	; Timer/Counter0 Output Compare Register Bit 4
.equ	OCR05	= 5	; Timer/Counter0 Output Compare Register Bit 5
.equ	OCR06	= 6	; Timer/Counter0 Output Compare Register Bit 6
.equ	OCR07	= 7	; Timer/Counter0 Output Compare Register Bit 7

; ASSR - Asynchronous Status Register
.equ	TCR0BUB	= 0	; Timer/Counter0 Control Register B Update Busy
.equ	TCR0AUB	= 1	; Timer/Counter0 Control Register A Update Busy
.equ	OCR0AUB	= 3	; Output Compare Register 0A  Update Busy
.equ	TCN0UB	= 4	; Timer/Counter0 Update Busy
.equ	AS0	= 5	; Asynchronous Timer/Counter0
.equ	EXCLK	= 6	; Enable External Clock Input

; GTCCR - General Timer Counter Control register
.equ	PSR1	= 0	; Prescaler Reset Synchronous 16-bit Timer/Counter1
.equ	PSR0	= 1	; Prescaler Reset Asynchronous 8-bit Timer/Counter0
.equ	TSM	= 7	; Timer/Counter Synchronization Mode


; ***** TIMER_COUNTER_1 **************
; TIMSK1 - Timer/Counter1 Interrupt Mask Register
.equ	TOIE1	= 0	; Timer/Counter1 Overflow Interrupt Enable
.equ	OCIE1A	= 1	; Timer/Counter1 Output Compare A Match Interrupt Enable
.equ	OCIE1B	= 2	; Timer/Counter1 Output Compare B Match Interrupt Enable
.equ	ICIE1	= 5	; Timer/Counter1 Input Capture Interrupt Enable

; TIFR1 - Timer/Counter1 Interrupt Flag register
.equ	TOV1	= 0	; Timer/Counter1 Overflow Flag
.equ	OCF1A	= 1	; Timer/Counter1 Output Compare A Match Flag
.equ	OCF1B	= 2	; Timer/Counter1 Output Compare B Match Flag
.equ	ICF1	= 5	; Timer/Counter1 Input Capture Flag

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
.equ	CS10	= 0	; Timer/Counter1 Clock Select bit 0
.equ	CS11	= 1	; Timer/Counter1 Clock Select bit 1
.equ	CS12	= 2	; Timer/Counter1 Clock Select bit 2
.equ	WGM12	= 3	; Waveform Generation Mode Bit 2
.equ	WGM13	= 4	; Waveform Generation Mode Bit 3
.equ	ICES1	= 6	; Input Capture 1 Edge Select
.equ	ICNC1	= 7	; Input Capture 1 Noise Canceler

; TCCR1C - Timer/Counter1 Control Register C
.equ	FOC1B	= 6	; Timer/Counter1 Force Output Compare for Channel B
.equ	FOC1A	= 7	; Timer/Counter1 Force Output Compare for Channel A

; TCCR1D - Timer/Counter1 Control Register D
.equ	OC1AU	= 0	; Timer/Counter1 Output Compare U-pin Enable for Channel A
.equ	OC1AV	= 1	; Timer/Counter1 Output Compare V-pin Enable for Channel A
.equ	OC1AW	= 2	; Timer/Counter1 Output Compare W-pin Enable for Channel A
.equ	OC1AX	= 3	; Timer/Counter1 Output Compare X-pin Enable for Channel A
.equ	OC1BU	= 4	; Timer/Counter1 Output Compare U-pin Enable for Channel B
.equ	OC1BV	= 5	; Timer/Counter1 Output Compare V-pin Enable for Channel B
.equ	OC1BW	= 6	; Timer/Counter1 Output Compare W-pin Enable for Channel B
.equ	OC1BX	= 7	; Timer/Counter1 Output Compare X-pin Enable for Channel B


; ***** WATCHDOG *********************
; WDTCR - Watchdog Timer Control Register
.equ	WDTCSR	= WDTCR	; For compatibility
.equ	WDP0	= 0	; Watch Dog Timer Prescaler bit 0
.equ	WDP1	= 1	; Watch Dog Timer Prescaler bit 1
.equ	WDP2	= 2	; Watch Dog Timer Prescaler bit 2
.equ	WDE	= 3	; Watch Dog Enable
.equ	WDCE	= 4	; Watchdog Change Enable
.equ	WDTOE	= WDCE	; For compatibility
.equ	WDP3	= 5	; Watchdog Timer Prescaler Bit 3
.equ	WDIE	= 6	; Watchdog Timeout Interrupt Enable
.equ	WDIF	= 7	; Watchdog Timeout Interrupt Flag


; ***** EEPROM ***********************
; EEARL - EEPROM Address Register Low Byte
.equ	EEAR0	= 0	; EEPROM Read/Write Access Bit 0
.equ	EEAR1	= 1	; EEPROM Read/Write Access Bit 1
.equ	EEAR2	= 2	; EEPROM Read/Write Access Bit 2
.equ	EEAR3	= 3	; EEPROM Read/Write Access Bit 3
.equ	EEAR4	= 4	; EEPROM Read/Write Access Bit 4
.equ	EEAR5	= 5	; EEPROM Read/Write Access Bit 5
.equ	EEAR6	= 6	; EEPROM Read/Write Access Bit 6
.equ	EEAR7	= 7	; EEPROM Read/Write Access Bit 7

; EEARH - EEPROM Address Register High Byte
.equ	EEAR8	= 0	; EEPROM Read/Write Access Bit 0

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


; ***** AD_CONVERTER *****************
; ADMUX - The ADC multiplexer Selection Register
.equ	MUX0	= 0	; Analog Channel and Gain Selection Bits
.equ	MUX1	= 1	; Analog Channel and Gain Selection Bits
.equ	MUX2	= 2	; Analog Channel and Gain Selection Bits
.equ	MUX3	= 3	; Analog Channel and Gain Selection Bits
.equ	MUX4	= 4	; Analog Channel and Gain Selection Bits
.equ	ADLAR	= 5	; Left Adjust Result
.equ	REFS0	= 6	; Reference Selection Bit 0
.equ	REFS1	= 7	; Reference Selection Bit 1

; ADCSRA - The ADC Control and Status register A
.equ	ADPS0	= 0	; ADC  Prescaler Select Bits
.equ	ADPS1	= 1	; ADC  Prescaler Select Bits
.equ	ADPS2	= 2	; ADC  Prescaler Select Bits
.equ	ADIE	= 3	; ADC Interrupt Enable
.equ	ADIF	= 4	; ADC Interrupt Flag
.equ	ADATE	= 5	; ADC  Auto Trigger Enable
.equ	ADSC	= 6	; ADC Start Conversion
.equ	ADEN	= 7	; ADC Enable

; ADCSRB - The ADC Control and Status register B (Shared with ANALOG_COMPARATOR IO_MODULE)
.equ	ADTS0	= 0	; ADC Auto Trigger Source bit 0
.equ	ADTS1	= 1	; ADC Auto Trigger Source bit 1
.equ	ADTS2	= 2	; ADC Auto Trigger Source bit 2
.equ	BIN	= 7	; Bipolar Input Mode

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

; AMISCR - Analog Miscellaneous Control Register (Shared with CURRENT_SOURCE IO_MODULE)
.equ	XREFEN	= 1	; Internal Voltage Reference Output Enable
.equ	AREFEN	= 2	; External Voltage Reference Input Enable

; DIDR1 - Digital Input Disable Register 1
.equ	ADC8D	= 0	; 
.equ	ADC9D	= 1	; 
.equ	ADC10D	= 2	; 

; DIDR0 - Digital Input Disable Register 0
.equ	ADC0D	= 0	; 
.equ	ADC1D	= 1	; 
.equ	ADC2D	= 2	; 
.equ	ADC3D	= 3	; 
.equ	ADC4D	= 4	; 
.equ	ADC5D	= 5	; 
.equ	ADC6D	= 6	; 
.equ	AIN0D	= ADC6D	; For compatibility
.equ	ADC7D	= 7	; 
.equ	AIN1D	= ADC7D	; For compatibility


; ***** CURRENT_SOURCE ***************
; AMISCR - Analog Miscellaneous Control Register (Shared with AD_CONVERTER IO_MODULE)
.equ	ISRCEN	= 0	; Current Source Enable


; ***** ANALOG_COMPARATOR ************
; ADCSRB - Analog Comparator & ADC Control and Status Register B (Shared with AD_CONVERTER IO_MODULE)
.equ	ACIR0	= 4	; Analog Comparator Internal Voltage Reference Select Bit 0
.equ	ACIR1	= 5	; Analog Comparator Internal Voltage Reference Select Bit 1
.equ	ACME	= 6	; Analog Comparator Multiplexer Enable

; ACSR - Analog Comparator Control And Status Register
.equ	ACIS0	= 0	; Analog Comparator Interrupt Mode Select bit 0
.equ	ACIS1	= 1	; Analog Comparator Interrupt Mode Select bit 1
.equ	ACIC	= 2	; Analog Comparator Input Capture Enable
.equ	ACIE	= 3	; Analog Comparator Interrupt Enable
.equ	ACI	= 4	; Analog Comparator Interrupt Flag
.equ	ACO	= 5	; Analog Compare Output
.equ	ACIRS	= 6	; Analog Comparator Internal Reference Select
.equ	ACD	= 7	; Analog Comparator Disable


; ***** EXTERNAL_INTERRUPT ***********
; EICRA - External Interrupt Control Register
.equ	ISC00	= 0	; External Interrupt Sense Control 0 Bit 0
.equ	ISC01	= 1	; External Interrupt Sense Control 0 Bit 1
.equ	ISC10	= 2	; External Interrupt Sense Control 1 Bit 0
.equ	ISC11	= 3	; External Interrupt Sense Control 1 Bit 1

; EIMSK - External Interrupt Mask Register
.equ	INT0	= 0	; External Interrupt Request 0 Enable
.equ	INT1	= 1	; External Interrupt Request 1 Enable

; EIFR - External Interrupt Flag Register
.equ	INTF0	= 0	; External Interrupt Flag 0
.equ	INTF1	= 1	; External Interrupt Flag 1

; PCICR - Pin Change Interrupt Control Register
.equ	PCIE0	= 0	; Pin Change Interrupt Enable on any PCINT7..0 pin
.equ	PCIE1	= 1	; Pin Change Interrupt Enable  on any PCINT14..8 pin

; PCIFR - Pin Change Interrupt Flag Register
.equ	PCIF0	= 0	; Pin Change Interrupt Flag 0
.equ	PCIF1	= 1	; Pin Change Interrupt Flag 1

; PCMSK1 - Pin Change Mask Register 1
.equ	PCINT8	= 0	; Pin Change Enable Mask 8
.equ	PCINT9	= 1	; Pin Change Enable Mask 9
.equ	PCINT10	= 2	; Pin Change Enable Mask 10
.equ	PCINT11	= 3	; Pin Change Enable Mask 11
.equ	PCINT12	= 4	; Pin Change Enable Mask 12
.equ	PCINT13	= 5	; Pin Change Enable Mask 13
.equ	PCINT14	= 6	; Pin Change Enable Mask 14
.equ	PCINT15	= 7	; Pin Change Enable Mask 15

; PCMSK0 - Pin Change Mask Register 0
.equ	PCINT0	= 0	; Pin Change Enable Mask 0
.equ	PCINT1	= 1	; Pin Change Enable Mask 1
.equ	PCINT2	= 2	; Pin Change Enable Mask 2
.equ	PCINT3	= 3	; Pin Change Enable Mask 3
.equ	PCINT4	= 4	; Pin Change Enable Mask 4
.equ	PCINT5	= 5	; Pin Change Enable Mask 5
.equ	PCINT6	= 6	; Pin Change Enable Mask 6
.equ	PCINT7	= 7	; Pin Change Enable Mask 7


; ***** BOOT_LOAD ********************
; SPMCSR - Store Program Memory Control Register
.equ	SPMEN	= 0	; Store Program Memory Enable
.equ	PGERS	= 1	; Page Erase
.equ	PGWRT	= 2	; Page Write
.equ	RFLB	= 3	; Read Fuse and Lock Bits
.equ	CTPB	= 4	; Clear Temporary Page Buffer
.equ	SIGRD	= 5	; Signature Row Read
.equ	RWWSB	= 6	; Read While Write Section Busy


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
.equ	PUD	= 4	; Pull-up Disable
.equ	BODS	= 5	; BOD Sleep
.equ	BODSE	= 6	; BOD Sleep Enable

; MCUSR - MCU Status register
.equ	PORF	= 0	; Power-On Reset Flag
.equ	EXTRF	= 1	; External Reset Flag
.equ	BORF	= 2	; Brown-out Reset Flag
.equ	WDRF	= 3	; Watchdog Reset Flag

; SMCR - Sleep Mode Control Register
.equ	SE	= 0	; Sleep Enable
.equ	SM0	= 1	; Sleep Mode Select Bit 0
.equ	SM1	= 2	; Sleep Mode Select Bit 1

; PRR - Power Reduction Register
.equ	PRADC	= 0	; Power Reduction ADC
.equ	PRUSI	= 1	; Power Reduction USI
.equ	PRTIM0	= 2	; Power Reduction Timer/Counter0
.equ	PRTIM1	= 3	; Power Reduction Timer/Counter1
.equ	PRSPI	= 4	; Power Reduction SPI
.equ	PRLIN	= 5	; Power Reduction LINUART

; OSCCAL - Oscillator Calibration Register
.equ	CAL0	= 0	; Oscillatro Calibration Value Bit 0
.equ	CAL1	= 1	; Oscillatro Calibration Value Bit 1
.equ	CAL2	= 2	; Oscillatro Calibration Value Bit 2
.equ	CAL3	= 3	; Oscillatro Calibration Value Bit 3
.equ	CAL4	= 4	; Oscillatro Calibration Value Bit 4
.equ	CAL5	= 5	; Oscillatro Calibration Value Bit 5
.equ	CAL6	= 6	; Oscillatro Calibration Value Bit 6
.equ	CAL7	= 7	; Oscillatro Calibration Value Bit 7

; CLKPR - Clock Prescale Register
.equ	CLKPS0	= 0	; Clock Prescaler Select Bit 0
.equ	CLKPS1	= 1	; Clock Prescaler Select Bit 1
.equ	CLKPS2	= 2	; Clock Prescaler Select Bit 2
.equ	CLKPS3	= 3	; Clock Prescaler Select Bit 3
.equ	CLKPCE	= 7	; Clock Prescaler Change Enable

; CLKSELR - Clock Selection Register
.equ	CSEL0	= 0	; Clock Source Select bit 0 - CKSEL0 fuse substitution
.equ	CSEL1	= 1	; Clock Source Select bit 1 - CKSEL1 fuse substitution
.equ	CSEL2	= 2	; Clock Source Select bit 2 - CKSEL2 fuse substitution
.equ	CSEL3	= 3	; Clock Source Select bit 3 - CKSEL3 fuse substitution
.equ	CSUT0	= 4	; Clock Start-up Time bit 0 - SUT0 fuse substitution
.equ	CSUT1	= 5	; Clock Start-up Time bit 1 - SUT1 fuse substitution
.equ	COUT	= 6	; Clock Out - CKOUT fuse substitution

; CLKCSR - Clock Control & Status Register
.equ	CLKC0	= 0	; Clock Control bit 0
.equ	CLKC1	= 1	; Clock Control bit 1
.equ	CLKC2	= 2	; Clock Control bit 2
.equ	CLKC3	= 3	; Clock Control bit 3
.equ	CLKRDY	= 4	; Clock Ready Flag
.equ	CLKCCE	= 7	; Clock Control Change Enable

; DWDR - DebugWire data register
.equ	DWDR0	= 0	; 
.equ	DWDR1	= 1	; 
.equ	DWDR2	= 2	; 
.equ	DWDR3	= 3	; 
.equ	DWDR4	= 4	; 
.equ	DWDR5	= 5	; 
.equ	DWDR6	= 6	; 
.equ	DWDR7	= 7	; 

; GPIOR2 - General Purpose IO register 2
.equ	GPIOR20	= 0	; 
.equ	GPIOR21	= 1	; 
.equ	GPIOR22	= 2	; 
.equ	GPIOR23	= 3	; 
.equ	GPIOR24	= 4	; 
.equ	GPIOR25	= 5	; 
.equ	GPIOR26	= 6	; 
.equ	GPIOR27	= 7	; 

; GPIOR1 - General Purpose register 1
.equ	GPIOR10	= 0	; 
.equ	GPIOR11	= 1	; 
.equ	GPIOR12	= 2	; 
.equ	GPIOR13	= 3	; 
.equ	GPIOR14	= 4	; 
.equ	GPIOR15	= 5	; 
.equ	GPIOR16	= 6	; 
.equ	GPIOR17	= 7	; 

; GPIOR0 - General purpose register 0
.equ	GPIOR00	= 0	; 
.equ	GPIOR01	= 1	; 
.equ	GPIOR02	= 2	; 
.equ	GPIOR03	= 3	; 
.equ	GPIOR04	= 4	; 
.equ	GPIOR05	= 5	; 
.equ	GPIOR06	= 6	; 
.equ	GPIOR07	= 7	; 

; PORTCR - General purpose register 0
.equ	PUDA	= 0	; Port-Wise Pull-up Disable Port A
.equ	PUDB	= 2	; Port-Wise Pull-up Disable Port B
.equ	BBMA	= 4	; Break-Before-Make Mode Enable Port A
.equ	BBMB	= 5	; Break-Before-Make Mode Enable Port B



; ***** LOCKSBITS ********************************************************
.equ	LB1	= 0	; Lockbit
.equ	LB2	= 1	; Lockbit


; ***** FUSES ************************************************************
; LOW fuse bits
.equ	CKSEL0	= 0	; Select Clock source
.equ	CKSEL1	= 1	; Select Clock source
.equ	CKSEL2	= 2	; Select Clock source
.equ	CKSEL3	= 3	; Select Clock source
.equ	SUT0	= 4	; Select start-up time
.equ	SUT1	= 5	; Select start-up time
.equ	CKOUT	= 6	; Clock Output Enable
.equ	CKDIV8	= 7	; Divide clock by 8

; HIGH fuse bits
.equ	BODLEVEL0	= 0	; Brown-out Detector trigger level
.equ	BODLEVEL1	= 1	; Brown-out Detector trigger level
.equ	BODLEVEL2	= 2	; Brown-out Detector trigger level
.equ	EESAVE	= 3	; EEPROM memory is preserved through the Chip Erase
.equ	WDTON	= 4	; Watchdog Timer always ON
.equ	SPIEN	= 5	; Enable Serial Program and Data Downloading
.equ	DWEN	= 6	; DebugWIRE Enable
.equ	RSTDISBL	= 7	; External Reset disable

; EXTENDED fuse bits
.equ	SELFPRGEN	= 0	; Self-Programming Enable



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
.equ	NRWW_START_ADDR	= 0x0
.equ	NRWW_STOP_ADDR	= 0x1fff
.equ	RWW_START_ADDR	= 0x0
.equ	RWW_STOP_ADDR	= 0x0
.equ	PAGESIZE	= 64



; ***** INTERRUPT VECTORS ************************************************
.equ	INT0addr	= 0x0002	; External Interrupt Request 0
.equ	INT1addr	= 0x0004	; External Interrupt Request 1
.equ	PCI0addr	= 0x0006	; Pin Change Interrupt Request 0
.equ	PCI1addr	= 0x0008	; Pin Change Interrupt Request 1
.equ	WDTaddr	= 0x000a	; Watchdog Time-Out Interrupt
.equ	ICP1addr	= 0x000c	; Timer/Counter1 Capture Event
.equ	OC1Aaddr	= 0x000e	; Timer/Counter1 Compare Match 1A
.equ	OC1Baddr	= 0x0010	; Timer/Counter1 Compare Match 1B
.equ	OVF1addr	= 0x0012	; Timer/Counter1 Overflow
.equ	OC0Aaddr	= 0x0014	; Timer/Counter0 Compare Match 0A
.equ	OVF0addr	= 0x0016	; Timer/Counter0 Overflow
.equ	LIN_TCaddr	= 0x0018	; LIN Transfer Complete
.equ	LIN_ERRaddr	= 0x001a	; LIN Error
.equ	SPIaddr	= 0x001c	; SPI Serial Transfer Complete
.equ	ADCCaddr	= 0x001e	; ADC Conversion Complete
.equ	ERDYaddr	= 0x0020	; EEPROM Ready
.equ	ACIaddr	= 0x0022	; Analog Comparator
.equ	USI_STARTaddr	= 0x0024	; USI Start
.equ	USI_OVFaddr	= 0x0026	; USI Overflow

.equ	INT_VECTORS_SIZE	= 40	; size in words

#endif  /* _TN167DEF_INC_ */

; ***** END OF FILE ******************************************************
