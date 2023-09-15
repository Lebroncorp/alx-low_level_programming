#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;
	dlistint_t *start;

	start = (void *)h;
	while (start != NULL)
	{
		printf("%d\n", start->n);
		num++;
		start = start->next;
	}
	return (num);
}
