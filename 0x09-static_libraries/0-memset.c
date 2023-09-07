#include "main.h"
#include <stdio.h>

/**
 * _memset - This print fills the first 'n' bytes
 *of the memory area pointed to by 's' with the constant byte 'b'
 * @s: The array to be populated
 * @n: The number of times it is populated
 * @b: The character to populated with
 * Return: 0 always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
