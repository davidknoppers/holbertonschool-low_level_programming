#include "holberton.h"
/**
 * cap_string - capitalizes the words, with specified delimiters
 *
 * @chr: string to be capitalized
 * Return: capitalized string chr
 */
char *cap_string(char *chr)
{
	int i, n;

	if (*chr == '\0')
	{
		return (chr);
	}
	if (*chr >= 'a' && *chr <= 'z')
	{
		*chr -= 32;
	}
	i = 1;
	while (*(chr + i) != '\0')
	{
		n = *(chr + (i - 1));
		if ((n == ',' || n == ';' || n == '.' || n == '!' || n == '?'
		     || n == '"' || n == '(' || n == ')' || n == '{' || n == '}'
		     || n == '\n' || n == ' ' || n == '\t')
		    && (*(chr + i) >= 'a' && *(chr + i) <= 'z'))
		{
			*(chr + i) -= 32;
		}
		i++;
	}
	return (chr);
}
