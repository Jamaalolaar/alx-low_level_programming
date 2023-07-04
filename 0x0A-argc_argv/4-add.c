#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the sum of all positive
 * integer arguments
 * @argc: number of arguments
 * @argv: arry of pointers to arguments
 * Return: 1 when negative, 0 when positive
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc <= 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 0 + '0' || *argv[i] > 9 + '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
