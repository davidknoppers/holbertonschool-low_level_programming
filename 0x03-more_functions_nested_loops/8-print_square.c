#include "holberton.h"
/**
 * print_square - prints a dynamically sized square
 * @size: the x*y size of the square
 * Return: none
 */

void print_square(int size)
{
	int length, width;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (length = 1; length <= size; length++)
	{
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
			if (width == size)
			{
				_putchar('\n');
			}
		}
	}
}
