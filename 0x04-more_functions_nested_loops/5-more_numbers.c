#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * description prints numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int line = 0;

	while (line < 10)
	{
		int num = 0;

		while (num < 15)
		{
			int first_num;
			int second_num;

			first_num = num / 10;
			second_num = num % 10;

			if (num > 9)
			{
				_putchar(first_num + '0');
				_putchar(second_num + '0');
			}
			else

				_putchar(num + '0');

			num++;
		}
		line++;
		_putchar('\n');
	}
}
