/**
 * Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * STM32F042/001
 * Blinky with delay function.
 */

#include "stm32f0xx_hal.h"

#define LED_GPIO_PIN		GPIO_PIN_1
#define LED_GPIO_PORT		GPIOB
#define LED_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOB_CLK_ENABLE()
#define LED_DELAY		(200)

extern void error_handler(void);
static void SystemClock_Config(void);
static void RCC_Config(void);
void GPIO_Config(void);

int
main(void)
{

	HAL_Init();
	SystemClock_Config();
	RCC_Config();
	GPIO_Config();

	if (SysTick_Config(SystemCoreClock / 1000)) {
		error_handler();
	}

	while (1) {
		HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_GPIO_PIN);
		HAL_Delay(LED_DELAY);
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

	/* -- Enable GPIO port clock -- */
	LED_GPIO_CLK_ENABLE();
}

void
GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;

	/* -- Configure the GPIO of LED pins -- */
	GPIO_InitStruct.Pin = LED_GPIO_PIN;
	GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	GPIO_InitStruct.Pull = GPIO_NOPULL;
	GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);
}
