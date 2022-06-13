/**
 * _strcpy - This function copies string
 * @dest: Address of where to copy the string
 * @src: String to be coppied
 *
 * Return: The address of dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	do
	{
		dest[index] = src[index];
		index++;
	}
	while (src[index] != '\0');
	return (dest);

}
