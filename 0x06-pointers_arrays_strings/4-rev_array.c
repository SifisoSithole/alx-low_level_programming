/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int stop;
	int swaper;

	n--;
	if (n % 2 == 0)
		stop = n / 2;
	else
		stop = (n - 1) / 2;

	for (i = 0; i < stop; i++)
	{
		swaper = a[i];
		a[i] = a[n - i];
		a[n - i] = swaper;
	}
}
