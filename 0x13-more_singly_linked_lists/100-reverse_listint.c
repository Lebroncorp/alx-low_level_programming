#include "lists.h"

/**
 * reverse_listint - reverses a list
 *
 * @head: pointer to head pointer of list
 *
 * Return: a pointer to the first
 * node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *current, *next = NULL;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;
	return (*head);
}
