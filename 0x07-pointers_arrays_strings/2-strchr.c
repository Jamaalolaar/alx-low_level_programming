#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @c: character to be searched
 * @s: pointer pointing to the string
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
