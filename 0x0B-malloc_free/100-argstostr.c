#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string
 *             arguments separated by a new line in the string.
 *
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, num, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			size++;
		}
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	num = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
		{
			str[num++] = av[arg][byte];
		}

		str[num++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
