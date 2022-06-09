#include "main.h"

/**
 * more_numbers - This function prints numbers from 0 to 14
 */
void more_numbers(void)
{
	char i = 48;
	int x, y, control;

	for (x = 0; x < 10; x++)
	{
		control = 0;
		for (y = 0; y < 15; y++)
		{
			if (i == 58)
			{
				i = 48;
				control = 1;
			}

			if (control)
				_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
	}
}
