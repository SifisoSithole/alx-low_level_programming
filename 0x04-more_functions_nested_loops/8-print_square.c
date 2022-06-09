#include "main.h"

/**
 * print_square - This functions prints a square
 * @size: The size of the square
 */
void print_square(int size)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
