#include "hash_tables.h"
/**
 * *hash_table_get - get the value associated with a given key
 * @ht: the pointer to the hash table
 * @key: string containing the key
 *
 * Return: value (success) or 0 (failure)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node_pointer;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, key) == 0)
			return (node_pointer->value);
		node_pointer = node_pointer->next;
	}
	return (0);
}
