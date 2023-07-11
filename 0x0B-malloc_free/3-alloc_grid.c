#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: int type
 * @height: int type
 *
 * Return: TwoD
 */

int **alloc_grid(int width, int height)
{
	int **TwoD;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	TwoD = malloc(sizeof(int *) * height);

	if (TwoD == NULL)
	{
		return (NULL);
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		TwoD[height_index] = malloc(sizeof(int) * width);

		if (TwoD[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
			{
				free(TwoD[height_index]);
			}
			free(TwoD);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			TwoD[height_index][width_index] = 0;
	}

	return (TwoD);
}
