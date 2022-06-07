#include "main.h"

/**
 * print_to_98 - This function prints all natural numbers from n to 98
 *
 * @n: Starting integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
			_putchar(i + '0');

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
