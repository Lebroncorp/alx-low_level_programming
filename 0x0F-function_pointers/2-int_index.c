#include <stdlib.h>

/**
 * int_index - searches for an integer
 *
 * @array: int array
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) == 1)
		{
			return (n);
		}
	}
	return (-1);
}
