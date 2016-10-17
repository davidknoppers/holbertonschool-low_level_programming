#include <unistd.h>
#include "holberton.h"
void print_alphabet(void)
{
	int chr = 'a';
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
