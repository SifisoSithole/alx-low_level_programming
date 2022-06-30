#include <stdlib.h>

/**
 * _calloc - This Function allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int i, d;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	mem = malloc(d);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < d; i++)
		mem[i] = 0;
	return (mem);
}
