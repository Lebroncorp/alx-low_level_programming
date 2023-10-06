#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int h;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		tmp = ht->array[h];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
