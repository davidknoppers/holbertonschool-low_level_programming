#include "holberton.h"
/**
 * print_most_numbers - prints all single digits except 2 and 4
 * Return: none
 */

void print_most_numbers(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		if (!(start == '2' || start == '4'))
		{
			_putchar(start);
		}
	}
	_putchar('\n');
}
