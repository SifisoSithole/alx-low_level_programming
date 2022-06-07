#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, temp, sum = 2;

	while (num2 < 4000000)
	{
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		if (num2 % 2 == 0)
		{
			sum = sum + num2;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
