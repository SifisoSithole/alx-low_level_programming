#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, cnt3 = 0, cnt5 = 0, cap = 0;


	while (cap < 1024)
	{
		sum = sum + cap;
		if (cnt3 == 5)
		{
			cnt3 = 0;
			cap = cap + 3;
		}
		else
		{
			cap = cap + 3;
		}
		cnt3++;

	}

	cap = 0;

	while (cap < 1024)
	{
		if (cnt5 == 3)
		{
			cnt5 = 0;
			cap = cap + 5;
		}
		else
		{
			sum = sum + cap;
			cap = cap + 5;
		}
		cnt5++;
	}

	printf("%d\n", sum);

	return (0);
}
