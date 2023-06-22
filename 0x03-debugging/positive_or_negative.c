#include "main.h"

/**
 * positive_or_negative - prints the sign of an integer
 *
 * Description: prints positive
 * for numbers greater than zero,
 * prints zero for number 0 and
 * prints negative for numbers less than zero.
 *
 * @i: type int
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
