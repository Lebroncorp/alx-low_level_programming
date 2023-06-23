#include "main.h"

/**
 * _isupper - checks for upper case letters.
 *
 * Description:loops through the ascii table
 * putchar 1 if it is upper case letters or
 * putchars 0.
 * @c: input type int
 *
 * Return: int
 */

int _isupper(int c)
{
	char letters = 'c';

	for (c >= 65 && c <= 90)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}
