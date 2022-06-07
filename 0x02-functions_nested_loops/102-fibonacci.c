#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, temp;
	int i;

	printf("%ld, %ld, ", num1, num2);

	for (i = 0; i < 48; i++)
	{
		if (i == 47)
		{
			long int temp2;

			temp2 = num1 + num2;
			printf("%ld\n", temp2);
			break;
		}
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
		printf("%ld, ", num2);
	}
	return (0);
}
