#include "main.h"

/**
 * times_table - prints the 9 times-table
 * from zer.
 * Return: 0
 */

void times_table(void)
{
	int x, n, product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			product = n * x;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			
			_putchar((production % 10) + '0');
		}
		_putchar('\n');
	}
}
