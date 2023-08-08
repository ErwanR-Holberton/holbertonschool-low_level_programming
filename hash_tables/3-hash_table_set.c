#include "hash_tables.h"
/**
 * hash_table_set - add an element to the table
 * @ht: the pointer to the hash table
 * @key: string containing the key
 * @value: string containing the value
 *
 * Return: 1 (success) or 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *newnode = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || newnode == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	newnode->key = strdup((char *)key);
		if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	newnode->value = strdup((char *)value);
	if (newnode->value == NULL)
	{
		free(newnode->value);
		free(newnode);
		return (0);
	}
	ht->array[index] = newnode;
	return (1);
}
