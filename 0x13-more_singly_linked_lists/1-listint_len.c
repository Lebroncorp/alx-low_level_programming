#include "lists.h"

/**
 * listint_len - returns the number of
 * elements in the linked list listint_t.
 *
 * @h: the linked list, int this particular task
 * the listint_t linked list.
 *
 * Return: nodes which is the variable used to
 * count the number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
