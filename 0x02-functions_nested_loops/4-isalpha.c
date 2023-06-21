#include "main.h"

/**
 * _isalpha - checks for alphabets
 *
 * Description:prints lower and upper
 *  case letters by looping through
 *  their ascii code.
 * @c: input of type int
 *
 * Return: int
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
