#include "main.h"
/**
 * create_array - creates an array and initializes it
 * with a character
 * @size: size of array
 * @c: character to intialize array
 * Return: pointer to array if successful, NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * (sizeof(char)));
	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		if (i != size)
			array[i] = c;
		else
			array[i] = '\0';
	}
	return (array);
}
