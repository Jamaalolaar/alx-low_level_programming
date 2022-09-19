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
	int a;
	int n = strlen(str) / 2;
	if (n % 2 == 0)
	{
		for (a = n; a <= strlen(str) - 1 && str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}

	if (n % 2 != 0)
	{
		for (a = n; a <= strlen(str) - 1 && str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
				 
}


