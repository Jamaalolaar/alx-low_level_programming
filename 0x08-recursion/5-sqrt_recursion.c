#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that finds square root
 * @n: the number that it's square root is needed
 * test_function - a recursion that tests integers on n
 * @num: first entry for test function
 * @x: integers that test num in test function.
 */

int test_function(int num, int x)
{
	if (x % num == 0)
	{
		if ((x * x) == num)
		{
			return (x);
		}
		else if ((x * x) > num)
			return (-1);
	}
	else
		return (test_function(num, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (test_function(n, 2));
}

