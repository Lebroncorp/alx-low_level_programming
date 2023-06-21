#include "main.h"

/**
 * *main - Entry point
 * Description: prints _putchar
 * Return: Always 0 (success)
 */

int main(void)
{
	char *alp = "_putchar";
	int num = 0;

	while (alp[num] != '\0')
	{
	_putchar(alp[num]);
	num++;
	}
	_putchar('\n');
	return (0);
}
