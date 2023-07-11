#include <stdio.h>
#include <stdlib.h>

/**
 * isitInteger - checks if s is an integer
 *
 * @c: string to check
 *
 * Return: 0 or 1
 */

int isitInteger(const char *c)
{
	int n = 0;

	while (c[n] != '\0')
	{
		if (c[n] < '0' || c[n] > '9')
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 *
 * @argc: int
 * @argv: pointer to array
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i = 0, num_coin = 0, coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (isitInteger(argv[1]))
	{
		i = atoi(argv[1]);
		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				num_coin++;
			}
			else
			{
				coin++;
			}
		}
	}
	printf("%i\n", num_coin);
	return (0);
}
