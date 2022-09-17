#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square followed by a new line
 * @size: int used as argument of function.
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
