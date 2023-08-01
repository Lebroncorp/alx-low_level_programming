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
	listint_t *temp;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (*head != NULL)
	{
		if (n < index)
		{
			temp = (*head)->next;
			(*head)->next = (*head)->next->next;
			free(temp);
			return (1);
		}
		*head = (*head)->next;
		n++;
	}
	return (-1);
}
