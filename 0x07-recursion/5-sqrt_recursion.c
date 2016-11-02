#include "holberton.h"
/**
 * sqrt_helper - actually finds the square root
 *
 * @n: the number to be sqrt'd
 * @base: the potential square root, incremented
 * Return: sqrt if valid, -1 otherwise
 */

int sqrt_helper(int n, int base)
{
	if (n - base * base == 0)
		return (base);
	else if (n < base * base)
		return (-1);
	else
		return (sqrt_helper(n, (base + 1)));
}
/**
 *  _sqrt_recursion - wrapper for sqrt helper
 *
 * @n: int to find the sqrt of
 * Return: sqrt if number has one, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 2));
}
