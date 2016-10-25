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
 * puts2 - prints about half a given string
 *
 * @str: the given string
 * Return: none
 */
void puts2(char *str)
{
	int n, end;
	int length;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		end = length - 2;
	}
	else
	{
		end = length - 1;
	}
	for (n = 0; n <= end; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(*(str + n));
		}
	}
	_putchar('\n');
}
