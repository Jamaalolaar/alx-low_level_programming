#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates a memory using malloc
 * @b: memory to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (p);
}
