#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Add number in argument
 * @n: number of items to be added
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(nums, int);
			sum = sum + x;
		}
	}
	printf("\n");
	return (sum);
}
