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
 * rev_string - reverses an input string
 *
 * @s: the string to be reversed
 * Return: none
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = start + _strlen(s) - 1;
	char temp;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
