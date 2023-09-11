#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 *  new_dog - a function that initialize a variable of type struct dog
 *  @name: Name
 *  @age: age
 *  @owner: Owner
 *  Return: 0 always
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = strdup(name);

	d->age = age;

	d->owner = strdup(owner);

	return (d);
}
