#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int sum = 0;
	int noCoins = 0;
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (sum != cents)
		{
			if ((sum + coins[i]) > cents)
			{
				while ((sum + coins[i]) > cents)
					i += 1;
			}

			sum += coins[i];

			noCoins++;
		}
		printf("%d\n", noCoins);
	}

	return (1);
}
