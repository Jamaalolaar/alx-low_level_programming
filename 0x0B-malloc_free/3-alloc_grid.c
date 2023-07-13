#include "main.h"
/**
 * alloc_grid - Returns a pointer to a
 * 2-dimensional array of integers
 * @heigth: rows
 * @width: columns
 * Return: pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = (int **) malloc(height * sizeof(int *));

	if (!p)
	{
		free(p);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		p[a] = (int *) malloc(sizeof(int) * width);
		if (!p[a])
		{
			for (b = 0; b <= a; b++)
			{
				free(p[b]);
			}
			free(p);
			return (NULL);

		}
	}
	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			p[c][d] = 0;
		}
	}
	return (p);
}
