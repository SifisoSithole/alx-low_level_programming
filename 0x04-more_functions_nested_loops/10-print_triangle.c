#include "main.h"

/**
 * print_triangle - This functions prints a triangle
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int x, y, space = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}


	for (x = 1; x <= size; x++)
	{
		for (space = 1; space <= (size - x); space++)
			_putchar(' ');
		for (y = 1; y <= x; y++)
			_putchar('#');

		_putchar('\n');
	}
}
