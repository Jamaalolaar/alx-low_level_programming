#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings but with an 'n'
 * number of bytes from the second input.
 * @dest: first input
 * @src: second input
 * @n: limiting number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}

