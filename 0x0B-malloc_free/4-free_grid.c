#include "main.h"
/**
 * free_grid - frees a two dimensional array
 * @grid: grid to be freed (a pointer to pointer)
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
