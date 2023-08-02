#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index index of a listint_t linked list.
 *
 * @head: pointer or head node
 * @index: is the index of the node that
 * should be deleted. Index starts at 0
 *
 * Return: if it succeeds 1, if it fails -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int node;

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	
	for (node = 0; node < (index - 1); node++)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
	}

	temp = (*head)->next;
	(*head)->next = (*head)->next->next;
	free(temp);
	return (1);
}
