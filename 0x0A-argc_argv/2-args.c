#include <stdio.h>

/**
 * main - prints the name of the function
 * @argc: The number of elements
 * @argv: The array of elements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
