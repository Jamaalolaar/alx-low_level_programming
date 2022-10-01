#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments in a function
 * @argc: argument counter
 * @argv: argument pointer.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
	        for (int i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
			
}
