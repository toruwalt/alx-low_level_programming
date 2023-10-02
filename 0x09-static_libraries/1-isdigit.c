#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if it is a number
 *
 * @c: The value that will be passed
 *
 * Return: 1 if true, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
