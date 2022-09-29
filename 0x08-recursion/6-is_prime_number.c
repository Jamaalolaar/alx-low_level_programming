#include "main.h"
#include <stdio.h>

/**
 * testfunction - returns 0 or 1
 * @num: number to be checked
 * @i: possible divisor
 * Return: 1 if postive, 0 otherwise.
 */

int testfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (testfunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked.
 * Return: 1 if positive, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (testfunction(n, 2));
	}
}
