#include "main.h"

/**
 * _puts - prints strings
 * @str: char tpye pointer
 */

void _puts(char *str)
{
	int a;

	for (a = 0; a != \0; a++)
		_puts(str[a]);
}
