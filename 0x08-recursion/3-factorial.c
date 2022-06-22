/**
 * factorial - This Function returns the factorial of a given number
 * @n: Integer
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	int num;

	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);


	num = n * factorial(n - 1);

	return (num);
}
