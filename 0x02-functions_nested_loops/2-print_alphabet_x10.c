#include "main.h"

/**
 * print_alphabet_x10 - function prints the first 10 alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		n++;
	}
}
