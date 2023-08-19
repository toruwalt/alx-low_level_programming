#include "main.h"
#include <stdio.h>

/**
 *main: Run the FizzBuzz Program
 *
 *Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
                        {
                                printf("FizzBuzz ");
                        }
                        else
                        {
                                printf("Buzz ");
                        }
		}
		else
		{
			printf("%i ", i);
		}
	}
	return (0);
}
