#include "main.h"

/**
 *
 */

void print_line(int n)
{
	int times;
	
	times = n + 1;
	for (n = 0; n < times; n++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
