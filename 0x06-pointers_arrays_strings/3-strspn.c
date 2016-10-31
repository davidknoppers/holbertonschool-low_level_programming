#include "holberton.h"
/**
 * _strlen - string length helper
 *
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
/**
 * _strchr - checks for a char in a string
 * @s: the string
 * @c: the char being searched for
 * Return: pointer to char on success, NULL on failure
 */
char *_strchr(char *s, char c)
{
	int len, n;

	len = _strlen(s);
	for (n = 0; n < len; n++)
	{
		if (*(s + n) == c)
			return (s + n);
	}
	s = '\0';
	return (s);
}
/**
 * _strspn - gets length of a substring
 *
 * @s: string to be searched
 * @accept: string to match
 * Return: number of matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int s_len, n, result;

	s_len = _strlen(s);
	n = 0;
	result = 0;
	while (n < s_len)
	{
		if (_strchr(accept, *(s + n)))
			result++, n++;
		else
			return (result);
	}
	return (result);
}
