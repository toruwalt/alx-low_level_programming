#include "main.h"
#include <stdio.h>
/**
* rev_string - code that prints the reverse of an array string
* @s: Parameter passed
*/
void rev_string(char *s)
{
	int i, j;

	i = 10;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
