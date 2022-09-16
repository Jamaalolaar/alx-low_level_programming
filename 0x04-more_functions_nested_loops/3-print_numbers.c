#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: always 0.
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
