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
	int i;
	int jump = sqrt(size);
	int low = 0;
	int n = size;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < n; i = (i + jump))
	{
		if (value > array[i])
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			low = i;
		}
		else
		{
			printf("Value found between indexes [%d] and [%d]\n", i, low);
			for (i = low; i < n; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
	}
	return (-1);
}
