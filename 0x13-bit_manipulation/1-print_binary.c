#include "holberton.h"
#include <stdio.h>
/**
 * binary_recurse - prints a num in binary
 * @n: an integer, divided by two each call
 *
 */
void binary_recurse(unsigned long int n)
{
	while (n > 0)
	{
		binary_recurse(n >> 1);
		if (n & 1)
		{
			printf("1");
			return;
		}
		printf("0");
		return;
	}
}
/**
 * print_binary - wrapper for recursive print binary fn
 * @n: uint input
 * Return: none
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	binary_recurse(n);
}
