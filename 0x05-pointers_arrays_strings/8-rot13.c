#include "holberton.h"
/**
 * rot13 - rot13codes a string
 *
 * @chr: the string to be encoded
 * Return: the encoded string
 */

char *rot13(char *chr)
{
	char pre[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char post[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	i = 0;
	while (*(chr + i) != '\0')
	{
		j = 0;
	while (j <= 52)
	{
		if (*(chr + i) == pre[j])
		{
			*(chr + i) = post[j];
			break;
		}
		j++;
	}
	i++;
	}
	return (chr);
}
