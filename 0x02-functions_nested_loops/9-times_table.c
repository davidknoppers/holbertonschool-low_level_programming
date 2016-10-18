#include "holberton.h"
/**
 * times_table - prints a times table for 9
 * Return: none
 */

void times_table(void)
{
	int first, second, product;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			product = first * second;
			if (second == 0)
			{ 
				_putchar(product + 48);
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(product + 48);
			}
			else
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			if (second == 9)
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
