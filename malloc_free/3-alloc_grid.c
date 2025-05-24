#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a two-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the two-dimensional array, or NULL if an error occurs.
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;

	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(grid[h]);
			}

			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}

	return (grid);
}
