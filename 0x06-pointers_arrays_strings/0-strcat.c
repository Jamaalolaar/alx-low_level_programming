#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @dest: first input
 * @src: second input
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest [i++])
	{
		len++;
	}

	while (src[i])
	{
		dest[len++] = src[i];
		i++;
	}
	return (dest);
}
