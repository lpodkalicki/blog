# --
# Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
# --

MCU=attiny85
FUSE_L=0xE1
FUSE_H=0xDD
F_CPU=12000000
CC=avr-gcc
LD=avr-ld
OBJCOPY=avr-objcopy
SIZE=avr-size
AVRDUDE=avrdude
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -I. -Iusbdrv -DDEBUG_LEVEL=0
TARGET=main

VUSB = usbdrv/usbdrv.c usbdrv/usbdrvasm.S
SRCS = ${VUSB} main.c random.c

all:
	${CC} ${CFLAGS} -o ${TARGET}.o ${SRCS}
	${LD} -o ${TARGET}.elf ${TARGET}.o
	${OBJCOPY} -j .text -j .data -O ihex ${TARGET}.o ${TARGET}.hex
	${SIZE} -C --mcu=${MCU} ${TARGET}.elf

flash:
	${AVRDUDE} -p ${MCU} -c usbasp -B10 -U flash:w:${TARGET}.hex:i -F -P usb

fuse:
	$(AVRDUDE) -p ${MCU} -c usbasp -B10 -U hfuse:w:${FUSE_H}:m -U lfuse:w:${FUSE_L}:m

clean:
	rm -f *.c~ *.h~ *.o *.elf *.hex
