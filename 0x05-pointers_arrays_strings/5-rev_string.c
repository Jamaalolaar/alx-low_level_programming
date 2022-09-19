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
	int a, b, c, rev;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	c = a - 1;

	while (b < c)
	{
		rev = s[b];
		s[b] = s[c];
		s[c] = rev;
		b++;
		c--;
	}
}
