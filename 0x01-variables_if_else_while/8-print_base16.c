#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints all of the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i, index = 0;
	char letters[6] = "abcdef";

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	while (letters[index] != '\0')
	{
		putchar(letters[index]);
		index++;
	}

	putchar('\n');
	return (0);
}
