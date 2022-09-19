#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src,
 * copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: argument of function.
 * @src: argument of function.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(desr + i) = '\0';
	return (dest);
}
