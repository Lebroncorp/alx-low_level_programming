#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * positive_or_negative - prints the sign of int
 *
 * Description: i used a source code alx provided from the
 * topic 0x01-variables_if_else_while to formulate this code
 * that gives this code which displays is a number(integer)
 * is positive or negative, working on on coding skills.
 *
 * @n: int type
 *
 * return: 0
 */

/* betty style doc for function main goes there */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
