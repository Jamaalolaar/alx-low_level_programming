#include "main.h"

/**
 * times_table - prints the 9 times-table
 * from zer.
 * Return: 0
 */

void times_table(void)
{
	int x;
	for (int n = 0; n <= 9; n++)
	{
		x = n * 9;
		_putchar(x + '0');
	}
	return (0);
}
