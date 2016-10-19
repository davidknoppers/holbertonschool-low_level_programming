#include "holberton.h"
/**
 * print_times_table - prints a dynamically sized times table
 * @n: size of the table
 * Return: none
 */

void format_number(int p, int c)
{
	if (c == 0)
	{
		_putchar(p + 48);
	}
	else if (p < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(p + 48);
	}
	else if (p < 100)
	{
		_putchar(' ');
		_putchar(p / 10 + 48);
		_putchar(p % 10 + 48);

	}
	else
	{
		_putchar(p / 100 + 48);
		_putchar((p - 100) / 10 + 48);
		_putchar(p % 10 + 48);
	}
}
void print_times_table(int n)
{
	int product, first, second;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (first = 0; first <= n; first++)
	{
		for (second = 0; second <= n; second++)
		{
			product = first * second;
			format_number(product, second);
			if (second == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		   
		}
	}
}
