# Project settings
set(PROJECT_NAME "blinky")
set(STM32_MCU_FAMILY "STM32F0xx")
set(STM32_MCU_LINE "STM32F042x6")

# ToolChain settings
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR ARM)

if(MINGW OR CYGWIN OR WIN32)
    set(UTIL_SEARCH_CMD where)
elseif(UNIX OR APPLE)
    set(UTIL_SEARCH_CMD which)
endif()

set(TOOLCHAIN_PREFIX "arm-none-eabi-")
execute_process(
	COMMAND ${UTIL_SEARCH_CMD} ${TOOLCHAIN_PREFIX}gcc
	OUTPUT_VARIABLE BINUTILS_PATH
	OUTPUT_STRIP_TRAILING_WHITESPACE
)

get_filename_component(ARM_TOOLCHAIN_DIR ${BINUTILS_PATH} DIRECTORY)

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)
set(CMAKE_C_COMPILER ${TOOLCHAIN_PREFIX}gcc)
set(CMAKE_ASM_COMPILER ${CMAKE_C_COMPILER})
set(CMAKE_CXX_COMPILER ${TOOLCHAIN_PREFIX}g++)
set(CMAKE_OBJCOPY ${ARM_TOOLCHAIN_DIR}/${TOOLCHAIN_PREFIX}objcopy CACHE INTERNAL "objcopy tool")
set(CMAKE_SIZE_UTIL ${ARM_TOOLCHAIN_DIR}/${TOOLCHAIN_PREFIX}size CACHE INTERNAL "size tool")

set(STM32_LINKER_SCRIPT "${CMAKE_SOURCE_DIR}/../${STM32_MCU_LINE}_FLASH.ld")
set(COMMON_FLAGS "-mcpu=cortex-m0 -mthumb -mthumb-interwork -fsingle-precision-constant -Wdouble-promotion -g -O2 -Wall -fno-common -fmessage-length=0")
set(CMAKE_CXX_FLAGS_INIT "${COMMON_FLAGS} -std=c++11")
set(CMAKE_C_FLAGS_INIT "${COMMON_FLAGS} -std=gnu99")
set(CMAKE_EXE_LINKER_FLAGS_INIT "-Wl,-gc-sections,-M=binary.map -T ${STM32_LINKER_SCRIPT}")

add_definitions(-D${STM32_MCU_LINE})
add_definitions(-DUSE_HAL_LIBRARY)

project(${PROJECT_NAME} C ASM)
cmake_minimum_required(VERSION 3.5.0)

# STM32Cube
set(STM32CUBE_DIR "${CMAKE_SOURCE_DIR}/../../STM32Cube_FW_F0_V1.9.0")
set(STM32CUBE_HAL_DIR ${STM32CUBE_DIR}/Drivers/STM32F0xx_HAL_Driver/Src)
set(STM32CUBE_SOURCES
	${STM32CUBE_HAL_DIR}/stm32f0xx_hal.c
	${STM32CUBE_HAL_DIR}/stm32f0xx_hal_rcc.c
	${STM32CUBE_HAL_DIR}/stm32f0xx_hal_gpio.c
	${STM32CUBE_HAL_DIR}/stm32f0xx_hal_cortex.c
)

string(TOLOWER "${STM32_MCU_FAMILY}" STM32_MCU_FAMILY_L)
string(TOLOWER "${STM32_MCU_LINE}" STM32_MCU_LINE_L)
add_library(STM32CUBE_CMSIS
	${STM32CUBE_DIR}/Drivers/CMSIS/Device/ST/STM32F0xx/Source/Templates/system_${STM32_MCU_FAMILY_L}.c
	${STM32CUBE_DIR}/Drivers/CMSIS/Device/ST/STM32F0xx/Source/Templates/gcc/startup_${STM32_MCU_LINE_L}.s
)

include_directories(${STM32CUBE_DIR}/Drivers/STM32F0xx_HAL_Driver/Inc)
include_directories(${STM32CUBE_DIR}/Drivers/CMSIS/Device/ST/STM32F0xx/Include)
include_directories(${STM32CUBE_DIR}/Drivers/CMSIS/Include)

# Program
file(GLOB_RECURSE PROGRAM_SOURCES "${CMAKE_SOURCE_DIR}/src/*.c")
include_directories("src")

add_executable(${PROJECT_NAME}.elf ${PROGRAM_SOURCES} ${STM32CUBE_SOURCES})
target_link_libraries(${PROJECT_NAME}.elf STM32CUBE_CMSIS)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Map=${PROJECT_SOURCE_DIR}/build/${PROJECT_NAME}.map")
set(HEX_FILE ${PROJECT_SOURCE_DIR}/build/${PROJECT_NAME}.hex)
set(BIN_FILE ${PROJECT_SOURCE_DIR}/build/${PROJECT_NAME}.bin)

# Generating BIN/HEX files
add_custom_command(TARGET ${PROJECT_NAME}.elf POST_BUILD
        COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${PROJECT_NAME}.elf> ${HEX_FILE}
        COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${PROJECT_NAME}.elf> ${BIN_FILE}
        COMMENT "Building ${HEX_FILE} \nBuilding ${BIN_FILE}"
)

# Flash command
set(ST_FLASH "st-flash")
add_custom_target(flash
	COMMAND ${ST_FLASH} write ${BIN_FILE} 0x8000000
	DEPENDS ${PROJECT_NAME}.elf
	COMMENT "Flashing device ${STM32_MCU_LINE}"
)
