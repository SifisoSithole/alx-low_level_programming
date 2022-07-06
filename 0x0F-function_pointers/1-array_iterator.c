#include <stddef.h>

/**
 * array_iterator - This function executes a function given as a parameter
 * on each element of an array
 * @array: Array of integers
 * @size: Size of the array
 * @action: Pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}