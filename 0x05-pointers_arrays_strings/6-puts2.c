#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: argument of function.
 */

void puts2(char *str)
{
	for (int a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
		_putchar('\n');
	}
}
