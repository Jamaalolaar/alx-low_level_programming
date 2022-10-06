#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - works like malloc
 * @b: argument of function
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

