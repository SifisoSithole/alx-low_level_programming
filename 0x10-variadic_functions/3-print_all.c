#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 * print_int - This function print integers
 * @c: Character type
 */
void print_int(char c, ...)
{
	va_list integer;

	va_start(integer, c);
	switch (c)
	{
		case 'i':
			printf("%d", va_arg(integer, int));
			break;
		case 'c':
			printf("%c", va_arg(integer, int));
			break;
	}
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
	printf("%f", va_arg(flot, double));
	va_end(flot);
}

/**
 * print_string - This function prints string
 * @c: Character type
 */
void print_string(char c, ...)
{
	va_list string;
	char *str = va_arg(string, char *);

	va_start(string, c);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
	va_end(string);
}

/**
 * corr_func - This function selects the correct print function
 * @c: character representing the data type
 *
 * Return: Pointer to associated function
 */
void (*corr_func(char c))(char c, ...)
{
	type data_type[] = {
		{'c', print_int},
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

/**
 * print_all - This function prints everything
 * @format: String format
 */
void print_all(const char * const format, ...)
{
	va_list para;
	int i = 0;
	void (*print_func)(char c, ...);

	va_start(para, format);
	while (format[i] != '\0')
	{
		print_func = corr_func(format[i]);
		switch (format[i])
		{
			case 'c':
				print_func(format[i], va_arg(para, int));
				break;
			case 'i':
				print_func(format[i], va_arg(para, int));
				break;
			case 'f':
				print_func(format[i], va_arg(para, double));
				break;
			case 's':
				print_func(format[i], va_arg(para, char *));
				break;
			default:
				i++;
				continue;
		}
		i++;
		switch (format[i])
		{
			case '\0':
				putchar('\n');
				break;
			default:
				printf(", ");
		}
	}
	va_end(para);
}
