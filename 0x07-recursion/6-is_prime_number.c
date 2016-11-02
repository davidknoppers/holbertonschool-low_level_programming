#include "holberton.h"
/**
 * primecheck - checks if a number is prime, believe it or not
 *
 * @n: the number being checked
 * @q: the quotient I try to divide
 * Return: 1 if prime, 0 if not
 */
int primecheck(int n, int q)
{
	if (q <= 1)
		return (1);
	else if (n % q == 0)
		return (0);
	else
		return (primecheck(n, (q - 1)));
}
/**
 * is_prime_number - recursively checks for prime number
 *
 * @n: int, potential prime
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int start, ncopy;

	start = n / 2;
	ncopy = n;
	if (n <= 1)
		return (0);
	if (primecheck(ncopy, start) == 1)
		return (1);
	else
		return (0);
}
