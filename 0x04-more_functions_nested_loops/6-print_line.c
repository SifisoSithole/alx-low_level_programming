#include "main.h"

/**
 * print_line - This functions '_' n times
 * @n: The number of lines printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
