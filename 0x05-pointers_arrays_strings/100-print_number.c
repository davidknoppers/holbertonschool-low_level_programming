#include "holberton.h"

/**
 * print_number - my solution from 0x03
 *
 * @n: the number to be printed
 * Return: the number
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n > 0)
	{
		n *= -1;
	}
	else
	{
		_putchar('-');
	}
	if ((n / 10) != 0)
	{
		print_number((n / 10) * -1);
	}
	_putchar((n % 10) * -1 + '0');
}
