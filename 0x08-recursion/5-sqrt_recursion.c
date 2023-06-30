#include "main.h"
#include <stdio.h>
/**
 * getsqrt - test function to test all integers
 * and get which one is the square root.
 * @num: number to get sqrt
 * @srt: integer to be tested (starting with zero)
 * Return: zero, or minus 1 or sqrt
 */
int getsqrt(int num, int srt)
{
	if (num < 0)
		return (-1);
	else if (num == 0)
		return (0);

	if (srt * srt == num)
	{
		return (srt);
	}
	else
		return (getsqrt(num, (srt + 1)));
}
/**
 * _sqrt_recursion - gets the sqrt of a number
 * @n: number to get sqrt
 * Return: value from getsqrt
 */

int _sqrt_recursion(int n)
{
	return (getsqrt(n, 0));
}
