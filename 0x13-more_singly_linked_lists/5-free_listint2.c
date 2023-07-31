#include "lists.h"

/**
 * free_listint2 - frees the linked list(listint_t)
 *
 * @head: the pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((*head)->next != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
