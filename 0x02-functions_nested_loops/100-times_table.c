#include "main.h"

/**
 * times_table - This function prints the 9 times table
 *
 * Return; void
 */
void print_times_table(int n)
{
	int x, y, num;
	if (n > 15 || n < 0)
	{
		_putchar('');
		return (0);
	}

	for (x = 0; x < n ; x++)
	{
		for (y = 0; y < n; y++)
		{
			num = y * x;
			if (num < 10)
			{
				_putchar(num + '0');
			}
			
			if (num > 9 && num < 100)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}

			if (num >= 100)
			{
				_putchar((i / 100) + '0');
				num1 = i / 10;
				_putchar((num % 10) + '0');
				_putchar((i % 10) + '0');
			}

			if (y == 9)
				break;

			_putchar(',');
			if (x * (y + 1) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			
			if (x * (y + 1) >= 10 && x * (y + 1) < 100)
			{
				_putchar(' ');
				_putchar(' ');
			}
			
			if (x * (y + 1) >= 100)
				_putchar(' ');

		}
		_putchar('\n');
	}
}
