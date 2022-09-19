#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string and a new line.
 * @str: argument of function.
 * Return: void.
 */

void puts_half(char *str)
{
	int half, a;
	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	half = a / 2;

	if (a % 2 == 1)
	{
		half++;
	}

	while (half < a)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
	
}
