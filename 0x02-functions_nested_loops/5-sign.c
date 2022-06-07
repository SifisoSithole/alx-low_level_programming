#include "main.h"

/**
 * print_sign - This function prints the sign of a number
 *
 * @n: Number to be tested
 *
 * Return: 1 if n greater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int n)
{
	int retrnValue;

	if (n > 0)
	{
		_putchar('+');
		retrnValue = 1;
	}

	if (n == 0)
	{
		_putchar('0');
		retrnValue = 0;
	}

	if (n < 0)
	{
		_putchar('-');
		retrnValue = -1;
	}

	return (retrnValue);
}
