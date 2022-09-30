#include "main.h"
#include <stdio.h>

/**
 * _strlencheck - calculates length of string.
 * @s: string pointer.
 * Return: string length.
 */
int _strlencheck(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlencheck((s + 1)));
	}
	return (0);
}

/**
 * wildcmp - compares two string and checks if
 * they are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 if positive, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	int a = _strlencheck(s1);
	int b = _strlencheck(s2);

	if (a != b)
	{
		return (0);
	}
	else
	{
		if (*s1 != '\0' && *s2 != '\0')
		{
			if (*s1 == *s2)
			{
				return (1 * wildcmp((s1 + 1), (s2 + 1)));
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}

