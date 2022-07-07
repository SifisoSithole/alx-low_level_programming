#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This function that prints strings
 * @separator: String to be printed between strings
 * @n: Number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	int ctr = 1;
	char *tempStr;

	va_start(str, n);
	if (!separator)
		ctr = 0;
	for (i = 0; i < n; i++)
	{
		tempStr = va_arg(str, char *);
		if (tempStr)
			printf("%s", tempStr);
		else
			printf("(nil)");

		if (i == n - 1)
		{
			putchar('\n');
			break;
		}

		if (ctr)
			printf("%s", separator);
	}
}
