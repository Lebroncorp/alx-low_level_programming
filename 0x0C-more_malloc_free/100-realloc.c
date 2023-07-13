#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously allocated.
 * @old_size: The size of the allocated space for ptr.
 * @new_size: The size for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr2, *filler;
	unsigned int index;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = ptr;
	mem = malloc(sizeof(*ptr2) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr2++;

	free(ptr);
	return (mem);
}
