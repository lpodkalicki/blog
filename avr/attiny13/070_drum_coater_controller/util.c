/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */

#include <util/delay.h>
#include "util.h"


void sleep_ms(uint16_t ms)
{
	while (ms--) _delay_ms(1);
}
