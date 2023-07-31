#include "lists.h"

/**
 * print_listint - prints all elements
 * of a linked list named listint_t.
 *
 * @h: the linked list(listint_t)
 *
 * Return: the number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n",h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
