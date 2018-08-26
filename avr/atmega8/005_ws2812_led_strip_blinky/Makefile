# --
# Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
# --

MCU=atmega8
FUSE_L=0xFF
FUSE_H=0xD9
F_CPU=16000000
CC=avr-gcc
LD=avr-ld
OBJCOPY=avr-objcopy
SIZE=avr-size
AVRDUDE=avrdude
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -I.
TARGET=main

SRCS = main.c light_ws2812.c

all:
	${CC} ${CFLAGS} -o ${TARGET}.o ${SRCS}
	${LD} -o ${TARGET}.elf ${TARGET}.o
	${OBJCOPY} -j .text -j .data -O ihex ${TARGET}.o ${TARGET}.hex
	${SIZE} -C --mcu=${MCU} ${TARGET}.elf

flash:
	${AVRDUDE} -p ${MCU} -c usbasp -U flash:w:${TARGET}.hex:i -F -P usb

fuse:
	$(AVRDUDE) -p ${MCU} -c usbasp -U hfuse:w:${FUSE_H}:m -U lfuse:w:${FUSE_L}:m

clean:
	rm -f *.c~ *.o *.elf *.hex
