#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs basic calculations
 * @argc: argument count
 * @argv: pointer to array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int input1, input2, answer;
	char operator;
	int (*f)(int,int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input1 = atoi(argv[1]);
	f = get_op_func(argv[2]);
	input2 = atoi(argv[3]);

	if (!f)
	{
		printf("Error\n");
		exit(98);
	}
	operator = *argv[2];
	if ((operator == '/' || 0 == '%') && input2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	answer = f(input1, input2);
	printf("%d\n", answer);

	return(0);
}
