#include "main.h"

/**
 * _puts_recursion - prints a string
 * followed by a newline
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
