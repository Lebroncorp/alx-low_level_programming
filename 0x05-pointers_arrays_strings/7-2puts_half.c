#include "main.h"
#include <string.h>

/**
 *
 */

void puts_half(char *str)
{
	int n;
	int length = strlen(str);

	for (n = (length - 1) / 2; n++; str[n] != '\0')
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
