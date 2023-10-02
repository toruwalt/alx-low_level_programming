#include <stdio.h>

/**
 * main - prints the name of the function
 * @argc: The number of elements
 * @argv: The array of elements
 * Return: Always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int i;
	int count = 0;

	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%i\n", count);
	return (0);
}
