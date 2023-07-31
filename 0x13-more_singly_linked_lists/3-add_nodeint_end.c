#include "lists.h"

/**
 * add_nodeint_end - adds a  new node to
 * the end of the linked list
 *
 * @head: the pointer pointint to the first node
 * @n: the value to be given to the integer in the node
 *
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tail;
	listint_t *temp;

	new_tail = malloc(sizeof(listint_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->n = n;

	if (*head == NULL)
	{
		*head = new_tail;
		new_tail->next = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		if (temp->next == NULL)
		{
			temp->next = new_tail;
			new_tail->next = NULL;
		}
	}
	return (new_tail);
}
