/**
 * Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * STM32F042/003
 * Blinky with timer.
 */

#include "stm32f0xx_hal.h"

#define LED_GPIO_PIN		GPIO_PIN_1
#define LED_GPIO_PORT		GPIOB
#define LED_GPIO_CLK_ENABLE()	__HAL_RCC_GPIOB_CLK_ENABLE()

#define TIMER			TIM2
#define TIMER_CLK_ENABLE()	__HAL_RCC_TIM2_CLK_ENABLE()
#define TIMER_IRQn		TIM2_IRQn

extern void error_handler(void);
static void SystemClock_Config(void);
static void RCC_Config(void);
static void NVIC_Config(void);
static void GPIO_Config(void);
static void TIM_Config(void);

TIM_HandleTypeDef TimHandle;


int
main(void)
{

	HAL_Init();
	SystemClock_Config();
	RCC_Config();
	NVIC_Config();
	GPIO_Config();
	TIM_Config();

	if (SysTick_Config(SystemCoreClock / 1000)) {
		error_handler();
	}

	while (1);
}

void
HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *handle)
{

	HAL_GPIO_TogglePin(LED_GPIO_PORT, LED_GPIO_PIN);
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

	/* -- Enable Timer clock */
	TIMER_CLK_ENABLE();
}

void
NVIC_Config(void)
{
	  
	/* Set the TIMER priority */
	HAL_NVIC_SetPriority(TIMER_IRQn, 3, 0);

	/* Enable the TIMx global Interrupt */
	HAL_NVIC_EnableIRQ(TIMER_IRQn);
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

void
TIM_Config(void)
{
	
	TimHandle.Instance = TIMER;
	TimHandle.Init.Period = 10000 - 1;
	TimHandle.Init.Prescaler = (uint32_t)(SystemCoreClock / 10000) - 1;
	TimHandle.Init.ClockDivision = 0;
	TimHandle.Init.CounterMode = TIM_COUNTERMODE_UP;
	TimHandle.Init.RepetitionCounter = 0;
	TimHandle.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	if (HAL_TIM_Base_Init(&TimHandle) != HAL_OK) {
		error_handler();
	}

	/* Start the TIM Base generation in interrupt mode */
	if (HAL_TIM_Base_Start_IT(&TimHandle) != HAL_OK) {
		error_handler();
	}	
}

