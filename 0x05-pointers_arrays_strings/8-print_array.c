#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array -  prints n elements of an array of integers, followed by a new line.
 * @a: argument of function.
 * @n: argument of function.
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n-1)
		{
			_putchar(a[i] + '0');
			_putchar(' ');
		}
		else
			_putchar(a[i] + '0');
	}
	_putchar('\n');
}
	
