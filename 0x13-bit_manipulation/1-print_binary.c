#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - uses iteration to print n into binary
 * @n: input number
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	char c;
	int printflag, bitshift;

	bitshift = sizeof(unsigned long int) * 8 - 1;
	printflag = 0;

	if (n <= 1)
	{
		putchar(n + '0');
		return;
	}
	while (bitshift >= 0)
	{
		temp = n >> bitshift;
		c = temp & 1;
		if (printflag == 1)
			putchar(c + '0');
		else if (c == 1)
		{
			printflag = 1;
			putchar(c + '0');
		}
		bitshift--;
	}
}
