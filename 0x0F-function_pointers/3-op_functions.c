#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - This function returns sum of two numbers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sum of integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the results of the division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Results of the division of a and b
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - This function returns the remainder of the division of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: Remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
