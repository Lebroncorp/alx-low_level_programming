#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 *
 * Description: reverses a string and does not
 * print to stdout
 * @s: string input
 *
 */

void rev_string(char *s)
{
	int i, j, count = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0, j = count - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
