#include <stdio.h>
#include <stdlib.h>

/**
 * main - FizzBuzz test
 * Return: 0
 */

int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 15 != 0)
		{
			printf("Fizz");

		}
		else if (count % 5 == 0 && count % 15 != 0)
		{
			printf("Buzz");
		}
		else if (count % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", count);
		if (count < 100)
		{
			putchar(' ');
		}

		count++;
	}
	putchar('\n');
	return (0);
	return (0);
}
