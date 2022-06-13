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
 * puts2 - This function prints every other character of a string,
 * starting with the first character
 *
 * @str: String to be printed
 */
void puts(char *str)
{
	int index = _strlen(s) - 1;

	while (index != '\0')
	{
		if (index % 2 == 0)
			_putchar(s[index]);
		index++;
	}
	_putchar('\n');
}
