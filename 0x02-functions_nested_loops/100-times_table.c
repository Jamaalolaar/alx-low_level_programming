#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times-table starting with 0
 * @n: argument of function
 * return: 0
 */

int print_times_table(int n)
{
	int x, y, prod;

	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		
		for (y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');
			prod = x * y;
			printf("%d", prod);
		}
		_putchar('\n');
	}
	return (0);
}
