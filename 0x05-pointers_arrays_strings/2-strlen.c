#include "main.h"
#include <stdio.h>
/**
* _strlen - check the length of the code
* @s: Parameter passed
* Return: Always 0.
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
