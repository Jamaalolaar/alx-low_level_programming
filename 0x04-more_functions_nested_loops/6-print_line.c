#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a straight line in the terminal.
 * @n: int used as argument of function.
 * return: void
 */

void print_line(int n)
{
	int v;

	for (v = 0; v <= n; v++)
	{
		if (v != n)
		{
			_putchar('_');
		}
		else
			_putchar('\n');
	}
}
