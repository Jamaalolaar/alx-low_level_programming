#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * check - checks strings to find integers.
 * @str: pointer to the string to be checked.
 * Return: 0 if positive, 1 for error.
 */

int check(char *str)
{
	unsigned int i;
	i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - sums up integers passed as arguments.
 * @argc: argument counter.
 * @argv: argument pointer.
 * Return: 0 if positive, 1 otherwise.
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int sum = 0;
	i = 1;

	while (i < argc)
	{
		if (check(argv[i]))
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
