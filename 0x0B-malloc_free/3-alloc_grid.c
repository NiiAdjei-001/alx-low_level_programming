#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Create a grid.
 * @width: width of grid.
 * @height: height of grid.
 * Return: returns a grid width x height.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int c, r;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));
	for (r = 0; r < height; r++)
	{
		grid[r] = (int *) malloc(width * sizeof(int));
	}
	if (grid != NULL)
	{
		for (r = 0; r < height; r++)
		{
			if (grid[r] == NULL)
			{
				for (r = 0; r < height; r++)
				{
					free(grid[r]);
				}
				fprintf(stderr, "Not enough memory available!\n");
				free(grid);
				break;
			}
		}
	}
	for (r = 0; r < height; r++)
	{
		for (c = 0; c < width; c++)
		{
			grid[r][c] = 0;
		}
	}
	return (grid);
}
