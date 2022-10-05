#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to be freed.
 * @height: grid height.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int n = 0;

	while (n < height)
	{
		free(grid[n]);
		n++;
	}
	free(grid);
}
