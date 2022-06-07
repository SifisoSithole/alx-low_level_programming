#include "main.h"

/**
 * main - Entry point
 *
 * Description - This program prints the string "_putchar" using
 * the putchar function
 *
 * Return: 0
 */
int main(void)
{
	char str[8] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
