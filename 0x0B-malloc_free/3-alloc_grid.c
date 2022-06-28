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
	int x, y;

	grid = malloc(sizeof(int*) * height);
	for (y = 0; y < height; y++)
		grid[y] = malloc(sizeof(int) * width);

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}

	return (grid);
}
