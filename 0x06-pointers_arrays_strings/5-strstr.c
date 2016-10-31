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
 * _strstr - strings strings, obviously
 *
 * @haystack: string to be searched
 * @needle: string to match
 * Return: pointer to start of match on success, NULL if failure
 */
char *_strstr(char *haystack, char *needle)
{
	int hay_l, nd_l, n, i;

	hay_l = _strlen(haystack);
	nd_l = _strlen(needle);
	n = 0;
	while (n < (hay_l - nd_l))
	{
		for (i = 0; i < nd_l; i++)
		{
			if (*(needle + i) != *(haystack + n + i))
				break;
			if (i == (nd_l - 1) &&
			    *(needle + i) == *(haystack + n + i))
				return (haystack + n);
		}
		n++;
	}
	*haystack = '\0';
	return (haystack);
}
