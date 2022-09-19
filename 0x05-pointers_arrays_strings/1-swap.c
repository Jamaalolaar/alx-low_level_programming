#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of two integers
 * @a - first integer
 * @b - second integer
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int *p;

	*p = a;
	*a = b;
	*b = p;
}
