#include "hash_tables.h"
/**
 * *shash_table_create - Create a sorted hash table data structure
 * @size: The size of the hash table
 *
 * Return: A pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int i;
	shash_table_t *head = malloc(sizeof(shash_table_t));

	if (head == NULL)
		return (0);

	head->size = size;
	head->shead = NULL;
	head->stail = NULL;
	head->array = malloc(sizeof(shash_node_t *) * size);

	if (head->array == NULL)
	{
		free(head);
		return (0);
	}
	for (i = 0; i < size; i++)
		head->array[i] = 0;

	return (head);
}
/**
 * shash_table_set - add an element to the table
 * @ht: the pointer to the hash table
 * @key: string containing the key
 * @value: string containing the value
 *
 * Return: 1 (success) or 0 (failure)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	int index;
	shash_node_t *newnode = malloc(sizeof(shash_node_t)), *node_pointer;

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
	node_pointer = ht->shead;
	if (ht->shead == NULL)
	{
		ht->shead = newnode;
		ht->stail = newnode;
	}
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, newnode->key) > 0)
		{ /* if 1st one is after 2nd one in alphabet*/
			newnode->sprev = node_pointer->sprev;
			newnode->snext = node_pointer;
			node_pointer->sprev = newnode;
			if (newnode->sprev == NULL)
				ht->shead = newnode;
			else
				newnode->sprev->snext = newnode;
			return (1);
		}
		else if (node_pointer->snext == NULL)
		{
			newnode->snext = node_pointer->snext;
			newnode->sprev = node_pointer;
			node_pointer->snext = newnode;
			ht->stail = newnode;
			return (1);
		}
		node_pointer = node_pointer->snext;
	}
	return (1);
}
/**
 * *shash_table_get - get the value associated with a given key
 * @ht: the pointer to the hash table
 * @key: string containing the key
 *
 * Return: value (success) or 0 (failure)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *node_pointer;

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
/**
 * shash_table_print - print the sorted hash table
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node_pointer;

	if (ht == NULL)
		return;
	printf("{");
	node_pointer = ht->shead;
	while (node_pointer != NULL)
	{
		printf("'%s': '%s'", node_pointer->key, node_pointer->value);
		if (node_pointer->snext != NULL)
			printf(", ");
		node_pointer = node_pointer->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print the sorted hash table in reverse
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node_pointer;

	if (ht == NULL)
		return;
	printf("{");
	node_pointer = ht->stail;
	while (node_pointer != NULL)
	{
		printf("'%s': '%s'", node_pointer->key, node_pointer->value);
		if (node_pointer->sprev != NULL)
			printf(", ");
		node_pointer = node_pointer->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free the hash table
 * @ht: the pointer to the hash table
 *
 * Return: NOTHING
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node_pointer, *node_save_next;

	if (ht == NULL)
		return;

	node_pointer = ht->shead;
	while (node_pointer != NULL)
	{
		node_save_next = node_pointer->next;
		free(node_pointer->key);
		free(node_pointer->value);
		free(node_pointer);
		node_pointer = node_save_next;
	}
	free(ht->array);
	free(ht);
}
