#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: argument of function.
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	putchar(10);
}
