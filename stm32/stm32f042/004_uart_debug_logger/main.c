/**
 * Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * STM32F042/004
 * UART Debug Logger.
 */

#include <string.h>
#include "stm32f0xx_hal.h"

#define LOGGER_UART				USART2
#define LOGGER_UART_RCC_CLK_ENABLE()		__HAL_RCC_USART2_CLK_ENABLE()
#define LOGGER_UART_RX_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOA_CLK_ENABLE()
#define LOGGER_UART_TX_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOA_CLK_ENABLE()
#define LOGGER_UART_FORCE_RESET()		__HAL_RCC_USART2_FORCE_RESET()
#define LOGGER_UART_RELEASE_RESET()		__HAL_RCC_USART2_RELEASE_RESET()
#define LOGGER_UART_TX_PIN			GPIO_PIN_2
#define LOGGER_UART_TX_GPIO_PORT		GPIOA
#define LOGGER_UART_TX_AF			GPIO_AF1_USART2
#define LOGGER_UART_RX_PIN			GPIO_PIN_3
#define LOGGER_UART_RX_GPIO_PORT		GPIOA
#define LOGGER_UART_RX_AF			GPIO_AF1_USART2
#define LOGGER_BAUDRATE				(115200)

extern void error_handler(void);
static void SystemClock_Config(void);
static void RCC_Config(void);
void GPIO_Config(void);
void UART_Config(void);

UART_HandleTypeDef Logger_UART_Handle;

static void
log_message(const char *message)
{

	HAL_UART_Transmit(&Logger_UART_Handle, (uint8_t*)message, strlen(message), 512);
}

int
main(void)
{

	HAL_Init();
	SystemClock_Config();
	RCC_Config();
	GPIO_Config();
	UART_Config();

	if (SysTick_Config(SystemCoreClock / 1000)) {
		error_handler();
	}

	while (1) {
		log_message("hello :)\n");
		HAL_Delay(1000);
	}
}

void
SystemClock_Config(void)
{
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* No HSE Oscillator on Nucleo, Activate PLL with HSI as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_NONE;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
	RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
	RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct)!= HAL_OK) {
		error_handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1)!= HAL_OK) {
		error_handler();
	}
}


void
RCC_Config(void)
{

	/* -- Enable GPIO clocks for Logger UART -- */
	LOGGER_UART_RX_GPIO_CLK_ENABLE();
        LOGGER_UART_TX_GPIO_CLK_ENABLE();
        LOGGER_UART_RCC_CLK_ENABLE();
}

void
GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	/* -- Configure the GPIO pins for Logger UART -- */
	GPIO_InitStruct.Pin = LOGGER_UART_TX_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	GPIO_InitStruct.Alternate = LOGGER_UART_TX_AF;
	HAL_GPIO_Init(LOGGER_UART_TX_GPIO_PORT, &GPIO_InitStruct);
	GPIO_InitStruct.Pin = LOGGER_UART_RX_PIN;
	GPIO_InitStruct.Alternate = LOGGER_UART_RX_AF;
	HAL_GPIO_Init(LOGGER_UART_RX_GPIO_PORT, &GPIO_InitStruct);
}

void
UART_Config(void)
{

	/* -- Configure Logger UART interface -- */
	Logger_UART_Handle.Instance = LOGGER_UART;
	Logger_UART_Handle.Init.BaudRate = LOGGER_BAUDRATE;
	Logger_UART_Handle.Init.WordLength = UART_WORDLENGTH_8B;
	Logger_UART_Handle.Init.StopBits = UART_STOPBITS_1;
	Logger_UART_Handle.Init.Parity = UART_PARITY_NONE;
	Logger_UART_Handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	Logger_UART_Handle.Init.Mode = UART_MODE_TX;
	Logger_UART_Handle.Init.OverSampling = UART_OVERSAMPLING_16;

	if (HAL_UART_Init(&Logger_UART_Handle) != HAL_OK) {
		error_handler();
	}
}
