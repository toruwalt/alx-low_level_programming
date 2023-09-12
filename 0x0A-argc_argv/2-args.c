#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 * @argc: Number of arguments
 * @argv: List of Arguments
 * Return: 0 always
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
