#include "holberton.h"
#include <stdio.h>


/**
 * print_binary - converts a number from uint to binary
 * @n: uint input
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
		printf("0");
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (zero_flag == 1)
				printf("0");
		}
		else
		{
			printf("1");
			zero_flag = 1;
		}
		mask >>= 1;
	}
}
