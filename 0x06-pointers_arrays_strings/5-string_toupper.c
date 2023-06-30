#include "main.h"

/**
 * string_toupper - changes lower
 *  case letteres to upper case
 *
 *  @str: char type
 *  Return: str char type
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
