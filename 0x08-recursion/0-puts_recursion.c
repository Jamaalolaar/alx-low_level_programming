#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line with recursion.
 * @s: string pointer
 * Return: void.
 */

void _puts_recursion(char *s)
{
	char *p[] = *s;
	
	int i = 0;
	
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		_puts_recursion(p[i + 1]);
	}
	_putchar('\n');
}
