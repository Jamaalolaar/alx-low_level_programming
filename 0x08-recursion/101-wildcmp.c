#include "main.h"
#include <stdio.h>
/**
 * wildcmp - checks if two strings are idenical
 * @s1: first string
 * @s2: second string
 * Return: 1 if positive, 0 if negative
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			if (*s2 == '*')
				return (wildcmp(s1, (s2 + 1)) || wildcmp((s1 + 1), s2));
			else
				return (0);
		}
		else if (*s1 == *s2)
			return (wildcmp((s1 + 1), (s2 + 1)));
	}
	else if (*s1 == '\0' && *s2 == '\0')
		return (1)
	return (0);
}
