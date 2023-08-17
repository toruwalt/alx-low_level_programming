#include "main.h"
#include <stdio.h>

/**
 * print_line - print according to number of lines.
 *
 * @n: Number of times line is printed
 * Return: 0 always
 */
void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
