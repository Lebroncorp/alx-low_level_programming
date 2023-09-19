#include "main.h"

/**
 * _abs - prints absolute value of an integer
 *
 * Description: divides input by -1 and prints
 * the result.
 * @a: type of int
 *
 * Return: returns 0
 */

int _abs(int n)
{
	int b;

	if (n  < 0)
	{
		b = n / -1;
	}
	else
	{
		b = n;
	}
	return (b);
}
