#include "holberton.h"
/**
 * _puts_recursion - print a string recursively
 *
 * @s: pointer to beginning of string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
