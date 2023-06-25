#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * description prints numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int line;
	int num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num > 9)
			{
				_putchar(1);
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
