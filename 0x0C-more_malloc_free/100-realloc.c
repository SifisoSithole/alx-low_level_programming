#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory
 * @ptr: memory to resize
 * @old_size: old size of the array
 * @new_size: new size of the array
 *
 * Return: Pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tempArr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		tempArr = malloc(new_size);
		return (tempArr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	tempArr = malloc(new_size);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			tempArr[i] = ((char *)ptr)[i];
	}
	else
	{
		for (i = 0; i < new_size; i++)
			tempArr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (tempArr);
}
