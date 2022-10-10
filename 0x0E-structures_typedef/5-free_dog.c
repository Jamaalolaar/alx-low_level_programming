#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - frees dog
 * @d: dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
