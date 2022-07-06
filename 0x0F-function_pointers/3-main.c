#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func_ptr(num1, num2));

	return (0);
}
