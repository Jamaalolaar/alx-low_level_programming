#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly formed string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b, i;

	if (s1 == NULL)
	{
		s1 == "";
	}
	if (s2 == NULL)
	{
		s2 == "";
	}
	for (a = 0; s1[a] || s2[a]; a++)
	{
		i++;
	}

	c = malloc(sizeof(char) * (i));
	if (c == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
	{
		c[b++] = s1[a];
	}
	for (a = 0; s2[a]; a++)
	{
		c[b++] = s2[a];
	}
	return (c);
}
