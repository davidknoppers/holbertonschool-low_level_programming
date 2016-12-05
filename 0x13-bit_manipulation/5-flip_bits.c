#include "holberton.h"

/**
 * flip_bits - at Holberton School, we flip bits
 * @n: the first number
 * @m: the second number, to be compared with the first
 * Return: number of bits needed to flip from n to m or vv
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int temp;

	count = 0;
	temp = n ^ m;
	for (; temp > 0; temp >>= 1)
	{
		if ((temp & 1) == 1)
			count++;
	}
	return (count);
}
