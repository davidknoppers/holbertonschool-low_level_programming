#include "holberton.h"

char *string_toupper(char *chr)
{
	int i;

	i = 0;
	while (*(chr + i) != '\0')
	{
		if (*(chr + i) >= 'a' && *(chr + i) <= 'z')
		{
			*(chr + i) -= 32;
		}
		i++;
	}
	return (chr);
}
