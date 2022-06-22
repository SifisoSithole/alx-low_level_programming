/**
 * _pow_recursion - This function returns the value of x to the power of y
 * @x: Integer
 * @y: Exponent
 *
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int num = x;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	num = num * _pow_recursion(x, y - 1);

	return (num);
}
