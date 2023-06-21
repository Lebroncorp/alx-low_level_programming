#include "main.h"

/**
 * *print_alphabet - function that prints lower case letters
 *
 * Description: prints lower case letters
 *  by looping through the lower case alphabets
 *  using the ascii code
 *
 * Return: void
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
		_putchar('\n');
}
