/**
 * Copyright (c) 2018, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#ifndef	_PWM_H_
#define	_PWM_H_

#include <stdint.h>

#define	PWM_CHAN_OFF		(0)
#define PWM_CHAN_ON		(1)

void pwm_init(void);
void pwm_start(void);
void pwm_stop(void);
int pwm_channel_configure(uint8_t id, uint8_t pin, uint8_t duty, uint8_t status);
int pwm_channel_start(uint8_t id);
int pwm_channel_stop(uint8_t id);
int pwm_channel_set_duty(uint8_t id, uint8_t duty);

#endif	/* !_PWM_H_ */

