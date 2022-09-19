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
	int rev;

	for (rev = (strlen(s) - 1); s[rev] != '\0'; rev--)
	{
		_putchar(s[rev]);
	}
}
