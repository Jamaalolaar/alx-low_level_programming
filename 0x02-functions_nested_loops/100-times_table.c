#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints n times-table starting with 0
 * @n: argument of function
 * Return: 0
 */

int print_times_table(int n)
{
	int x, y, prod;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			prod = x * y;
			if (y < n)
				printf("%d,   ", prod);
			else
				printf("%d", prod);
		}
		printf("\n");
	}
	return (0);
}
