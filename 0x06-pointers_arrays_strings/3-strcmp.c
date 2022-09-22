#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first entry
 * @s2: second entry
 * Return: positive if s1 > s2; negative if s1 < s2;
 * zero if s1 == s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, comp = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == '\0')
		{
			comp = s1[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			comp = s1[i];
			break;
		}
		else if (s2[i] != s1[i])
		{
			comp = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (comp);
}
