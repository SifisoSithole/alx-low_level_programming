/**
 * _memcpy - This function copies memory area
 * @dest: Memory area to place copied bytes
 * @src: Data to be copied
 * @n: Number of bytes to copy from src
 *
 * Return: The address of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}
