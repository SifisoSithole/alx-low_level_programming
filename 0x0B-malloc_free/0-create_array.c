#include <stdlib.h>

/**
 * create_array - This function creates an array of char and initializes it
 * @size: Size of the array to create
 * @c: Character to inialize the array with
 *
 * Return: pointer to the array or NULL if it failes
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
