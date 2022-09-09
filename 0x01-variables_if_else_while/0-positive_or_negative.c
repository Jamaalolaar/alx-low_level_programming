#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - prints random number and states if it is positive, negative or zero.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is a positive number\n", n);
	else if (n < 0)
		printf("%d is a negative number\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
