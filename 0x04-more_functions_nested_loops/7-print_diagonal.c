#include "main.h"

/**
 * print_diagonal - This functions draws a diagonal line
 * @n: The number of times '\' should be printed
 */
void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar(' ');
		}
		_putchar('\');
		_putchar('\n');
	}
	_putchar('\n');
}
