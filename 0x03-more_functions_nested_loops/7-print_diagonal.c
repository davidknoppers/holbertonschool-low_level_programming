#include "holberton.h"
/**
 * print_diagonal - prints a dynamically sized diagonal line
 * @n: the number of backslashes constituting the line
 * Return: none
 */

void print_diagonal(int n)
{
	int start;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (start = 1; start <= n; start++)
	{
		int spaces;

		for (spaces = start - 1; spaces >= 1; spaces--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
