#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the first 98 numbers of the Fibonacci series
 * Return: 0
 */
int main(void)
{
	int n1 = 1, sum = 0;
	int n2 = 2;
	int a = 1;

	printf("%d, ", n1);
	printf("%d, ", n2);
	while (a <= 96)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%d, ", sum);
		a++;
	}
	return (0);
}
