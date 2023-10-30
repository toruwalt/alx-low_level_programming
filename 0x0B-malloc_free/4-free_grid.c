#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - writes a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * @grid: the number of items in array
 * @height: the number of rows in array
 * Return: Returns the string
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
