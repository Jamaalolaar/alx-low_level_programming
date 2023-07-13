#include "main.h"
/**
 * _getlen - gets the length of a string
 * @str: string
 * Return: length of string
 */
int _getlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *array;
	int n = _getlen(str), i = 0;

	array = malloc(i * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= n; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
