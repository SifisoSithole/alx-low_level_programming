#include <stdio.h>
/**
 * print_size - This function prints the size of characters
 * @b: Character to print
 */
void print_size(char b)
{
	printf("%02x", b);
}

/**
 * print_buffer - This function prints a buffer
 * @b: Buffer to be printed
 * @size: Size of the buffer to be printed
 */
void print_buffer(char *b, int size)
{
	int i = 0, a, int bytes = 0, int noChar = 1, int space = 1;
	char strPrint[12];

	if (size == 0)
		putchar('\n');
	for (a = 0; a <= size; a++)
	{
		if (noChar <= 10)
		{
			if (b[a] <= 30)
				strPrint[i] = '.';
			else
				strPrint[i] = b[a];
			i++;
			noChar++;
			bytes++;
		}
		else
		{
			strPrint[i] = '\n';
			noChar = 1;
			i = 0;
			printf("%08x: ", (bytes - 10));
			while (strPrint[i] != '\n')
			{
				print_size(strPrint[i]);
				if (space == 2)
				{
					putchar(' ');
					space = 1;
				}
				else
					space++;
				i++;
			}
			printf("%s", strPrint);
			a--;
			i = 0;
		}
	}
}

