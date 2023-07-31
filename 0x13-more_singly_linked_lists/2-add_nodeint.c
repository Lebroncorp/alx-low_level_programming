#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the
 * linked list in this task the linked list is(listint_t)
 *
 * @head: the head pointer pointing to the
 * first element/node of the linked list
 *
 * @n: the int value to be assigned
 * in the new node or element.
 *
 * Return: the address of the
 * new element or node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	if (*head == NULL)
	{
		*head = new_head;
		new_head->next = NULL;
	}
	else
	{
		new_head->next = *head;
		*head = new_head;
	}
	return (new_head);
}
