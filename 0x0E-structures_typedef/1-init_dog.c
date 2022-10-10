#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - initializes struct dog
 * @d: struct dog
 * @name: name pointer
 * @age: age pointer
 * @owner: owner pointer
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = *name;
		d->age = age;
		d->owner = owner;
	}
}
