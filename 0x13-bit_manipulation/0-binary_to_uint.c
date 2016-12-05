#include "holberton.h"
/**
 * binary_check - makes sure the string is binary only
 *
 * @s: a given string
 * Return: 1 or -1
 */

int binary_check(const char *s)
{
	for (; *s != '\0'; s++)
	{
		if (*s != '1' && *s != '0')
			return (-1);
	}
	return (1);
}
/**
 * binary_to_uint - converts a number from binary to uint
 * @b: ptr to string, input
 * Return: converted string as uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i, check;
	unsigned int n;

	if (b == NULL)
		return (0);
	check = binary_check(b);
	if (check != 1)
		return (0);
	i = 0, n = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			n = (n << 1) | 1;
		else
			n <<= 1;
		i++;
	}
	return (n);
}
