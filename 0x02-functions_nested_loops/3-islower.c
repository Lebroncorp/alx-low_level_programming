#include "main.h"

/**
 * _islower - checks for lower case
 * and upper case letters.
 *
 * Description: prints  if
 * for lower case letters or.
 * @c: input of type int
 *
 * return int
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
