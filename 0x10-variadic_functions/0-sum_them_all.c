#include "variadic_functions.h"
/**
 * sum_them_all - receives an indefinite amount
 * of integer arguments and sums them up
 * @n: number of arguments received
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
