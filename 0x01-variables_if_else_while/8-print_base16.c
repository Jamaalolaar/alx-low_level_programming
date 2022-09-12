#include <stdio.h>

/**
 * main - to print hexadecimal numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	char lt;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (lt = 'a'; lt <= 'f'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
