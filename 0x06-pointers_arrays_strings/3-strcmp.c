#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 * positive if s1 > s2
 * negative if s1 < s2
 * zero if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int difference;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
			break;
		i++;
	}
	return (s1 - s2);
}
