#include "main.h"
#include <string.h>

/**
 * puts_half - prints half
 *
 * @str: type char
 */

void puts_half(char *str)
{
	int a;
	int n;
	int length = strlen(str);

	if (length % 2 != 0)
	{
		n = (length - 1) / 2 + 1;
	}
	else
	{
		n = length / 2;
	}
	for (a = n; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
