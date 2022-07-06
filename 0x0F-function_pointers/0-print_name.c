#include "function_pointers.h"

/**
 * print_name - This function prints a name using a pointer to a function
 * @name: Name to print
 * @f: Pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
