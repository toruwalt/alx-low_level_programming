#include "hash_tables.h"
/**
 * key_index - A function that gives you the index of a key.
 * @key: The key to be searched for
 * @size: The size of the hashTable
 * Return: The value of returned
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}

