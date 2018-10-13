# -
# Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
# -

TARGET=main
DEVICE=STM32F042x6
STM32_LIB_DIR=../../STM32Cube_FW_F0_V1.9.0
LINKER_SCRIPT_FILE=../STM32F042x6_FLASH.ld
STARTUP_FILE=$(STM32_LIB_DIR)/Drivers/CMSIS/Device/ST/STM32F0xx/Source/Templates/gcc/startup_stm32f042x6.s

CC=arm-none-eabi-gcc
LD=arm-none-eabi-gcc
AR=arm-none-eabi-ar
AS=arm-none-eabi-as
CP=arm-none-eabi-objcopy
OD=arm-none-eabi-objdump
SE=arm-none-eabi-size
SF=st-flash

INC_DIRS = . \
	$(STM32_LIB_DIR)/Drivers/STM32F0xx_HAL_Driver/Inc \
	$(STM32_LIB_DIR)/Drivers/CMSIS/Device/ST/STM32F0xx/Include \
	$(STM32_LIB_DIR)/Drivers/CMSIS/Include
INCLUDE = $(addprefix -I,$(INC_DIRS))

CFLAGS  = -std=gnu99 -g -O2 -Wall -T $(LINKER_SCRIPT_FILE) \
	-mlittle-endian -mthumb -mthumb-interwork -mcpu=cortex-m0 \
	-fsingle-precision-constant -Wdouble-promotion \
	-D$(DEVICE) -DUSE_FULL_LL_DRIVER


STM32_LIB_SRC_DIR = $(STM32_LIB_DIR)/Drivers/STM32F0xx_HAL_Driver/Src
vpath %.c $(STM32_LIB_SRC_DIR)

SRCS =  main.c \
	syscalls.c \
	stm32f0xx_it.c \
	system_stm32f0xx.c


SRCS += \
	stm32f0xx_hal.c \
	stm32f0xx_hal_rcc.c \
	stm32f0xx_hal_gpio.c \
	stm32f0xx_hal_cortex.c \
	stm32f0xx_ll_gpio.c \
	$(STARTUP_FILE)

.PHONY: $(TARGET)

$(TARGET): $(TARGET).elf

$(TARGET).elf: $(SRCS)
	$(CC) $(INCLUDE) $(CFLAGS) $^ -o $@
	$(CP) -O ihex $(TARGET).elf $(TARGET).hex
	$(CP) -O binary $(TARGET).elf $(TARGET).bin
	$(SE) $(TARGET).hex

clean:
	rm -f *.o $(TARGET).elf $(TARGET).hex $(TARGET).bin

flash:
	$(SF) write $(TARGET).bin 0x8000000
