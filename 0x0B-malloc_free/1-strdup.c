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
	unsigned int index = 0;
	unsigned int n = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{

		while (str[n])
		{
			n++;
		}

		c = malloc(sizeof(char) * n);
		if (c == NULL)
		{
			return (NULL);
		}

		while (index <= n)
		{
			c[index] = str[index];
			index++;
		}
		return (c);
		free(c);
	}
}
