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

	while (1)
	{
		dest[index] = src[index];
		if (src[index] == '\0')
			break;
		index++;
	}
	return (dest);

}
