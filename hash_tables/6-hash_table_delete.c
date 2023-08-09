#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node_pointer, *node_save_next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node_pointer = ht->array[i];
		while (node_pointer != NULL)
		{
			node_save_next = node_pointer->next;
			free(node_pointer->key);
			free(node_pointer->value);
			free(node_pointer);
			node_pointer = node_save_next;
		}
	}
	free(ht->array);
	free(ht);
}
