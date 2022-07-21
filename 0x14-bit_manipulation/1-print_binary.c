#include "main.h"
/**
 * _pow - This fuction the power raised to the base value
 * @power: Power
 *
 * Return: the power raised to the base value
 */
unsigned long int _pow(int power)
{
	int i;
	unsigned long int num = 1;

	if (power == 0)
		return (1);
	for (i = 1; i <= power; i++)
		num = num * 2;
	return (num);
}

/**
 * print_binary - This function prints binary
 * @n: unsigned long int to print
 */
void print_binary(unsigned long int n)
{
	int i;
	int print_state = 0;
	unsigned long int tempNum;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		tempNum = _pow(i);
		if (tempNum <= n && print_state == 0)
			print_state = 1;
		if (print_state)
		{
			if (tempNum <= n)
			{
				_putchar('1');
				n -= tempNum;
			}
			else
				_putchar('0');
		}
	}
}
