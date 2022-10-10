#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
