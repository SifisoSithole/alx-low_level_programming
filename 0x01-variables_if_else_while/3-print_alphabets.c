#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints the alphabet in lowercase
 * and uppercase, using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char lowercase[27] = "abcdefghijklmnopqrstuvwxyz";
	char uppercase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index = 0;

	while (lowercase[index] != '\0')
	{
		putchar(lowercase[index]);
		index++;
	}

	index = 0;
	while (uppercase[index] != '\0')
	{
		putchar(uppercase[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
