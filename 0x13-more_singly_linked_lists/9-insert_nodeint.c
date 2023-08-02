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
	listint_t *temp;
	unsigned int node = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		if (idx == 0)
		{
			*head = new_node;
			new_node->next = NULL;
			return (new_node);
		}
		else
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for ( ; *head != NULL; *head = (*head)->next)
	{
		if (node < idx)
		{
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		node++;
	}
	temp = *head;
	if (temp->next == NULL)
	{
		new_node = temp->next;
		new_node->next = NULL;
	}
	return (new_node);
}
