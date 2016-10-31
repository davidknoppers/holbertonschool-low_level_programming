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
 * _strpbrk - strips... bark?
 *
 * @s: string to be searched
 * @accept: string to match
 * Return: pointer to match on success, NULL if failure
 */
char *_strpbrk(char *s, char *accept)
{
	int s_len, cept_len, n, i;

	s_len = _strlen(s);
	cept_len = _strlen(accept);
	n = 0;
	while (n < s_len)
	{
		for (i = 0; i < cept_len; i++)
		{
			if (*(accept + i) == *(s + n))
				return (s + n);
		}
		n++;
	}
	*s = '\0';
	return (s);
}
