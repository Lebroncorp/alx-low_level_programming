#include <stdio.h>
#include <stdlib.h>

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
	int i = 0;
	int add = 0;
	int argv_value = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			argv_value = atoi(argv[i]);

			if (argv_value >= 0)
			{
				add += argv_value;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%d\n", add);
	}
	return (0);
}
