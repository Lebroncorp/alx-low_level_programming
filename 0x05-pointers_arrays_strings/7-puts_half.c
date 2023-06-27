#include "main.h"
#include <string.h>

/**
 *
 */

void puts_half(char *str)
{
	int n;
	int length = strlen(str);

	n = length / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');

}
