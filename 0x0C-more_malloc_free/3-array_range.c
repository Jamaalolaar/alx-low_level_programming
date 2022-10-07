#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: start
 * @max: end
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
	{
		return (0);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	while (i <= (max - min))
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
	free(ptr);
}
