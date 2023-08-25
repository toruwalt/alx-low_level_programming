#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an arrays
 * @a: The array to be reversed
 * @n: The number of elements in the array
 * Return: Returns the number of characters that are the same
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int *start = a;
	int *end = a + (n - 1);

	for (i = 0; *a != '\0'; i++)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
		_putchar(a[i]);
	}
}
