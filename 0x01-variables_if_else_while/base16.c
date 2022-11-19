#include <stdio.h>
/**
 * main - To print hexadecimal numbers
 * Return: void
 */

int main(void)
{
	int n;
	char ch = '0';

	for (n = 0; n < 16; n++)
	{
		if (n == 10)
		{
			ch = 'a';
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
