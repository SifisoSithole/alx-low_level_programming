#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		(void)argc;
		(void)argv;
		printf("Error\n");
	}
	else
	{
		(void)argc;
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
