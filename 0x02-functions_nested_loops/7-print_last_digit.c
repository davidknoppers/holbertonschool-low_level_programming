#include "holberton.h"

/**
 * print_last_digit - prints the last digit of any int.
 *
 * Return: last digit of int
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n %= 10;
	_putchar(n+48);
	return (n);
}
