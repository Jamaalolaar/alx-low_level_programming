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
	int a;

	for (a = (strlen(s) - 1); a >= 0 &&  s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}
}
