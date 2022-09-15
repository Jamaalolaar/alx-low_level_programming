#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times-table starting with 0
 * @n: argument of function
 * return: 0
 */

void print_times_table(int n)
{
	int x, y, prod;

	for (int x = 0; x <= n; x++)
	{
		_putchar('0');
		
		for (int y = 1; y <= n; y++)
		{
			_putchar(',');
			_putchar(' ');
			
			prod = x * y;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
			}
			else
				_putchar(' ');
			
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
