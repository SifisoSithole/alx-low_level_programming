#include "main.h"

/**
 * _puts - This function prints a string
 *
 * @str: String to be printed
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
