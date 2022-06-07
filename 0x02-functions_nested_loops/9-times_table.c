#include "main.h"

/**
 * times_table - This function prints the 9 times table
 *
 * Return; void
 */
void times_table(void)
{
	int x, y, num;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			num = y * x;
			if (num < 10)
			{
				_putchar(num + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}

			if (y == 9)
				break;

			_putchar(',');
			if (x * (y + 1) < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
