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

	_putchar(1);
	_putchar(2);
	while (a <= 96)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		_putchar(sum);
		a++;
	}
	return (0);
}
