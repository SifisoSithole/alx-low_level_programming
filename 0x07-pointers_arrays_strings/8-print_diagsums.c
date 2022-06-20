#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of two diagonals of a square
 * @a: pointer to a two dimentional array
 * @size: The size of the square
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < (size * size); i += (size + 1))
		sum += *(a + i);
	printf("%d, ", sum);

	sum = 0;
	for (i = 0; i < (size * size); i += (size - 1))
	{
		if (i != 0 && i != (size * size) - 1)
			sum += *(a + i);
	}
	printf("%d\n", sum);
}
