#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: integer taken as parameter
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 99 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
