#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies a memory area
 * @dest: first entry
 * @src: second entry
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
