#include "holberton.h"

/**
 * _isupper - determines if input is uppercase char
 * @c: a single integer input
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
