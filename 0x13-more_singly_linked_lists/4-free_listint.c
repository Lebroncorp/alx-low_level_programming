#include "lists.h"

/**
 * free_listint - frees a linked list(listint_t)
 *
 * @head: the pointer at the beginning of the
 * linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;


	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
