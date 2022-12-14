#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to nested array
 * @size: size of matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int p, b = 0;
	unsigned int diag1 = 0, diag2 = 0;

	b = (size * size) - 1;

	for (p = 0; p <= b; p = p + (size + 1))
	{
		diag1 = diag1 + a[p];
	}
	for (p = (size - 1); p < b; p = p + (size - 1))
	{
		diag2 = diag2 + a[p];
	}
	printf("%d,%d\n", diag1, diag2);
}
