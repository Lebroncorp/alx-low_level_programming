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
	int first_num;
	int second_num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			first_num = num / 10;
			second_num = num % 10;
			if (num > 9)
			{
				_putchar(first_num + '0');
				_putchar(second_num + '0');
			}
			else
			{
				_putchar(second_num + '0');
			}
		}
		_putchar('\n');
	}
}
