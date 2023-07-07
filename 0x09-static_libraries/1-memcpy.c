#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: char type pointer
 * @src: char type pointer
 * @n: unsigned int type
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int w;

	for (w = 0; w < n; w++)
	{
		*(dest + w) = *(src + w);
	}
	return (dest);
}
