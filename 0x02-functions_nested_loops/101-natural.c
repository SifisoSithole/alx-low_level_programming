#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, cnt3 = 0, cnt5 = 0;

	while (sum < 1024)
	{
		if (cnt3 == 5)
		{
			cnt3 = 0;
		}
		else
		{
			sum = sum + 3;
		}
		cnt3++;

		if (cnt5 == 3)
		{
			cnt5 = 0;
		}
		else
		{
			sum = sum + 5;
		}
		cnt5++;
	}
	printf("%d\n", sum);

	return (0);
}
