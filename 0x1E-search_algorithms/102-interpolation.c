#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 *
 * Return: Index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (!array)
		return (-1);

	while (pos <= size)
	{
		pos = low + (((double)(high - low) /
			    (array[high] - array[low])) * (value - array[low]));

		if (pos > size)
			break;
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
