#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hashtable
 * @size: The number of items to be put into HashTable
 * Return: The hashtable is returned
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = malloc(sizeof(hash_table_t));

	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_table_t));
	if (hashTable == NULL)
	{
		free(hashTable);
		return NULL;
	}
	return hashTable;
}
