#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - This function prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int ctr = 1;

	if (separator == NULL)
		ctr = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i == n - 1)
			break;

		if (ctr)
			printf("%s", separator);
		else
			continue;
	}
	va_end(ap);
	putchar('\n');
}



