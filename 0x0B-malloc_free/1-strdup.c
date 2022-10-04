#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: pointer to the copied string.
 */

char *_strdup(char *str)
{
	int index = 0;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
	{
		n++;
	}
	char  *c;

	c = malloc(sizeof(char) * n);

	while (index <= n)
	{
		c[index] = str[index];
		index++;
	}
	return (c);
}
