#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the string
 * Return: Returns the string
 */

char *_strdup(char *str)
{
	char *d;
	char *p;
	unsigned int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = 0;
	p = str;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = p;

	d = malloc((length + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		d[i] = *str;
		str++;
	}
	return (d);
}
