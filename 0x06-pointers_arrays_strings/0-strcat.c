#include "main.h"
#include <string.h>

/**
 * *_strcat - cocatenates two strings
 *
 * @*dest: char type
 * @*src: char type
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
