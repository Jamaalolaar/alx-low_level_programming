#include "main.h"
#include <stdio.h>
/**
 * _testfunc - compares two integers to determine if the
 * first is divisible by the second, does this in recursion
 * by increasing the second number.
 * @num: number
 * @test: test integer
 * Return: 0 if negative, 1 if positive
 */
int _testfunc(int num, int test)
{
	if (test < num)
	{
		if (num % test == 0)
			return (0);
		else if (test == (num - 1) && test != 0)
			return (1);
		else
			return (_testfunc(num, (test + 1)));
	}
}
/**
 * is_prime_number - checks if  number is  prime number
 * @n: number
 * Return: value from _testfunc
 */
int is_prime_number(int n)
{
	return (_testfunc(n, 2));
}
