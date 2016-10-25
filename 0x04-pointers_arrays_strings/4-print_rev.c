#include "holberton.h"
/**
 * _strlen - returns the length of a given string
 *
 * @s: a pointer to a string
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
 * _puts - prints a given string with only _putchar
 *
 * @str: a pointer to an input string
 * Return: none
 */
void _puts(char *str)
{
	int n, end;

	end = _strlen(str);

	for (n = end - 1; n >= 0 ; n--)
	{
		_putchar(*(str + n));
	}
	_putchar('\n');
}
