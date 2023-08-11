#include <stdio.h>
/**
 * main - The is the function where all codes run
 * Return: it has to return 0 else error
 */
int main(void)
{
	printf("Size of a char: %li byte(s)", sizeof(char));
	printf("Size of an int: %li byte(s)", sizeof(int));
	printf("Size of a long int: %li byte(s)", sizeof(long int));
	printf("Size of a long long int: %li byte(s)", sizeof(long long int));
	printf("Size of a float: %li byte(s)", sizeof(float));
	return (0);
}
