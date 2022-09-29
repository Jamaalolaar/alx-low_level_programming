#include "main.h"
#include <stdio.h>

/**
 * factorial - finds the factorial of a number
 * @n: number.
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else
		return (1);
}
