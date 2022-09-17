#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line in terminal.
 * @n: int used as argument of function
 * Return: void
 */

void print_diagonal(int n)
{
	int b;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 1; b <= n; b++)
		{
			for (c = 1; c < n; c++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
