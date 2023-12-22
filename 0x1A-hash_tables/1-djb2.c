#include "hash_tables.h"
/**
 * hash_djb2 - Function that returns the hash of each item in hashtable
 * @str: The character inputted
 * Return: The hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
