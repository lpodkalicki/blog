/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */
 
#ifndef _CTRL_H_
#define _CTRL_H_

#include <stdint.h>

void ctrl_init();
void ctrl_start();
void ctrl_stop();
void ctrl_loop(void);
uint8_t ctrl_command(void);
void ctrl_blink(uint8_t n, uint16_t time_on, uint16_t time_off);
void ctrl_program(void);

#endif /* !_CTRL_H_ */
