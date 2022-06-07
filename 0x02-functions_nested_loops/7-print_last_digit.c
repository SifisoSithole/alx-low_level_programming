#include "main.h"

/**
 * print_last_digit - This function returns the last digit of a number
 *
 * @num: An integer
 *
 * Return: The last digit of num
 */
int print_last_digit(int num)
{
	if (num < 0)
	{
		num = num + 10;
		num = num * -1;
	}

	num = num % 10;
	_putchar(num + '0');

	return (num);
}
