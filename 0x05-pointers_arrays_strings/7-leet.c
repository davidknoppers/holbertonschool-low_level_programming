#include "holberton.h"

char *leet(char *chr)
{
	char letters[] = "oOlLeEaAtT";
	char leets[] = "0011334477";
	int i,j;
	i = 0;
	while (*(chr+i) != '\0')
{
	j = 0;
	while (j <= 9)
	{
		if (*(chr + i) == letters[j])
			       {
				       *(chr + i) = leets[j];
				       break;
			       }
		j++;
	}
	i++;
}
return (chr);
}
