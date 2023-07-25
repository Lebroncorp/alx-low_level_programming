#include <stdlib.h>
#include <stdio.h>

void print_opcodes(int opcde);

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(atoi(argv[1]));
	return (0);
}

/**
 * print_opcodes - prints opcodes
 *
 * @opcde: int argument
 *
 * Return: nothing
 */

void print_opcodes(int opcde)
{
	int n;
	unsigned char *ptr;

	ptr = (unsigned char *)print_opcodes;
	for (n = 0; n < opcde; n++)
		printf("%02x ", ptr[n]);
	printf("\n");
}
