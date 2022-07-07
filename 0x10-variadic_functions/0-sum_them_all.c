#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the sum of all its parameters
 * @n: Number of arguments
 *
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(nums, int);

	va_end(nums);
	return (sum);
}
