#include <stdio.h>

/**
 * preMain - function that prints before main
 *
 * Description: Apply the constructor attribute
 * to myStartupFun() so that it is executed before main()
 */

void preMain(void) __attribute__ ((constructor));

void preMain(void)
{
	printf
		("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
