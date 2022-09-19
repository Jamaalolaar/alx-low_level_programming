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
	int a, b;
	char rev;
	a = 0;

	while (*(s + a) != 0)
	{
		str[a] = *(s + a);
		a++;
	}
	a--;
	b = 0;

	while (b < 0)
	{
		rev = *(s + a);
		*(s + a) = *(s + b);
		*(s + b) = rev;
		a--;
	}
}
