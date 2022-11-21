#include <stdio.h>
/**
 * main - prints the sum of all even numbers less than
 * 4,000,000 in the fibonacci series.
 * Return: void
 */
int main(void)
{
	long int a = 1, b = 1, sum, evensum = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
		{
			evensum += b;
		}
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%ld\n", evensum);
	return (0);
}
