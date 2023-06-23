#include "main.h"

/**
 * _isdigit - checks a digit
 *
 * Description: returns 1 if
 *  its a digit otherwise 0
 *  @c: input type int
 *
 * Return: int
 */

int _isdigit(int c)
{
	if (c >= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
