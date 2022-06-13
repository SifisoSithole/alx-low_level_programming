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
 * puts_half - This function prints half a string
 *
 * @str: String to be halfed
 */
void puts_half(char *str)
{
	int index = _strlen(str);

	if (index % 2 == 0)
		index = index / 2;
	else
		index = (index - 1) / 2;


	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
