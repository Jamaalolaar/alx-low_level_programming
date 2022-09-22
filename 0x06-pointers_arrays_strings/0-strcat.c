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
	int len = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		dest += src[len];
		len++;
	}
	return (dest);
}

	
