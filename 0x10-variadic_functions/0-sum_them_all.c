#include <stdio.h>
#include <stdarg.h>

/**
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
