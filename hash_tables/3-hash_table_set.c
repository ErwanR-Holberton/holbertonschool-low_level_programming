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
	int index = key_index((unsigned char *)key, ht->size);

	if (ht == NULL || key == NULL)
		return (0);

	ht->array[index] = malloc(sizeof(hash_node_t));
	if (ht->array[index] == NULL)
		return (0);
	ht->array[index]->key = (char *)key;
	ht->array[index]->next = NULL;
	ht->array[index]->value = strdup((char *)value);
	if (ht->array[index]->value == NULL)
		return (0);
	return (1);
}
