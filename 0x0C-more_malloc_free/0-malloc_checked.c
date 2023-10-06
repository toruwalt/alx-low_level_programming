#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: The size of the memory allocated
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
	{
		exit(98);
	}
	else
	{
		return (d);
	}
}
