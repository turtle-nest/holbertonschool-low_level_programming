#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return:  Pointer to the newly allocated 2D array of integers
 * with each element initialized to 0.
 * Returns NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i > 0)
{
free(grid[i - 1]);
i--;
}
free(grid);
return (NULL);
}

for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
