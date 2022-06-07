#include "main.h"

/**
 * print_to_98 - This function prints all natural numbers from n to 98
 *
 * @n: Starting integer
 *
 * Return: void
 */

/**
 * print - This function prints
 *
 * @i: number
 *
 * Return: void
 */

void print(int i)
{
	int num;

	if (i < 0)
	{
		num = i * -1;
		_putchar('-');

		if (i > 9)
			print(i);
		else
			_putchar(i + '0');
	}

	if (i >= 100)
	{
		_putchar((i / 100) + '0');
		num = num % 100;
		num = num / 10;
		_putchar(num + '0');
		_putchar((i % 10) + '0');
	}
	else
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
}

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i > 9 || i < 0)
			{
				print(i);
			}
			else
				_putchar(i + '0');

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
}