#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: int type pointer
 * @b: int type pointer
 */

void swap_int(int *a, int *b)
{
	int n;

	*a = *b;
	n = *a;
	*b = n;
}
