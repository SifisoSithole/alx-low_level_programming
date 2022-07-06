#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - This function selects the correct function to perfom
 * @s: Operator to perfom
 *
 * Return: Address of the correct
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (!(strcmp(s, ops[i].op)))
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
