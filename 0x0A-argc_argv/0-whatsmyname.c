#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Array of arguments passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
