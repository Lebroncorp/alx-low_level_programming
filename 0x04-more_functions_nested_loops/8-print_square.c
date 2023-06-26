#include "main.h"

/**
 * print_square - prints squares
 *
 * Description: prints the number of squares given
 * @size: int type
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		_putchar('#');
		for (b = 1; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
