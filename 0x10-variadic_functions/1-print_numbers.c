#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - Write a function that returns the sum of all its parameters.
 * @separator: A comma that separates input
 * @n: The number of arguments passed
 * Return: The total addition is returned
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		exit(98);
	}
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		printf("%c", *separator);
	}
	printf("\n");
	va_end(args);
}
