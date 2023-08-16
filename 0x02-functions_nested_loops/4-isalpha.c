#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 1 if lowercase, else return 0.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
	    return (1);
    }
    else
    {
	    return (0);
    }
}
