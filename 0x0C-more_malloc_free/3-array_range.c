#include "main.h"

int *array_range(int min, int max)
{
	int *array;
	int i, size = max - min + 1;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++, a++)
	{
		array[i] = min + i;
	}
	array[size] = max;
	return (array);
}
