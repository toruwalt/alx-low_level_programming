#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - A function that frees dogs.
 * @d: The memory space
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
