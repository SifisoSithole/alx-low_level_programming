#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to a 2 dimensional array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y, uns = 0;

	if (width == 0 || height == 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			uns = y;
			break;
		}
	}
	if (uns != 0)
	{
		for (y = 0; y <= uns; y++)
		{
			free(grid[y]);
			grid[y] = NULL;
		}
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}

	return (grid);
}
