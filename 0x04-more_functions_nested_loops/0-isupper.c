#include "main.h"

/**
 * _isupper - checks for upper case letters.
 *
 * Description: prints 1 for upper case
 * letters or prints 0.
 * @c: input type int
 *
 * Return: int
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
