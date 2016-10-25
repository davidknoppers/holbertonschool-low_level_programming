#include "holberton.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: the given string
 * Return: none
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}
	return (n);
}
/**
 * print_rev - reverses an input string
 *
 * @s: the string to be reversed
 * Return: none
 */
void print_rev(char *s)
{
	int n, end;

	end = _strlen(s);
	for (n = end - 1; n >= 0; n--)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
