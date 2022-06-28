#include <stdlib.h>
/**
 * _strlen - This function returns string lenght
 * @s: String
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * argstostr - This function concatenates all the arguments
 * @ac: Number of arguments
 * @av: Arguments stored in a 2D array
 *
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int lenString = 0;
	char *str;
	int y = 0, x = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		lenString += _strlen(av[i]) + 1;

	str = malloc(sizeof(char) * lenString + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < lenString; i++)
	{
		while (av[y][x])
		{
			str[i] = av[y][x];
			x++;
			i++;
		}
		str[i] = '\n';
		x = 0;
		y++;
	}
	str[i] = '\0';

	return (str);
}


