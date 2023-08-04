#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: the string containing the binary number to be converted to unsigned int
 *
 * Return: the converted number or 0 if there is one or
 * more chars in the string b that is not 0 or 1, 0 if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b), add = 0, i, power, mul = 1;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		mul = 1;
		for (power = 0 ; power < len - i; power++)
		{
			if (power == 0)
				mul = mul * 1;
			else
				mul = mul * 2;
		}
		add = (b[i] - '0') * mul;
		sum = sum + add;
	}
	return (sum);
}
