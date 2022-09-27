#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a pointer that points to an array of pointers
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int p, b;

	for (p = 0; p < 8; p++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[p][b]);
		}
		_putchar('\n');
	}
}
