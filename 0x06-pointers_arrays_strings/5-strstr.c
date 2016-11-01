#include "holberton.h"
/**
 * _strstr - it strings strings, duhhhhhh
 *
 * @haystack: string to be searched
 * @needle: string to match
 * Return: pointer to match on success, NULL if failure
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp, *start;

	while (*haystack != '\0')
	{
		start = haystack;
		temp = needle;
		while (*haystack == *temp && *haystack != '\0'
		       && *temp != '\0')
		{
			haystack++, temp++;
		}
		if (*temp == '\0')
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}
