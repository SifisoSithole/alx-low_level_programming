#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - This function searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int i, ind;
	int L = 0;
	int R = size - 1;

	if (!array || !size || !value)
		return (-1);
	while (L <= R)
	{
		ind = L;
		while (ind <= R)
		{
			if (ind != R)
				printf("%d, ", array[ind]);
			else
				printf("%d\n", array[ind]);
			ind++;
		}
		i = (L + R) / 2;
		if (array[i] < value)
			L = i + 1;
		else if (array[i] > value)
			R = i - 1;
		else
			return (i);
	}
	return (-1);
}
