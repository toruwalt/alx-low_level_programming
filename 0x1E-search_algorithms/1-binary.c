#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted
 * array of integers using binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is found
 */

int binary_search(int *array, size_t size, int value)
{
	int mid_value;
	size_t mid, i;
	size_t low = 0;
	size_t high = size;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching with array: ");
		for (i = low; i < high; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		mid = (high + low) / 2;
		mid_value = array[mid];
		if (mid_value < value)
			low = mid + 1;
		else if (mid_value > value)
			high = mid - 1;
		else
			return (mid_value);
	}
	return (-1);
}
