#include <stdio.h>

/**
 * main - to print all single digit base 10 numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
