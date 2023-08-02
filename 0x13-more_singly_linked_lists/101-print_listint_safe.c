#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the head node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int nodes = 0;

	if (head == NULL)
		return (98);
	for ( ; head != NULL; head = head->next)
	{
		printf("%d\n",head->n);
		nodes++;
	}
	return (nodes);
}
