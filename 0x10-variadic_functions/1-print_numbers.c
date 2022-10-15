#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string that separates successive numbers
 * @n: The number of integers passed
 * @..." : number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
