#include <stdio.h>
#include "dog.h"

/**
 *  init_dog -- a function that initialize a variable of type struct dog
 *  @dog:  Location
 *  @name: Name
 *  @age: age
 *  @owner: Owner
 *  Return: 0 always
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
			dog romeo;
	romeo.name = name;
	romeo.age = age;
	romeo.owner = owner;
}
