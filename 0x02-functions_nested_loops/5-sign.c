#include "main.h"

/**
 * print_sign - to print the sign of a number
 * @n: is the argument of the function.
 * Return: positive number (1), negative number (-1), zero (0)
 */

int print_sign(int n);
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
	return (0);
	}
}
