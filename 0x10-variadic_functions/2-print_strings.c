#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(str, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("nil");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
