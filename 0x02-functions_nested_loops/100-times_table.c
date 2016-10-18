#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints a dynamically sized times table
 * @n: size of the table
 * Return: none
 */

void print_times_table(int n)
{
	int product, first, second;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (first = 0; first <= n; first++)
	{
		for (second = 0; second <= n; second++)
		{
			product = first * second;
			if (second == 0)
			{
				printf("%u", product);
			}
			else if (product < 10)
			{
				printf("  %u", product);
			}
			else if (product < 100)
			{
				printf(" %u", product);
			}
			else
			{
				printf("%u", product);
			}
			if (second == n)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
}
