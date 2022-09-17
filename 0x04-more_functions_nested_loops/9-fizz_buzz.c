#include "main.h"
#include <stdio.h>

/**
 * main - FizzBuzz test
 * Return: 0
 */

int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) = 0) && ((i % 5) != 0))
		{
			continue;
			printf("Fizz");
		}
		else if (((i % 5) = 0) && ((i % 3) != 0))
		{
			continue;
			printf("Buzz");
		}
		else if ((i % 15) = 0)
		{
			continue;
			printf("FizzBuzz");
		}
		else
			_putchar(i + '0');
		_putchar(' ');
	}
	return (0);
}
