#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints the alphabet in lowercase, using putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabets[27] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (alphabets[index] != '\0')
	{
		putchar(alphabets[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
