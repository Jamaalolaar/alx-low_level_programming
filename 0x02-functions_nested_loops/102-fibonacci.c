#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count = 1, a = 1, b = 1, sum;

	while (count <= 50)
	{
		printf("%d", b);
		if (count < 50)
		{
			printf(", ");
		}
		sum = a + b;
		a = b;
		b = sum;
		count++;
	}
	putchar('\n');
	return (0);
}
