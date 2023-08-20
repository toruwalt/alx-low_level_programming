#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - This is the entry point
 * @n: - the variable entered
 * if - the conditional statement
 * else if - the second conitional statement
 * else - the last conditional statement
 * Return: 0 to be true
 */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);

	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
