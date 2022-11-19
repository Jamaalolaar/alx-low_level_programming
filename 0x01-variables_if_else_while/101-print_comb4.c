#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the possible combinations of three different numbers
 * Return: void
 */

int main(void)
{
	int hundreds = 0, tens = 1, units = 2;
	int circle1 = units, circle2 = tens;

	while (hundreds <= 7)
	{
		while (tens <= 8)
		{
			while (units <= 9)
			{
				if (hundreds != tens && tens != units && hundreds != units)
				{
					putchar(hundreds + '0');
					putchar(tens + '0');
					putchar(units + '0');
					if (hundreds != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				units++;
			}
			circle1++;
			tens++;
			units = tens + 1;
		}
		hundreds++;
		circle2++;
		tens = circle2;
		units = tens + 1;
		circle1 = units;
	}
	putchar('\n');
	return (0);
}
