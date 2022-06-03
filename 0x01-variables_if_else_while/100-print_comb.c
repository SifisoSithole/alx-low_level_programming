#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints all possible
 * different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
