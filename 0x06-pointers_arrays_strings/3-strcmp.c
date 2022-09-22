s#include "main.h"
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
	int i = 0, difference = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == '\0')
		{
			difference == s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			difference = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			difference = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (difference);
}
