#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * abs - returns the absolutee value
 *
 * @n: Parameter input
 *
 * Return: 1 if +ve, 0 if equal to 0, -1 if -ve.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (abs(n));
	}
	
	else
	{
		return (n);
	}
}
