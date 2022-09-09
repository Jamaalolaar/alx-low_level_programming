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
		printf(n, "%d is a positive number");
	else if (n < 0)
		printf(n, "%d is a negative number");
	else
		printf(n, "%d is zero");
	return (0);
}
