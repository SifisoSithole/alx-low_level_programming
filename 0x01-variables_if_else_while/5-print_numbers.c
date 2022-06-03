#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - This program prints all all single digits
 * of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
