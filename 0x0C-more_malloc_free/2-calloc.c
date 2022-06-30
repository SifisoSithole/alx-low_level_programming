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
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	return (mem);
}
