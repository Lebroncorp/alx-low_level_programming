#include "main.h"
#include <string.h>

/**
 * print_rev - prints string backwards
 *
 * @s: type character
 */

void print_rev(char *s)
{
	int a;
	int length;

	length = strlen(s);

	for (a = length; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
