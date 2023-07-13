#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/*
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
