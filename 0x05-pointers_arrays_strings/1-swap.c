/**
 * swap_int - This function swaps the values of two integers
 * @a: Address of the 1st integer to swap
 * @b: Address of the second integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
