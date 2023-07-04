#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - gets the product of two arguments
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("%s\n", "Error");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	(void)argc;
	return (0);
}
