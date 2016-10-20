#include "holberton.h"
/**
 * print_numbers - prints 0 through 9
 * Return: none
 */

void print_numbers(void)
{
	int start;

	for (start = '1'; start <= '9'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
