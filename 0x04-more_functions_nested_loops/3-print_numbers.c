#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Description: prints numbers 0 to 9
 */

void print_numbers(void)
{
	{
		int b = 0;

		while (b < 10)
		{
			_putchar('0' + b);
			b++;
		}
	_putchar('\n');
	}
}
