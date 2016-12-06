#include "holberton.h"
/**
 * get_bit - right-shifts to get that bit
 * @n: input num
 * @index: index of binary bit to retrieve
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	bit = (n >> index) & 1;
	return (bit);
}