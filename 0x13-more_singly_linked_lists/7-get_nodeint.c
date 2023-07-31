#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head:the pointer to the head node
 * @index: is the index of the node, starting at 0
 *
 * Return:the nth node if it exist or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		head = head->next;
		
		if (n == index)
		{
			return (head);
		}
		n++
	}
	return (NULL);
}
