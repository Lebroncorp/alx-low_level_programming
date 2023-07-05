#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two
 * diagonals of square matrix
 *
 * @a: int type pointer
 * @size: int type variable
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i == size - 1 - j) {
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("Sum of the main diagonal: %d\n", sum1);
	printf("Sum of the secondary diagonal: %d\n", sum2);
}
