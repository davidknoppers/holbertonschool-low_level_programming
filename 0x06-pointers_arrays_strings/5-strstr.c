#include "holberton.h"
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
 * _strstr - strings strings
 *
 * @haystack: string to be searched
 * @needle: string to match
 * Return: pointer to match on success, NULL if failure
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp, *start;
	int hay_len, ndl_len;

	hay_len = _strlen(haystack);
	ndl_len = _strlen(needle);
	if (hay_len < ndl_len)
		return ('\0');
	temp = needle;
	while (*haystack != '\0')
	{
		start = haystack;
		if (*start == *needle)
		{
			while (*start == *needle && *start != '\0')
			{
				start++, needle++;
				if (*needle == '\0')
					return (haystack);
			}
		}
		haystack++;
		needle = temp;
	}
	return ('\0');
}
