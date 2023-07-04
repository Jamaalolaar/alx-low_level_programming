#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the first 98 numbers of the Fibonacci series
 * Return: 0
 */
int main(void)
{
	long int n1 = 1, sum = 0, n2 = 2, a = 1;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	while (a <= 96)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%ld, ", sum);
		a++;
	}
	return (0);
}
