#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - a function that reverses a string
 * @s: argument of function.
 * Return: void
 */

void rev_string(char *s)
{
	char p;
	int n = strlen(s) - 1;

	while (s[n] != '\0')
	{
		p = s[n];

		s = p;
		n--;
	}

}
