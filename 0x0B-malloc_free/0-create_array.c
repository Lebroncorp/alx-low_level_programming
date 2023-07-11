#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * and initializes it with a specific char.
 *
 * @size: unsigned int type
 * @c: char type
 *
 * Return: ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (ptr == 0)
	{
	return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}
