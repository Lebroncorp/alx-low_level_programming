#include "main.h"

/**
 * _pow_recursion - returns the value
 *  of x raised to the value of y
 *
 *  @x: int type
 *  @y: int type
 *
 *  Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}