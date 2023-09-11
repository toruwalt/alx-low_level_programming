#include <stdio.h>
#include "dog.h"

/**
 *  init_dog -- a function that initialize a variable of type struct dog
 *  @d: Location
 *  @name: Name
 *  @age: age
 *  @owner: Owner
 *  Return: 0 always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
