#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - writes a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: checks the size
 * @c: the string
 * Return: Returns the string
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	d = (char *)malloc(size * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}
