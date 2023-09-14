#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * @n: The number of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		sum = sum + x;
	}
	return (sum);
}
