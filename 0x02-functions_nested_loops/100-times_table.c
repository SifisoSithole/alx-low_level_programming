#include "main.h"
/**
 * printFunc - To print
 * @num: number to print
 */
void printFunc(int num)
{
	int num1 = 0;

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
		_putchar((num / 100) + '0');
		num1 = num / 10;
		_putchar((num1 % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_times_table - This function prints the n times table
 * @n: number
 *
 * Return; void
 */
void print_times_table(int n)
{
	int x, y, num;

	for (x = 0; x <= n ; x++)
	{
		if (n > 15 || n < 0)
			break;
		for (y = 0; y <= n; y++)
		{
			num = y * x;
			printFunc(num);
			if (y == n)
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
