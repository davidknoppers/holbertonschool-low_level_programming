#include "holberton.h"
/**
 * print_sign - specifies sign of input int
 * @n: input, an int
 *
 * Return: information about the number
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('+');
		return (-1);
	}
}
