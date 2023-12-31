#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - writes a function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: the number of columns in array
 * @height: the number of rows in array
 * Return: Returns the string
 */

int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	d = (int **) malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = (int *)malloc(width * sizeof(int));

		if (d[i] == NULL)
		{
			free(d);
			for (j = 0; j < height; j++)
			{
				free(d[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}

	return (d);
}
