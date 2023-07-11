#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space
 * which contains copy of the string given as parameter.
 *
 * @str: string
 *
 * Return: duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;
	int n, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		duplicate[n] = str[n];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
