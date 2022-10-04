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
	int a, b, sum;
	int i = 0;

	a = getlen(s1);
	b = getlen(s2);
	sum = a + b;
	c = malloc(sizeof(char) * (sum + 1));

	if (s1 == NULL || s2 == NULL || c == NULL)
	{
		return (NULL);
	}

	while (i < a)
	{
		c[i] = s1[i];
		i++;
	}
	i = 0;
	while (b < sum)
	{
		c[b] = s2[i];
		b++;
		i++;
	}
	c[sum] = '\0';
	return (c);
	free(c);
}
