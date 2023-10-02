#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check it is an alphabet
 *
 * @c: Parameter input
 *
 * Return: 1 if a letter no matter the case, else return 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
