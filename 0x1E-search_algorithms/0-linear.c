#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an 
 * array of integers using LINEAR search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (j);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			j++;
		}
	}
	return (-1);
}
