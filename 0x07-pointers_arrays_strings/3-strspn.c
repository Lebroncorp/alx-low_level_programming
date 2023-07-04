#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: given string char type pointer
 * @accept: given substring char type pointer
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	char *a;
	unsigned int count = 0;
	int isAcceptable;

	while (*s)
	{
		isAcceptable = 0;

		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				isAcceptable = 1;
				break;
			}
		}
		if (!isAcceptable)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
