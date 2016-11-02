#include "holberton.h"
/**
 *  factorial - find a factorial, recursively
 *
 * @n: int, base for factorial
 * Return: an int, value of factorial
 */

int factorial(int n)
{
	if (n <= 1)
		return (n);
	return (n * factorial(n - 1));
}
