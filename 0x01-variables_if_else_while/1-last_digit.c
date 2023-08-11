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
        int m;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        m = abs(n % 10);

        if (m > 5)
        {
                printf("Last digit of %d is %d and is greater than 5", n,m);
		
        } 
        else if (m == 0)
        {
                printf("Last digit of %d is %d and is 0",n ,m);
        }
        else
        {
                printf("Last digit of %d is %d and is less than 6 and not 0", n);
        } 
        return (0);
}
