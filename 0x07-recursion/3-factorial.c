#include "holberton.h"
/**
 *  factorial - find a factorial, recursively
 *
 * @n: int, base for factorial
 * Return: an int, value of factorial multiplied out
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
