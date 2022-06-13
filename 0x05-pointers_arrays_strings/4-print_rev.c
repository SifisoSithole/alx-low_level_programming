#include "main.h"

/**
 * _strlen - This function returns the length of a string
 *
 * @s: String to be counted
 *
 * Return: The number of characters in s
 */
int _strlen(char *s)
{
	int counter = 0, index = 0;

	while (s[index] != '\0')
	{
		counter++;
		index++;
	}
	return (counter);
}

/**
 * print_rev - This function prints a string in reverse
 *
 * @s: String to be printed
 */
void print_rev(char *s)
{
	int index = _strlen(s);

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
}
