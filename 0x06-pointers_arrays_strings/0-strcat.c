#include "main.h"
#include <stdio.h>

/**
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;
	j =  0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	_putchar('\n');
	return (dest);
}
