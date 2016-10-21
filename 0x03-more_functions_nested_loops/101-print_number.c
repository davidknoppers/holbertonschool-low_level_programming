#include "holberton.h"

/**
 * print_number_2 - prints a number using only _putchar
 * @n: integer to be printed
 * Return: none
 */

void print_number_2(int n)
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
	if ((n / 10)*-1 != 0)
	{
	  print_number_2((n / 10)*-1);
	}
	_putchar((n % 10)* -1 + '0');
}
