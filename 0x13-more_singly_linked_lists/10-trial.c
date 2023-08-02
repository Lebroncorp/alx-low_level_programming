#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 *
 * @head: pointer to the first node.
 * @index: is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		head = head->next;
		return (1);
	}
	for ( ; temp != NULL; temp = temp->next)
	{
		if (node < index)
		{
			curr = temp->next;
			temp = temp->next->next;
			free(curr);
			return (1);
		}
		node++;
	}
	if (temp->next == NULL)
		free(temp);
	return (1);
}
