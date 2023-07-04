#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints all arguments in a function
 * including the first one
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	(void)argc;
	return (0);
}
