#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print according to number of diagonals.
 *
 * @n: Number of times line is printed
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}	
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
