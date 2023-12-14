#include  <stdio.h>

/**
 * add - Adds 2 numbers together
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts 2 numbers together
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies 2 numbers together
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides 2 numbers together
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - Returns the modulus of 2 numbers
 * @a: The first number
 * @b: The second number
 * Return: The computative answer
 */

int mod(int a, int b)
{
	return (a % b);
}
