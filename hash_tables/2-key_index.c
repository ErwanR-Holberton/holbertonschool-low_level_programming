#include "hash_tables.h"
/**
 * key_index - get the index of a key
 * @size: The size of the hash table
 * @key: string containing the key
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
