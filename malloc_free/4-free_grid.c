#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: Pointer to the 2D array to be freed
 * @height: The height of the grid (number of rows)
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
