#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: Size to be allocated
 * Return: - 0 always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int j, i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		d = malloc(sizeof(char) * (len1 + len2 + 1));
		if (d == NULL)
		{
			d = "";
		}
		for (i = 0; i < len1; i++)
		{
			d[i] =s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			d[i] = s2[j];
			i++;
		}
	}
	else
	{
		d = malloc(sizeof(char) * (len1 + n + 1));
		if (d == NULL)
		{
			d = "";
		}
		for (i = 0; i < len1; i++)
		{
			d[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			d[i] = s2[j];
			i++;
		}
	}
	d[i] = '\0';
	return (d);
}
