#include "holberton.h"
/**
 * print_alphabet_x10 - like 1-alphabet, but ten times
 * print_alphabet - clone of 1-alphabet 
 * Return: the lowercase alphabet x10
 */
void print_alphabet(void)
{
        int chr = 'a';

        for (chr = 'a'; chr <= 'z'; chr++)
        {
                _putchar(chr);
        }
        _putchar('\n');
}
void print_alphabet_x10(void)
{
	int counter = 0;
	for (counter = 0; counter <= 9; counter ++)
	{
		print_alphabet();
	}
	return (0);
}
