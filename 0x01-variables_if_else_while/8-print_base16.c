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

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n);
		}
		else if (n >= 10)
		{
			for (lt = 'a'; lt <= 'f'; lt++)
			{
				putchar(lt);
			}
		}
	}
	putchar('\n');
	return (0);
}
