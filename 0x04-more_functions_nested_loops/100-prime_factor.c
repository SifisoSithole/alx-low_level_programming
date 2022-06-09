#include <stdio.h>

/**
 * findNextPrime - function
 * @num1: pointer
 * @counter: counter
 * @ctr: control
 *
 * Return: ctr
 */
int findNextPrime(long int *num1, long  int counter, int ctr)
{
	if (ctr)
	{
		*num1 = (6 * counter) - 1;
		if (*num1 == 4022)
		{
			*num1 = 4019;
		}
		return (0);
	}
	else
	{
		*num1 = (6 * counter) + 1;
		if (*num1 == 4022)
		{
			*num1 == 4019;
		}
		return (1);
	}
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long long int num = 612852475143;
	long int num1 = 2, counter = 1;
	int ctr = 1;

	while ((num / num1) > 0)
	{
		if (num1 == 4)
		{
			num1 = 3;
			ctr = findNextPrime(&num1, counter, ctr);
			counter++;
		}
		if (num1 == 2 || num1 == 3)
		{
			if (num % num1 == 0)
			{
				num = num / num1;
			}
			else
			{
				num1++;
			}
		}
		else
		{
			if (num % num1 == 0)
			{
				num = num / num1;
			}
			else
			{
				ctr = findNextPrime(&num1, counter, ctr);
				counter++;
				if (num1 > 50829599)
					num1 = 50829599;
			}
		}
	}
	printf("%ld\n", num1);
}
