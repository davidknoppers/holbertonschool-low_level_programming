#include "holberton.h"
/**
 * print_line - prints a dynamically sized line
 * @n: the number of underscores constituting the line
 * Return: none
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
