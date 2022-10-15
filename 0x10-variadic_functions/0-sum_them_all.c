#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all parameters and returns all the sum
 * @n: number of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);

	a = 0;
	while (a < n)
	{
		sum += va_arg(valist, int);
		a++;
	}
	va_end(valist);
	return (sum);
}

