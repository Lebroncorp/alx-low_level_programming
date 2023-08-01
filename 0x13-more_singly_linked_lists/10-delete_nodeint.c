#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: pointer or head node
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 *
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int n = 0;

	while (*head != NULL)
	{
		if (n == index)
		{
			temp = *head;
			*head = (*head)->next;
			
			free (temp);
			return (1);
		}
		*head = (*head)->next;
		n++;
	}
	return (-1);
}
