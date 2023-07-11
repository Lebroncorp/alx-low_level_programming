#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: int type
 * @argv: char type
 *
 * Return: 0 if succesful or no number is passed
 * 1 if numbers that are not digits is passed
 */

int main(int argc, char *argv[])
{
	int n, j, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (n = 1; n < argc; n++)
		{
			ptr = argv[n];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[n]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
