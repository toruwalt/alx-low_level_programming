#include "main.h"
#include <stdio.h>
/**
* print_rev - check the length of the code
* @s: Parameter passed
* Return: Always 0.
*/
void print_rev(char *s)
{
	int i, k, j;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i++;
	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
