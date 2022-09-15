#include "main.h"

/**
 * print_times_table - prints n times-table starting with 0
 * @n: argument of function
 * return: 0
 */

void print_times_table(int n)
{
	int x, y, prod;

	for (int x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (int y = 1; y <=9; y++)
		{
			prod = x * y;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
				_putchar(prod + '0');
		}
	}
}
