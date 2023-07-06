#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
	_putchar('\n');
	}
	_putchar(s[n]);
	n++;
}
