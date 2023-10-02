#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to first display of the character c in the
 * @s: The string to be searched through
 * @c: The string to be searched
 * Return: 0 always
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
