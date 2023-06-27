#include "main.h"
#include <string.h>
/**
 *
 */

void puts2(char *str)
{
	int a;
	int length = strlen(str);

	for (a = 0; a < length; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
