#include "main.h"
#include <string.h>

/**
 *
 */

void puts_half(char *str)
{
	int n;
	int length = strlen(str);

	for (n = (length - 1) / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
