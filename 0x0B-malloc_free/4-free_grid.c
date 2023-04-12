#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - release the memory of a grid/ 2D array.
 * @grid: 2D array.
 * @height: height of grid..
 */

void free_grid(int **grid, int height)
{
	int c, r;

	if (grid != NULL)
	{
		for (r = 0; r < height; r++)
		{
			if (grid[r--] == NULL)
			{
				fprintf(stderr, "Not enough memory available!\n");
				while (r >= 0)
				{
					free(grid[r--]);
				}
				free(grid);
				break;
			}
		}
	}
}
