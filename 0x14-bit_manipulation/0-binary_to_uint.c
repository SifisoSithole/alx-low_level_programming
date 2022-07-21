#include <stdio.h>
/**
 * _pow - This fuction the power raised to the base value
 * @power: Power
 *
 * Return: the power raised to the base value
 */
int _pow(int power)
{
	int i;
	int num = 1;

	if (power == 0)
		return (1);
	for (i = 1; i <= power; i++)
		num = num * 2;
	return (num);
}

/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num = 0;
	unsigned int len;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	len = i - 1;

	for (i = 0; b[i]; i++)
	{
		if (b[len] == '1')
			num += _pow(i);
		len--;
	}
	return (num);
}
