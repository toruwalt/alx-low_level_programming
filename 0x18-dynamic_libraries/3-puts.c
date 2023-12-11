#include "main.h"
#include <stdio.h>
/**
* _puts - check the length of the code
* @s: Parameter passed
* Return: Always 0.
*/
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
