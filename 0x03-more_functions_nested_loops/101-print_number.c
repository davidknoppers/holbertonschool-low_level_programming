#include "holberton.h"

/**
 * print_number - prints a number using only _putchar
 * @n: integer to be printed
 * Return: none
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
