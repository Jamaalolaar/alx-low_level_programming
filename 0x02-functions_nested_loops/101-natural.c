#include <stdio.h>
/**
 * main - computes the sum of all multiples of 3 and 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int n = 1023;
	int sum = 0;

	while (n > 0)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n--;
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
