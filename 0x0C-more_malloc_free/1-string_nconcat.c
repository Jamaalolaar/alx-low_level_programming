#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first entry
 * @s2: second entry
 * @n: number of bytes from s2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc((i + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b < (i + n); b++)
	{
		ptr[i + b] = s2[b];
	}
	ptr[i + b] = '\0';
	return (ptr);
	free(ptr);
}
