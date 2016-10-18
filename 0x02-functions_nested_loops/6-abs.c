#include "holberton.h"
/**
 * _abs - computes absolute valueof n
 * @n: integer inpute
 *
 * Return: the absolute value of the number
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * -1;
	}
	else
	{
		result = n;
	}
	return (result);
}
