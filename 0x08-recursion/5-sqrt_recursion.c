#include "main.h"
#include <stdio.h>

/**
 * test_function - tests integers on n
 * @num: first entry for test function
 * @x: integers that test num in test function.
 * Return: square root of number or -1 for error.
 */

int test_function(int num, int x)

{
	if ((x * x) == num)
	{
		return (x);
	}
	else
	{
		if ((x * x) > num)
			return (-1);
		else
			return (test_function(num, x + 1));
	}
}
/**
 * _sqrt_recursion - finds the square root of a number
 * @n: number
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (test_function(n, 2));
}

