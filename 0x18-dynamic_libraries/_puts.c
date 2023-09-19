#include "main.h"

/**
 * _puts - prints strings
 * @str: char tpye pointer
 */

void _puts(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
