#include <stdio.h>

/**
 * main - to print lowercase alphabets in reverse
 *
 * Return: Always 0.
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
