#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - cocatenates two strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: concat_str
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index;
	int concat_index = 0;
	int length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
	{
		length++;
	}
	concat_str = malloc(sizeof(char) * length);

	if (concat_str == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		concat_str[concat_index++] = s1[index];
	}
	for (index = 0; s2[index]; index++)
	{
		concat_str[concat_index++] = s2[index];
	}

	return (concat_str);
}
