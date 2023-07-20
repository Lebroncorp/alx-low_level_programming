#include <stdlib.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: int array
 * @size: size of array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int n;

	if (array == NULL || action == NULL)
		return;
	for (n = 0; n < (int)size; n++)
		action(array[n]);
}
