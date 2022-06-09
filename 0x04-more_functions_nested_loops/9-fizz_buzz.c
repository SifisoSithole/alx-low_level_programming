#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0, cnt3 = 1, cap = 3, cap2 = 5;


	for (i = 1; i <= 100; i++)
	{
		sum = sum + cap;
		if (i == cap)
		{
			if (cnt3 == 5)
			{
				cnt3 = 1;
				printf("FizzBuzz ");
				cap = cap + 3;
				cap2 = cap2 + 5;
			}
			else
			{
				cap = cap + 3;
				printf("Fizz ");
				cnt3++;
			}
			continue;
		}

		if (i == cap2)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				cap2 = cap2 + 5;
				printf("Buzz ");
			}
			continue;
		}
		printf("%d ", i);
	}

	return (0);
}
