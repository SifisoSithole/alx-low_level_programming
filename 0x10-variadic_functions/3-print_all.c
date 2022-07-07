#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - This function prints char data type
 * @c: Character type
 */
void print_char(char c, ...)
{
	va_list chr;

	va_start(chr, c);
	printf("%c", va_arg(chr, int);
	va_end(chr);
}

/**
 * print_int - This function print integers
 * @c: Character type
 */
void print_int(char c, ...)
{
	va_list integer;

	va_start(integer, c);
	printf("%d", va_arg(integer, int));
	va_end(integer);
}

/**
 * print_float - This function prints floats
 * @c: Character type
 */
void print_float(char c, ...)
{
	va_list flot;

	va_start(flot, c);
	printf("%f", va_arg(flot, float *));
	va_end(flot);
}

/**
 * print_string - This function prints string
 * @c: Character type
 */
void print_string(char c, ...)
{
	va_list string;

	va_start(string, c);
	printf("%s", va_arg(string, char *));
	va_end(string);
}

/**
 * corr_func - This function selects the correct print function
 * @c: character representing the data type
 */
void (*corr_func(char c))(char c, ...)
{
	type data_type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};
	int i = 0;

	while (data_type[i].print_func != NULL)
	{
		if (c == data_type[i].t)
			return (data_type[i].print_func);
		i++;
	}
	return (NULL);
}
