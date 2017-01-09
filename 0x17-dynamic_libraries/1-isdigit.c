#include "holberton.h"

/**
 * _isdigit - determines if input is uppercase char
 * @c: a single integer input
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}
