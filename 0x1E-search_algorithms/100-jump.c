#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted
 * array of integers using JUMP search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	size_t jump = sqrt(size);
	size_t low = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i = (i + jump))
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value > array[i])
			low = i;
		else if (value == array[i])
			return (i);
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, low);
			break;
		}
	}

	for (j = low; j < size; j++)
	{
		if (value == array[j])
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			return (j);
		}
	}
	return (-1);
}
