#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a list
 * @h: head pointer
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *start;
	int num = 0;

	start = (void *)h;
	while (start != NULL)
	{
		num++;
		start = start->next;
	}
	return (num);
}
