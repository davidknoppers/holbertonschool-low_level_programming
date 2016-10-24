#include "holberton.h"
/**
 * _puts - prints a given string using pointers
 *
 * @str: a pointer to a string
 * Return: none
 */
void _puts(char *str)
{
	int n;

	for (n = 0; *(str + n) != '\0'; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
