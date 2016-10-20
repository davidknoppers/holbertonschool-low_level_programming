#include "holberton.h"
/**
 * more_numbers - prints 0 through 14
 * Return: none
 */

void more_numbers(void)
{
	int counter;
	for (counter = 0; counter <= 9; counter++)
	{
		int start;

		for (start = 1; start <= 14; start++)
		{
			if (start / 10 != 0)
			{
				_putchar(start / 10 + 48);
			}
			_putchar(start % 10 + 48);
		}
		_putchar('\n');
	}
}
