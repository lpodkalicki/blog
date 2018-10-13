/**
 * Copyright (c) 2018, Lukasz Marcin Podkalicki <lpodkalicki@gmail.com>
 */


void
error_handler()
{

        while(1); // hang on endless loop
}


void
_exit(int status)
{

	while (1) {} /* Make sure we hang here */
}

