#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print the numbers 0-14 ten times.
 * return: void
 */

void more_numbers(void)
{
	int i;
	int c = 0;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
