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
		printf("Searching in array: ");
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

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1;
	size_t nSize;
	int r;

	if (!array)
		return (-1);
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		b <<= 1;
	}
	nSize = (b >= size ? size : b + 1) - (b >> 1);
	b >>= 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			b, b << 1 >= size ? size - 1 : b << 1);
	r = binary_search(array + b, nSize, value);
	return ((r == -1) ? -1 : (int) b + r);
}
