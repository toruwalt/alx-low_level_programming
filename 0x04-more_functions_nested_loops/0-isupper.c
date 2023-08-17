#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if letter is uppercase
 *
 * @c: The value that will be passed
 *
 * Return: 1 if true, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
