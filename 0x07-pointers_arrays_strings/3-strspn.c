#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char type pointer
 * @accept: char type pointer
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int count = 1;

	for (a = 0; accept[a] != '\0'; a++)
	{
		for (b = 0; s[b] != '\0'; b++)
		{
			if (accept[a] == s[b])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
