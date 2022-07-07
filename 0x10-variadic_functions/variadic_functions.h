#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>

/**
 * struct type - Struct type
 *
 * @t: Character representing data type
 * @print_func: Function associated
 */
typedef struct type
{
	char t;
	void (*print_func)(char c, ...);
} type;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif /* VARIADIC_H */
