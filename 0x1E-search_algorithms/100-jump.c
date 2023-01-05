#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - This function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	}
	jump = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", jump, i);
	i = i >= size ? size - 1 : i;
	while (jump <= i)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}
	return (-1);
}
