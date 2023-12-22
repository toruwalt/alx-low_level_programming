#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hashtable
 * @size: The number of items to be put into HashTable
 * Return: The hashtable is returned
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));

	if (hashTable == NULL)
	{
		return (NULL);
	}
	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t));
	if (hashTable->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hashTable->array[i] = NULL;
	}
	return (hashTable);
}
