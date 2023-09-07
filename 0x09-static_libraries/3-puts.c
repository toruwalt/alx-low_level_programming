#include "main.h"
#include <stdio.h>
/**
* _puts - check the length of the code
* @str: Parameter passed
* Return: Always 0.
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
