#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 * @argc: Number of arguments
 * @argv: List of Arguments
 * Return: 0 always
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int j;
	j  = argc - 1;
	printf("%d\n", j);
	return (0);
}
