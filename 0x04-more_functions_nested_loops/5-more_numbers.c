#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers 0 to 14 ten times.
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
