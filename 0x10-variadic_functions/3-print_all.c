#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints
 * @format: a list of argument types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a = 0, b, c = 0;
	char *s;
	const char t_arg[] = "icfs";

	va_start(list, format);
	while (format && format[a])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[a] == t_arg[b] && c)
			{
				printf(", ");
				break;
			}
			b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(list, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), c = 1;
			break;
		case 's':
			s = va_arg(list, char *), c = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		a++;
	}
	printf("\n"), va_end(list);
}
