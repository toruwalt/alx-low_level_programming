#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars, and initializes it with a specific char.
 * @size - The size of the array
 * @c: The character
 * Return: A character is returned
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	d = malloc(sizeof(char) * size);
	if (d == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		d[i] = c;
	}
	return (d);
}
