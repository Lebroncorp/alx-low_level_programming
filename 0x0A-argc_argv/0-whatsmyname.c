#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: int type
 * @argv: char typr pointer
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
