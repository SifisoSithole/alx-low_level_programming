#include <stdlib.h>

/**
 * allocate_mem - This functions allocates memory
 * @arrStr: pointer to array
 * @str: String
 *
 */
void allocate_mem(char **arrStr, char *str)
{
	int lenWord = 0, i, index = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			lenWord++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				arrStr[index] = malloc(sizeof(char) * lenWord + 1);
				if (arrStr[index] == NULL)
				{
					for (i = 0; i < index; i++)
					{
						free(arrStr[index]);
						arrStr[index] = NULL;
					}
					free(arrStr);
					break;
				}
				lenWord = 0;
				index++;
			}
		}
	}
}

/**
 * strtow - This function splits a string int words
 * @str: String to split
 *
 * Return: Pointer to the array of words
 */
char **strtow(char *str)
{
	char **arrStr;
	int i, noWords = 0, x = 0, y = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				noWords++;
		}
	}
	if (noWords == 0)
		return (NULL);
	arrStr = malloc(sizeof(char *) * noWords + 1);
	if (arrStr == NULL)
		return (NULL);
	allocate_mem(arrStr, str);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			arrStr[y][x] = str[i];
			x++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				arrStr[y][x] = '\0';
				x = 0;
				y++;
			}
		}
	}
	arrStr[y] = NULL;
	return (arrStr);
}

