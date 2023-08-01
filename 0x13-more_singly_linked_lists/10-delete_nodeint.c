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
	listint_t *temp2;
	unsigned int n = 0;

	while (*head != NULL)
	{
		if (n < index)
		{
			temp = *head;
			*head = (*head)->next;
			temp2 = *head;
			*head = (*head)->next;
			temp->next = *head;
			*head = temp;
			free(temp2);
			return (1);
		}
		*head = (*head)->next;
		n++;
	}
	return (-1);
}
