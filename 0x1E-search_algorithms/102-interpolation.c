#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a
 * sorted array of integers using INTERPOLATION search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index where value is found
 */

int interpolation_search(int *array, size_t size, int value)
{
	int xyz;
	size_t pos;
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		xyz = (double)(high - low)
		pos = low + (((xyz / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if ((array[pos]) == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] == value)
			high = pos - 1;
	}
	return (-1);
}
