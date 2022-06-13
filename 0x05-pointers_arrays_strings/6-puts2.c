#include "main.h"

/**
 * puts2 - This function prints every other character of a string,
 * starting with the first character
 *
 * @str: String to be printed
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
