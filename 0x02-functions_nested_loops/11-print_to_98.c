#include "main.h"

/**
 * print - This function prints
 * @i: number
 *
 * Return: void
 */

void print(int i)
{
	int num = 0;

	if (i >= 100)
	{
		_putchar((i / 100) + '0');
		num = i / 10;
		_putchar((num % 10) + '0');
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}

/**
 * print_to_98 - This function prints all natural numbers from n to 98
 * @n: Starting integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i, num;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			num = i;
			if (num < 0)
			{
				num = num * -1;
				_putchar('-');
			}
			if (num > 9)
			{
				print(num);
			}
			else
				_putchar(num + '0');

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			print(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
