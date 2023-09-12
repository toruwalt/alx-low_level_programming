#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  print_dog - A function that prints a struct dog.
 *  @d: The memmory  storage
 *  Return: 0 always
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
