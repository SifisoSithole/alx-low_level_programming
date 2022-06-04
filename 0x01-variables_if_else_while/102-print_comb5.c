#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints all possible
 * different combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int x, tens, y, units;

	for (x = 0; x < 100; x++)
	{
		for (y = x + 1; y < 100; y++)
		{
			if (x < 10)
			{
				tens = 0;
				units = x;
			}
				else
				{
					tens = x / 10;
					units = x % 10;
				}
			putchar(tens + '0');
			putchar(units + '0');
			putchar(' ');
			if (y < 10)
			{
				tens = 0;
				units = y;
			}
				else
				{
					tens = y / 10;
					units = y % 10;
				}
			putchar(tens + '0');
			putchar(units + '0');
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
