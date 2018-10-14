/**
 * Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * STM32F042/005
 * Blinky with delay function (Low Level API).
 */


#include "stm32f0xx_hal.h"
#include "stm32f0xx_ll_bus.h"
#include "stm32f0xx_ll_gpio.h"

#define LED_GPIO_PIN		LL_GPIO_PIN_1
#define LED_GPIO_PORT		GPIOB
#define LED_PERIPHERAL		LL_AHB1_GRP1_PERIPH_GPIOB
#define LED_DELAY		(200)

int
main(void)
{

	HAL_Init();
	SystemCoreClockUpdate();

	LL_AHB1_GRP1_EnableClock(LED_PERIPHERAL);
	LL_GPIO_InitTypeDef GPIO_InitStruct;
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_HIGH;
	GPIO_InitStruct.Pull = LL_GPIO_PULL_NO;
	GPIO_InitStruct.Alternate = LL_GPIO_AF_0;
	GPIO_InitStruct.Pin = LED_GPIO_PIN;
	LL_GPIO_Init(LED_GPIO_PORT, &GPIO_InitStruct);

	while (1) {
		LL_GPIO_TogglePin(LED_GPIO_PORT, LED_GPIO_PIN);
		HAL_Delay(1000);
	}
}
