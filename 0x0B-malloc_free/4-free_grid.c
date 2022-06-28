#include <stdlib.h>

/**
 * free_grid - This function frees the dynamic memory previously created
 * @grid: Double pointer to the previously created 2D array
 * @height: size of height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free (grid);
}
