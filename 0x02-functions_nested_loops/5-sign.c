#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks if it is a sign
 *
 * @n: Parameter input
 *
 * Return: 1 if +ve, 0 if equal to 0, -1 if -ve.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
