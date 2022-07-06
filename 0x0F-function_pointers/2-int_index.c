#include <stdio.h>

/**
 * int_index - This function searches for an integer
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to a function that compare values
 *
 * Return: Index if true, -1 if false
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && size && cmp))
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
