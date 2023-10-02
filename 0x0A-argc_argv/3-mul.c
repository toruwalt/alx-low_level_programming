#include <stdio.h>
#include <stdlib.h>

/**
 * main - The main function
 * @argc: Number of arguments
 * @argv: List of Arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 1;
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = j * atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	return (0);
}
