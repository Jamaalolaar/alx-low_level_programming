#include "main"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is the argument of the function
 * Return: the value
 */

int print_last_digit(int n)
{
	int last = (n % 10);

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
