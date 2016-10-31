#include "holberton.h"
/**
 * _strstr - strings strings
 *
 * @haystack: string to be searched
 * @needle: string to match
 * Return: pointer to match on success, NULL if failure
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;
	char *start;

	temp = needle;
	while (*haystack != '\0')
	{
		start = haystack;
		if (*start == *needle)
		{
			while (*start == *needle)
			{
				start++, needle++;
			}
			if (*needle == '\0')
				return (start);
		}
		haystack++;
		needle = temp;
	}
	return (haystack);
}
