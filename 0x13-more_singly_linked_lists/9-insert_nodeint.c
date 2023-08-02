#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: is the index of the list where the new node should be added
 * @n: the number n inside the node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	listint_t *prev;
	unsigned int node = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	prev = *head;
	new_node->next = NULL;
	if (*head == NULL)
	{
		if (idx == 0)
		{
			*head = new_node;
			return (new_node);
		}
		else
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = temp;
		temp = new_node;
		return (new_node);
	}
	for ( ; temp->next != NULL; temp = temp->next)
	{
		if (node < idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		node++;
	}

	if (temp->next == NULL)
	{
		new_node = temp->next;
	}
	return (new_node);
}
