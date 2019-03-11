# --
# Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
# --

MCU=attiny13
FUSE_L=0x6A
FUSE_H=0xFF
F_CPU=1200000
AS=avra
AVRDUDE=avrdude
TARGET=main
ASFLAGS=-I ../../asm/include

SRCS = main.asm

all:
	${AS} ${ASFLAGS} -o ${TARGET} ${SRCS}

flash:
	${AVRDUDE} -p ${MCU} -c usbasp -B10 -U flash:w:${TARGET}.hex:i -F -P usb

fuse:
	$(AVRDUDE) -p ${MCU} -c usbasp -B10 -U hfuse:w:${FUSE_H}:m -U lfuse:w:${FUSE_L}:m

clean:
	rm -f *.asm~ *.hex *.obj *.cof
