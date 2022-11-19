#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the possible combinations of three different numbers
 * Return: void
 */

int main(void)
{
	int hundreds = 0, tens = 1, units = 2;

	while (hundreds <= 7)
	{
		while (tens <= 8)
		{
			while (units <= 9)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(units + '0');
				if (hundreds != 7)
				{
					putchar(',');
					putchar(' ');
				}
				units++;
			}
			tens++;
			units = tens + 1;
		}
		hundreds++;
		tens = hundreds + 1;
		units = tens + 1;
	}
	putchar('\n');
	return (0);
}
