#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_binary - converts a number from uint to binary
 * @b: uint input
 * Return: converted long uint
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int zero_flag;

	zero_flag = 0;
	mask = 4294967296;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (zero_flag == 1)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			zero_flag = 1;
		}
		mask >>= 1;
	}
}
