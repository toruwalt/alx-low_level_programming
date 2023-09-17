#include "variadic_functions.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_all - Write a function that prints anything.
 * @format: The format of the input
 * Return: The total addition is returned
 */
void print_all(const char * const format, ...)
{
	int n, m, x;
	char *z, *sep = ", ";
	va_list args;
	va_start(args, format);

	n = strlen(format);
	for (m = 0; m < n; m++)
	{
		switch (format[m])
		{
			case 'c': {
					  printf("%c", va_arg(args, int));
					  break;
				  }
			case 'i': {
					  printf("%s%i", sep, x = va_arg(args, int));
					  break;
				  }
			case 'f': {printf("%s%f", sep, va_arg(args, double));
				break;
				  }
			case 's': {
					  z = va_arg(args, char *);
					  if (z == NULL)
					  {
						  printf("(nil)");
					  }
					  else
					  {
						  printf("%s%s", sep, z);
					  }
				  }
			default:
				  continue;
		}
	}
	va_end(args);
	printf("\n");
}
