#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of function
 * @argc: argument count
 * @argv: argument pointer
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
