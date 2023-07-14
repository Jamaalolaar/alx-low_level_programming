#include "main.h"
/**
 * _call0c - allocates memory to an array
 * @nmemb: number of elements
 * @size: size of data type
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (i < nmemb)
	{
		*((char *)(ptr) + i) = 0;
		i++;
	}
	return (ptr);
}
