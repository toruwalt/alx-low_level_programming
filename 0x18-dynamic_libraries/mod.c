#include  <stdio.h>

/**
 * mod - returns the modulus of 2 numbers
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
