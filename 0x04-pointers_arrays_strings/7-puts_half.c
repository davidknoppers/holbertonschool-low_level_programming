#include "holberton.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: a given string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * puts_half - prints the second half of a string
 *
 * @str: the given string
 * Return: none
 */
void puts_half(char *str)
{
	int n, start;
	int length;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}
	for (n = start; n < length; n++)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
