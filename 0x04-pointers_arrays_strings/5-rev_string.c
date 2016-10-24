#include "holberton.h"
/**
 * _puts - prints a given string using pointers, in reverse
 *
 * @str: a pointer to a string
 * Return: none
 */

int _strlen(char *s)
{
        int n;

        for (n = 0; *s != '\0'; s++)
                n++;
        return (n);
}
void rev_string(char *s)
{
	char *start = s;
	char *end = start + _strlen(s)-1;
	char temp;
	
	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}
