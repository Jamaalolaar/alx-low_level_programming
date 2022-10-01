#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
		p = atoi(argv[1]);
		q = atoi(argv[2]);

		n = p * q;

		printf("%d\n", n);
		return (0);
	}
	printf("Error\n");
	return (1);
}
