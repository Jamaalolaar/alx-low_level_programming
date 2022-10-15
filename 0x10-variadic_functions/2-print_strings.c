#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings and a new line
 * @separator: string that separates strings
 * @n: number of strings:
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *s;

	va_start(list, n);
	a = 0;

	while (a < n)
	{
		s = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (a < n - 1)
			if (separator)
				printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(list);
}
