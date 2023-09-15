#include "lists.h"

/**
 * sum_dlistint - sums all the data in given list
 * @head: head pointer of list
 *
 * Return: sum of data in list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
