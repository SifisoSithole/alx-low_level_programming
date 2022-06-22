/**
 * check_sqr_root - This function searches for the square root
 * @n: Target integer
 * @num: Number to check
 *
 * Return: The square root
 */
int check_sqr_root(int n, int num)
{
	int sqr = num * num;

	if (sqr > n)
		return (-1);

	if (sqr == n)
		return (num);

	return (check_sqr_root(n, num + 1));
}

/**
 * _sqrt_recursion - This function returns the square root of a number
 * @n: Integer to check
 *
 * Return: Natural square root if true or -1 if false
 */
int _sqrt_recursion(int n)
{
	int answer;

	answer = check_sqr_root(n, 1);
	return (answer);
}
