#include "main.h"
#include <stdio.h>

/**
 * main - gets the product of two arguments
 * @argc: argument count.
 * @argv: argument pointer.
 * Return: 0 if positive, 1 for error.
 */

int main(int argc, char *argv[])
{
	int p, q, n;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		n = a * b;

		printf("%d\n", n);
		return (0);
	}
	printf("Error\n");
	return (1);
}
