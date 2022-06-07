#include "main.h"

/**
 * times_table - This function prints the 9 times table
 *
 * Return; void
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			_putchar(y + '0');
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
