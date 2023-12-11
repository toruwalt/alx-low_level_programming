#include "main.h"
#include <stdio.h>

/**
 * _strspn - Returns a number of bytes in the initial segment of
 * string 's' which only consist of bytes from 'accept'.
 * @s: The string to be searched through
 * @accept: The string phrase to be counted
 * Return: A positive integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
				return (k);
			}
		}
	}
	return (k);
}
