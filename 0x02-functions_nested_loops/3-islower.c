#include "main.h"

/**
 * _islower - check the code
 *
 * Description: checks for lower class alphabets
 * @c
 * return type int
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
