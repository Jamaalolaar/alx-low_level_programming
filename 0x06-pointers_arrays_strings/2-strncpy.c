#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: first entry; string to be copied.
 * @src; second entry
 * @n: maximum number of bytes to be copied.
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}

