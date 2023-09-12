#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - The main function
 * @argc: Number of arguments
 * @argv: List of Arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i, j;

	j = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				j = j + atoi(argv[i]);
			}
		}
		printf("%d\n", j);
	}
	return (0);
}
