#include "main.h"

/**
 * *print_alphabet_x10  - Entry point
 *
 * description: prints lower case letters
 * times ten by looping through a
 * given number of times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alp;
	int num = 0;

	while (num < 10)
	{
		alp = 'a';
		while (alp <= 'z')
		{
			_putchar(alp);
			alp++;
		}
		_putchar('\n');
		num++;
	}
}
