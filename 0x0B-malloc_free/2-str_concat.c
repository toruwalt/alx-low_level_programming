#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - write a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: Returns the string
 */

char *str_concat(char *s1, char *s2)
{
	char *d;
	int i, j, lengthA, lengthB;

	lengthA = 0;
	lengthB = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		lengthA++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		lengthB++;
	}
	d = malloc((lengthA + lengthB + 1) * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		d[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		d[lengthA + j] = s2[j];
	}
	return (d);
}
