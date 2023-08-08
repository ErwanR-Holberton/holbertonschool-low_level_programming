#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, did_print = 0;
	hash_node_t *node_pointer;

	if (ht == NULL)
		return ;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node_pointer = ht->array[i];
		while (node_pointer != NULL)
		{
			printf("'%s': '%s', ", node_pointer->key, node_pointer->value);
			node_pointer = node_pointer->next;
			did_print = 1;
		}
	}
	if (did_print)
		printf("%c%c", 8, 8);
	printf("}\n");
}
