/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <stdint.h>
#include <stdio.h>
#include <memory.h>
#include <esp/gpio.h>
#include <FreeRTOS.h>
#include <semphr.h>
#include "config.h"
#include "error.h"
#include "pwm.h"

typedef struct s_pwm_channel {
	uint8_t pin;
	uint8_t duty;
	uint8_t status;
} pwm_channel_t;

typedef struct s_pwm_config {
	pwm_channel_t channels[PWM_CHAN_NUM_MAX];
} pwm_config_t;

static pwm_config_t pwm_config;
static volatile uint8_t counter = 0;

static pwm_channel_t *
pwm_get_channel(uint8_t id)
{

	return &pwm_config.channels[id];
}

void
pwm_init(void)
{

	memset(&pwm_config, 0, sizeof(pwm_config_t));
	counter = 0;
}

void
pwm_start(void)
{

	for (uint8_t id = 0; id < PWM_CHAN_NUM_MAX; ++id) {
		pwm_channel_start(id);
	}
}

void
pwm_stop(void)
{	
	
	for (uint8_t id = 0; id < PWM_CHAN_NUM_MAX; ++id) {
		pwm_channel_stop(id);
	}
}

int
pwm_channel_configure(uint8_t id, uint8_t pin, uint8_t duty, uint8_t status)
{
	pwm_channel_t *channel;
	
	if (!(channel = pwm_get_channel(id))) {
		return ERR_PARAM;
	}

	channel->pin = pin;
	channel->duty = duty;
	channel->status = status;		

	gpio_enable(pin, GPIO_OUTPUT);
	gpio_write(pin, 0);

	return ERR_OK;
}

int
pwm_channel_start(uint8_t id)
{
	pwm_channel_t *channel;
	
	if (!(channel = pwm_get_channel(id))) {
		return ERR_PARAM;
	}

	channel->status = PWM_CHAN_ON;		

	return ERR_OK;
}

int
pwm_channel_stop(uint8_t id)
{
	pwm_channel_t *channel;
	
	if (!(channel = pwm_get_channel(id))) {
		return ERR_PARAM;
	}

	channel->status = PWM_CHAN_OFF;
	gpio_write(channel->pin, 0);

	return ERR_OK;
}

int
pwm_channel_set_duty(uint8_t id, uint8_t duty)
{
	pwm_channel_t *channel;
	
	if (!(channel = pwm_get_channel(id))) {
		return ERR_PARAM;
	}

	channel->duty = duty;		

	return ERR_OK;
}

void
pwm_interrupt_handler(void)
{
	const pwm_channel_t *channel;

	for (uint8_t id = 0; id < PWM_CHAN_NUM_MAX; ++id) {
		channel = &pwm_config.channels[id];
		if (channel->status == PWM_CHAN_ON) {
			if (counter == 0 && channel->duty > 0) {
				gpio_write(channel->pin, 1);
			} else if (channel->duty == counter) {
				gpio_write(channel->pin, 0);
			}
		}
	}

	counter++;
}

