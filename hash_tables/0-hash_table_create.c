#include "hash_tables.h"
/**
 * *hash_table_create - Create hash table data structure
 * @size: The size of the hash table
 *
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head = malloc(sizeof(hash_table_t));

	if (head == NULL)
		return (0);

	head->size = size;
	head->array = malloc(sizeof(hash_node_t*) * size);

	if (head->array == NULL)
	{
		free(head);
		return (0);
	}

	return (head);
}
