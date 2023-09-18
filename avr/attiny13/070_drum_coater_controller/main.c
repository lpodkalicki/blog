/**
 * Copyright (c) 2023, Łukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 * ATtiny13/070
 * Example of "Drum Coater Controler"
 */


#include "ctrl.h"

int
main(void)
{
	ctrl_init();
	ctrl_loop();
}

