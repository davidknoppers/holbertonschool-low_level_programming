#include "holberton.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int start;

	for (start = 0; start <= 9; start++)
	{
		int chr;

		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}
		_putchar('\n');
	}
}
