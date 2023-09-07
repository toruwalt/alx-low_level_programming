#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: Size to be allocated
 * Return: - 0 always
 */

void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
	{
		exit(98);
	}
	return (d);
}
