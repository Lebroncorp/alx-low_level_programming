#include "main.h"
#include <string.h>
/**
 * _strncpy - copies string
 *
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; dest[n] < '\0'; n++)

	dest[n] = src[n];

	strcpy(dest, src);

	return (dest);
}
