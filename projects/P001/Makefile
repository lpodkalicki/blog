# --
# Copyright (c) 2015, Lukasz Marcin Podkalicki <lukasz@podkalicki.com>
# --

MCU=attiny13
F_CPU=1200000
CC=avr-gcc
OBJCOPY=avr-objcopy
AVRDUDE=avrdude
CFLAGS=-std=c99 -Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -I.

PROJECT_SRC = \
	main.c 
	
all:
	${CC} ${CFLAGS} -o main.o ${PROJECT_SRC}
	${OBJCOPY} -j .text -j .data -O ihex main.o main.hex	

flash:
	${AVRDUDE} -p ${MCU} -c usbasp -U flash:w:main.hex:i -F -P usb

clean:
	rm -f *.o *.hex
