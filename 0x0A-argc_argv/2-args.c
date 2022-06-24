#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: Arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
