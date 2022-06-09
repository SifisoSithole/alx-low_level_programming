#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long num1 = 1, num2 = 2, temp;
	int i;

	printf("%lu, %lu, ", num1, num2);

	for (i = 1; i <= 96; i++)
	{
		if (i == 96)
		{
			unsigned long temp2;

			temp2 = num1 + num2;
			printf("%lu\n", temp2);
			break;
		}
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%lu, ", num2);
	}
	return (0);
}
