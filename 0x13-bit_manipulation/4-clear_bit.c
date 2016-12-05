/**
 * clear_bit - sets bit to 0 at given index
 * @n: input number
 * @index: index to set to 1
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;
	if (index > 64)
		return (-1);
/*invert the mask, then "and" it*/
	*n &= ~(mask);

	return (1);
}
