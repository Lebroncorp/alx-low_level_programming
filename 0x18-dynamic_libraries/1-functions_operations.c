#include "lists.h"

/**
 * add - addition of 2 integers
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int add(int a, int b)
{
	int c;

	c = a + b;
      return (c);
}

/**
 * sub - subtraction of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int sub(int a, int b)
{
	int c;
	c = a - b;
      return (c);
}

/**
 * mul - multiplies 2 numbers
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int mul(int a, int b)
{
      return (a * b);
}

/**
 * div - divides 1st number by 2nd number
 * @a: 1st number
 * @b: 2nd number
 * Return: result
 */

int div(int a, int b)
{
      return (a / b);
}

/**
 * mod - modulos which leftover after division
 * @a: 1st number to be divided
 * @b: 2nd number that divides
 * Return: result
 */

int mod(int a, int b)
{
      return (a % b);
}
