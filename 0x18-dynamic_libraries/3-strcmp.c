#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares 2 arrays
 * @s1: WHere array is copied to
 * @s2: where array is copied from
 * Return: Returns the number of characters that are the same
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			count++;
		}
	}
	s1++;
	s2++;
	while (*s1 != '\0')
	{
		count++;
		s1++;
	}
	while (*s2 != '\0')
	{
		count++;
		s2++;
	}
	return (count);
}
