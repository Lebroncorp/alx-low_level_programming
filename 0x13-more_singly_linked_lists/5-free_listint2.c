#include "lists.h"

/**
 * free_listint2 - frees the linked list(listint_t)
 *
 * @head: the pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	temp = (*head)->next;
	
	while (temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
}
