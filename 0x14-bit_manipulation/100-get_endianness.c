/**
 * get_endianness - This function checks for endiannesss
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	if (*c)
		return (1);
	else
		return (0);
}
