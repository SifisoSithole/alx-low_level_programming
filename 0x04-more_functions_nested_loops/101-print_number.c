#include "main.h"
/**
 * print_numbr - function
 * @n: parameter
 */
void print_numbr(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10 != 0)
		print_numbr(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * print_number - Function
 * @n: argument
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	print_numbr(n);
}
