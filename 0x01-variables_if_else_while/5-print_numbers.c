#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints all base 10 single digit numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}
