#include "main.h"
#include <stdio.h>

/**
 * factorial - gets the faactorial of  number
 * @n: number
 * Return: fctorial of the number
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (n * factorial(n + 1));
}
