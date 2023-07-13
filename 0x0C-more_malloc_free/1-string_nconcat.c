#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - find length of a string
 *
 * @s: string
 *
 * Return: size
 */

unsigned int _strlen(char *s)
{
	unsigned int size = 0;
	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2 to be used
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	char *m;
	
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	if (n < _strlen(s2))
	{
	m = malloc(_strlen(s1) + n * sizeof(char) + 1);
	}
	else
	{
		m = malloc(_strlen(s1) + _strlen(s2) + 1);
	}
	if (m == 0)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		m[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0' && b < n; a++, b++)
	{
		m[a] = s2[b];
	}
	m[a] = '\0';
	return (m);
}
