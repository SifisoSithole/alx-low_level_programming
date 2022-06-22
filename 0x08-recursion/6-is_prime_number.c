/**
 * is_prime_number - This function checks if n is a prime number
 * @n: Number to test
 *
 * Return: 1 if n is a prime number or 0 if not
 */

int is_prime_number(int n)
{
	int result = 2;

	if (n <= 1)
		return (0);

	if (result == n)
		return (0);

	if (n % result == 0)
		return (0);

	if (result < n)
		return (1);

	result = result + is_prime_number(n);

	if (result == n - 1)
		return (1);
	else
		return (0);
}
