#include "holberton.h"
/**
 * main - print lowercase alphabet
 * Return: void
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
