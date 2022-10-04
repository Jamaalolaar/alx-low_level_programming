#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array.
 * @c: character to replace the first character
 * Return: pointer n.
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (n == NULL)
		{
			return (NULL);
		}
		n[i] = c;
		i++;
	}
	return (n);
}
