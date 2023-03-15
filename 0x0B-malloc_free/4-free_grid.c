#include "main.h"
#include <stdlib.h>

/**
 * free_grid -. Releases two dimensional grids
 * @grid: ..
 * @height: ...
 *
 * Return: ...
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

