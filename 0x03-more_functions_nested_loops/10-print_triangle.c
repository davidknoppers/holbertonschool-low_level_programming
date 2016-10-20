#include "holberton.h"
/**
 * print_triangle - prints a dynamically sized triangle
 * @size: the height of the triangle
 * Return: none
 */

void print_triangle(int size)
{
	int spaces, hashes, start;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
		spaces = size;
		hashes = size - spaces;
		while (spaces > 0)
		{
			for (start = 2; start <= spaces; start++)
			{
				_putchar(' ');
			}
			for (start = 0; start <= hashes; start++)
			{
				_putchar('#');
			}
			spaces--;
			hashes++;
		_putchar('\n');
	}
}
