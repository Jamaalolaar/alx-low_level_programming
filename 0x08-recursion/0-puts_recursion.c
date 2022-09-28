#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line with recursion.
 * @s: string pointer
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i = 0;
	
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		_puts_recursion(*(s(i + 1)));
	}
	_putchar('\n');
}
