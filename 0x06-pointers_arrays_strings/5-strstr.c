#include "holberton.h"
/**
 * _strstr - strings strings
 *
 * @s: string to be searched
 * @accept: string to match
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
		while (*needle != '\0')
		{
			while (*haystack == *needle)
			{
				haystack++;
				needle++;
			}
			if (*needle == '\0')
				return (start);
		}
		needle = temp;
		haystack++;
	}
	if (*haystack == '\0')
		return ('\0');
	return (haystack);
}
