#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != 0)
		len++;

	array = malloc(sizeof(char) * (len + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		array[i] = str[i];
	}
	array[len] = '\0';
	return (array);
}
