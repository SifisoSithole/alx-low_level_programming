#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: minimum
 * @max: Maximum
 *
 * Return: Pointer to the newly allocated memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, index = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[index] = i;
		index++;
	}

	return (arr);
}
