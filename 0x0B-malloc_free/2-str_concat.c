#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * getlen - gets a string length.
 * @s: pointer to string
 * Return: n.
 */

int getlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly formed string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b, sum, i;

	a = getlen(s1);
	b = getlen(s2);
	sum = a + b;
	c = malloc(sizeof(char) * (sum + 1));

	if (s1 != NULL && s2 != NULL)
	{
		for (i = 0; i < a; i++)
		{
			c[i] = s1[i];
		}
		for (i = 0; b < sum; i++, b++)
		{
			c[b] = s2[i];
		}
		c[sum] = '\0';
	}
	else if (s1 == NULL)
	{
		for (i = 0; i <= b; i++)
		{
			c[i] = s2[i];
		}
	}
	else if (s2 == NULL)
	{
		for (i = 0; i <= a; i++)
		{
			c[i] = s1[i];
		}
	}
	else
		return (NULL);
	return (c);
	free(c);
}
