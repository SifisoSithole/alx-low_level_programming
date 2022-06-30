#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	else
		return (mem);
}
