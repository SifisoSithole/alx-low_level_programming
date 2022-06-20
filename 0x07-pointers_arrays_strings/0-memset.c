/**
 * _memset - This function fills memory with a constant byte
 * @s: The address of the memory area
 * @b: Constant byte to fill the memory area with
 * @n: Number of bytes to fill
 *
 * Return: The address of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
