#include "holberton.h"
/**
 * _strchr - checks for a char in a string
 * @s: the string
 * @c: the char being searched for
 * Return: pointer to char on success, NULL on failure
 */
char *_strchr(char *s, char c)
{
	int len, n;

	if (*s == '\0')
		return (0);
	len = _strlen(s);
	for (n = 0; n <= len; n++)
	{
		if (*(s + n) == c)
			return (s + n);
	}
	return (s + n);
}
