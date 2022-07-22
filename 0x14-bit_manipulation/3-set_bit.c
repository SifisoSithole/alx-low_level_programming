/**
 * set_bit - This function sets the bit at index to 1
 * @n: Number to change
 * @index: Index of the bit to change
 *
 * Return: 1 on sucess or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
