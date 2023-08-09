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
	hash_node_t *newnode = malloc(sizeof(hash_node_t)), *node_pointer;

	if (ht == NULL || key == NULL || newnode == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, key) == 0)
		{
			free(node_pointer->value);
			node_pointer->value = strdup((char *)value);
			free(newnode);
			if (node_pointer->key == NULL)
			{
				return (0);
			}
			return (1);
		}
		node_pointer = node_pointer->next;
	}
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
