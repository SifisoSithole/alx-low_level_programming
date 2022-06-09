#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - This functions draws a diagonal line
 * @n: The number of times '\' should be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}


	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
		
}
