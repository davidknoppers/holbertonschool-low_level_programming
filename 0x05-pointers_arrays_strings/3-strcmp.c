#include "holberton.h"
/**
 * _strcmp - compares two strings and returns their difference
 *
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if match, s1-s2 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int n;

	for (n = 0; *(s1 + n) == *(s2 + n); n++)
	{
		if (*(s1 + n) == '\0')
		{
			return (0);
		}
	}
	return (*(s1 + n) - *(s2 + n));
}
