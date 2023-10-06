#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int h;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (h = 0; h < ht->size; h++)
	{
		while (ht->array[h] != NULL)
		{
			next = ht->array[h]->next;
			free(ht->array[h]->key);
			free(ht->array[h]->value);
			free(ht->array[h]);
			ht->array[h] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
