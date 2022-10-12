#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of arrays
 * @cmp: pointer to function to be carried out on  the searched pointer
 * Return: index if positive, -1 if negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (!cmp || !array)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}

