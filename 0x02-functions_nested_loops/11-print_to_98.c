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
	for (n; n <= 98; n++)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
			_putchar(n + '0');

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
