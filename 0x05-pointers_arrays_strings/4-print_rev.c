#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: argument of function.
 * Return: void.
 */

void print_rev(char *s)
{
	int a;

	for (a = (strlen(s) - 1); s[a] != '\0'; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');
}

