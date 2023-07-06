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
	int length;

	for (n = 0; s[n] != '\0'; n++)
	{
		length++;
	}


	if (length < 0)
	{
		
	}
	{
	_puts_recursion(&s[length - 1]);
	_putchar(s[n] + '\0');
	}
	_putchar('\n');
}
