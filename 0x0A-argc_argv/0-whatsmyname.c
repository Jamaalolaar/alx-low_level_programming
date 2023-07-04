#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the name of the program followed by a new line
 * @argc: argument count
 * @argv: pointer to array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
