#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 *
 * @min: size of the array
 * @max: char to initialize
 *
 * Return: pointer to the array initialized or NULL
 */

int *array_range(int min, int max)
{
	int *m;
	int n;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (m == 0)
		return (NULL);
	for (n = 0; min + n <= max; n++)
		m[n] = min + n;
	return (m);
}
