#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 1 0n success, -1 on failure
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int fileFrom, fileTo, no;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	fileFrom = open(argv[1], O_RDONLY);
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fileTo = open(argv[2], O_TRUNC | O_WRONLY);
	if (fileTo == -1)
		fileTo = creat(argv[2], 0664);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	
	no = read(fileFrom, buffer, 1024);
	while (no)
	{
		dprintf(fileTo, "%s", buffer);
		no = read(fileFrom, buffer, 1024);
	}
	
	no = close(fileFrom);
	if (no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}

	no = close(fileTo);
	if (no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}
