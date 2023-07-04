#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the minimum number of coins
 * required to make change for a certain amount
 * @argc: number of arguments
 * @argv: array of pointers to argument
 * Return: 0 is successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]), change = 0;

	if (argc == 2)
	{
		if (n < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			while (n >= 2)
			{
				while (n >= 5)
				{
					while (n >= 10)
					{
						while (n >= 25)
						{
							n -= 25;
							change += 1;
						}
						n -= 10;
						change += 1;
					}
					n -= 5;
					change += 1;
				}
				n -= 2;
				change += 1;
			}
			change += n % 2;
			printf("%d\n", change);
		}
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
	(void)argc;
	return (0);
}
