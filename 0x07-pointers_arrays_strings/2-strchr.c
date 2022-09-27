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
	int a = 0;
	
	while (s[a] != '\0')
	{
		if (c == *(s + a))
		{
			break;
		}
		a--;
	}
	if (c != *(s + a))
	{
		return (0);
	}
	else
	{
		return (s);
	}
}
