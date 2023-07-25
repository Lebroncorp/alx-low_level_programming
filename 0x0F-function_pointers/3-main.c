#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: array of argument variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int final;
	int (*op_func)(int, int);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	final = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", final);
	return (0);
}
