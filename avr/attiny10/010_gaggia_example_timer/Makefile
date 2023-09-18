# --
# Copyright (c) 2023, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
# --

MCU=attiny10
BYTE0=0xFF
LOCK=0xFF
F_CPU=8000000
CC=avr-gcc
LD=avr-ld
OBJCOPY=avr-objcopy
SIZE=avr-size
AVRDUDE=avrdude
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -I.
TARGET=main

SRCS = main.c

all:
	${CC} ${CFLAGS} -o ${TARGET}.o ${SRCS}
	${LD} -o ${TARGET}.elf ${TARGET}.o -g -mavrtiny
	${OBJCOPY} -j .text -j .data -O ihex ${TARGET}.o ${TARGET}.hex
	${SIZE} -C --mcu=${MCU} ${TARGET}.elf

flash:
	${AVRDUDE} -p ${MCU} -c usbasp -B10 -B10 -U flash:w:${TARGET}.hex:i -F -P usb

fuse:
	$(AVRDUDE) -p ${MCU} -c usbasp -B10 -U fuse:w:${BYTE0}:m -U lock:w:${LOCK}:m

clean:
	rm -f *.c~ *.h~ *.o *.elf *.hex
