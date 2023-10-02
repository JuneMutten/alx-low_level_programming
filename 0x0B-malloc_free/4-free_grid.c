#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created
 * @grid: 2D arrat of integers to be freed
 * @height: Height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
