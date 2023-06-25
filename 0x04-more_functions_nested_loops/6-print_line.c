#include "main.h"

/**
 * print_line - prints line
 *
 * Description: prints line the number of times asked
 * @n: int type
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
