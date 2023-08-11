#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the entry point
 * if - the conditional statement
 * else if - the second conitional statement
 * else - the last conditional statement
 * Return: 0 to be true
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);

	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
