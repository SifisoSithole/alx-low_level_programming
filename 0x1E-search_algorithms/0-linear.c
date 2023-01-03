#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - This function searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: Integer to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
