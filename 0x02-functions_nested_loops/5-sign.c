#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Description: prints using the if loop,
 * + if the number is greater than 0,
 *  prints 0 if the number is equaul to
 *   zero or else prints -
 *   @n: type int
 *
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
