#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse with a new line.
 * @s: pointer to the string
 * stringlength - gets the size of the string
 * @s: pointer to the string
 * Return: void.
 */

int stringlength(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
void _print_rev_recursion(char *s)
{
	int n = stringlength(*s);

	if (n == 0)
	{
		_putchar(*(s + n));
		_putchar('\n');
		return;
	}

	_putchar(*(s + n));
	_print_rev_recursion(*(s + (n - 1)));
}
