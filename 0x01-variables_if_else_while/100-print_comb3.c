#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints possible combinations of two different digits
 * Return: void
 */

int main (void)
{
	int tens = 0, units = 1, rounds = 0;

	while (tens < 10)
	{
		while (units > 0 && units < 10)
		{
			if (tens == 8 && units == 9)
			{
			if (units != tens)
			{
				putchar(tens + '0');
				putchar(units + '0');
				if (tens != 8 && units != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			
			units++;
		}
		rounds++;
		units = rounds;
		tens++;
	}
	putchar('\n');
	return(0);
}
