#include "main.h"
#include <stdio.h>
/**
* swap_int - check the code
* @a: Parameter passed
* @b: Parameter passed
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
