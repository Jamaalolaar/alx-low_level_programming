#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a pointer that points to an array of pointers
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int a, b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
