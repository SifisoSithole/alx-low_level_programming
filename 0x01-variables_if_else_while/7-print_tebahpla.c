#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints the alphabets in reverse order,
 * using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int index = 25;

	while (index >= 0)
	{
		putchar(alphabets[index]);
		index--;
	}
	putchar('\n');
	return (0);
}
